/*
 * XREFs of MiLockVadRange @ 0x1408D98A0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x140683358 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsMetadataBitmap @ 0x1408D9B08 (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r12d
  int v6; // eax
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *FirstVad; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 NextVad; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v18; // rsi
  __int64 v19; // r14
  unsigned __int64 *v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rbp
  __int64 *v23; // rax
  __int64 *v24; // r15
  unsigned __int64 v25; // rdi
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v28; // [rsp+28h] [rbp-50h]
  _OWORD v29[4]; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v28 = CurrentThread;
  v29[0] = 0LL;
  v27 = 1;
  v6 = a4;
  v7 = a2;
LABEL_2:
  if ( v6 )
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( !v5 || (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
    return 0LL;
  if ( v7 == -1LL )
    FirstVad = (struct _LIST_ENTRY *)MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(v7);
  v10 = 0LL;
  v11 = (unsigned __int64)FirstVad;
  v12 = 0LL;
  for ( i = (unsigned __int64)FirstVad; i; i = NextVad )
  {
    NextVad = MiGetNextVad(i);
    if ( a3 == -1LL )
      goto LABEL_13;
    v15 = *(unsigned int *)(i + 28);
    if ( a3 <= (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
    {
      NextVad = 0LL;
      goto LABEL_13;
    }
    if ( !NextVad )
      goto LABEL_41;
    if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 != (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
    {
      NextVad = 0LL;
LABEL_41:
      v5 = 0;
      v27 = 0;
    }
LABEL_13:
    if ( (unsigned int)MiVadIsMetadataBitmap(i) )
    {
      *((_QWORD *)v29 + v12) = i;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
      {
        v23 = KeAbPreAcquire(i + 40, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 40), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 40), v23, i + 40);
        if ( v24 )
          *((_BYTE *)v24 + 10) = 1;
        CurrentThread = v28;
      }
      else
      {
        MiLockVad((__int64)CurrentThread, i);
      }
      v5 = v27;
      if ( (unsigned int)MiVadDeleted(i) || !v27 )
      {
        MiReferenceVad(v16);
        if ( v11 != i )
        {
          do
          {
            v25 = MiGetNextVad(v11);
            if ( !(unsigned int)MiVadIsMetadataBitmap(v11) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
              KeAbPostRelease(v11 + 40);
            }
            v11 = v25;
          }
          while ( v25 != i );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(i) )
          MiWaitForVadDeletion(v26);
        MiUnlockAndDereferenceVad((char *)i);
        v6 = a4;
        v7 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
  }
  if ( v5 && (_DWORD)v12 )
  {
    v18 = (__int64 *)v29;
    v19 = (unsigned int)v12;
    do
    {
      if ( v10 )
      {
        v20 = (unsigned __int64 *)(*v18 + 40);
        v21 = KeAbPreAcquire((__int64)v20, 0LL);
        v22 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
          ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
        if ( v22 )
          *((_BYTE *)v22 + 10) = 1;
      }
      else
      {
        MiLockVad((__int64)CurrentThread, *v18);
      }
      ++v10;
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  return v10;
}
