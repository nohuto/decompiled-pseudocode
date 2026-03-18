/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x1409C33C4
 * Callers:
 *     MiCreatePebOrTeb @ 0x1409C3014 (MiCreatePebOrTeb.c)
 *     MmCreateTeb @ 0x1409C3084 (MmCreateTeb.c)
 * Callees:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403A4180 (RtlFindClearBitsAndSetEx.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  void *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  int v23; // ebx
  int NewSubAllocatedRegion; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int16 v32; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v33; // [rsp+B2h] [rbp+Ah]
  __int64 v34; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v35; // [rsp+C0h] [rbp+18h]
  int v36; // [rsp+C8h] [rbp+20h] BYREF
  int v37; // [rsp+CCh] [rbp+24h]

  v37 = HIDWORD(a4);
  v35 = a3;
  v34 = a2;
  v33 = HIWORD(a1);
  v36 = 0;
  v4 = 0LL;
  v32 = 0;
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
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v29, v28);
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
            v30 = *i;
            if ( *(_QWORD **)(*i + 8LL) != i || (v31 = (_QWORD *)i[1], (_QWORD *)*v31 != i) )
              __fastfail(3u);
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
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
        v19 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v19
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v27, v26);
        }
        return (unsigned int)NewSubAllocatedRegion;
      }
    }
    MiReferenceVad(v4);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    MiLockVad((__int64)CurrentThread, v4);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v18, v17);
    if ( (unsigned int)MiVadDeleted(v4) )
    {
      MiUnlockAndDereferenceVad(v20);
      return 3221225738LL;
    }
    v21 = v34;
    v23 = MiCommitExistingVad(
            (ULONG_PTR)v20,
            v5,
            v34,
            (*(_DWORD *)(v4 + 48) >> 7) & 0x1F,
            0,
            0LL,
            0,
            0,
            0LL,
            &v36,
            &v32);
    if ( v23 < 0 )
    {
      MiFreeToSubAllocatedRegion((_QWORD *)v4, v22, v5, v21);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v4);
      *v35 = v5;
    }
    return (unsigned int)v23;
  }
}
