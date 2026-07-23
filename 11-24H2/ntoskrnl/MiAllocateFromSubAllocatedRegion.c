/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x1408DE814
 * Callers:
 *     MiCreatePebOrTeb @ 0x1408DE464 (MiCreatePebOrTeb.c)
 *     MmCreateTeb @ 0x1408DE4D4 (MmCreateTeb.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14026DCA0 (RtlFindClearBitsAndSetEx.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 */

__int64 __fastcall MiAllocateFromSubAllocatedRegion(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v7; // r12
  __int64 Process; // r14
  __int64 v9; // rsi
  _QWORD *v10; // r13
  _QWORD *i; // rsi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rcx
  bool v17; // zf
  void *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ebx
  int NewSubAllocatedRegion; // esi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int16 v26; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v27; // [rsp+B2h] [rbp+Ah]
  __int64 v28; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v29; // [rsp+C0h] [rbp+18h]
  int v30; // [rsp+C8h] [rbp+20h] BYREF
  int v31; // [rsp+CCh] [rbp+24h]

  v31 = HIDWORD(a4);
  v29 = a3;
  v28 = a2;
  v27 = HIWORD(a1);
  v30 = 0;
  v4 = 0LL;
  v26 = 0;
  v5 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64)(a2 + 4095) >> 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1040);
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  else
  {
    v10 = (_QWORD *)(v9 + 1032);
    while ( 1 )
    {
      LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSetEx(i - 2, v7, (unsigned __int64)*((unsigned int *)i + 8) >> 2);
        v13 = ClearBitsAndSet;
        if ( ClearBitsAndSet != -1LL )
        {
          *((_DWORD *)i + 6) += v7;
          v14 = i[4] & 3 | (4 * (v7 + ClearBitsAndSet));
          v15 = *((_DWORD *)i + 6);
          *((_DWORD *)i + 8) = v14;
          if ( v15 >= *((_DWORD *)i + 7) )
          {
            v24 = *i;
            if ( *(_QWORD **)(*i + 8LL) != i || (v25 = (_QWORD *)i[1], (_QWORD *)*v25 != i) )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            *i = 0LL;
          }
          v4 = i[2];
          v5 = (v13 << 12)
             + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
          break;
        }
      }
      UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      if ( v4 )
        break;
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(v16, v7);
      if ( NewSubAllocatedRegion < 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        v17 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v17
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        return (unsigned int)NewSubAllocatedRegion;
      }
    }
    MiReferenceVad(v4);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    MiLockVad((__int64)CurrentThread, v4);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (unsigned int)MiVadDeleted(v4) )
    {
      MiUnlockAndDereferenceVad(v18);
      return 3221225738LL;
    }
    v19 = v28;
    v21 = MiCommitExistingVad(
            (ULONG_PTR)v18,
            v5,
            v28,
            (*(_DWORD *)(v4 + 48) >> 7) & 0x1F,
            0,
            0LL,
            0,
            0,
            0LL,
            &v30,
            &v26);
    if ( v21 < 0 )
    {
      MiFreeToSubAllocatedRegion((_QWORD *)v4, v20, v5, v19);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v4);
      *v29 = v5;
    }
    return (unsigned int)v21;
  }
}
