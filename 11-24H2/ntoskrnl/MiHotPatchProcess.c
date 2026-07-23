/*
 * XREFs of MiHotPatchProcess @ 0x1407F32D8
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiImageVadHotPatchEligibleEx @ 0x14067E350 (MiImageVadHotPatchEligibleEx.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3738 (MiInjectThreadForHotPatch.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     RtlIsPatchMachineApplicable @ 0x14082FB64 (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiHotPatchProcess(__int64 a1, int a2, int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // r15d
  unsigned __int16 v6; // r13
  unsigned int v10; // edi
  __int64 i; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // r15
  int v16; // r13d
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  unsigned __int16 v25; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = *(_WORD *)(a1 + 1772);
  v25 = v6;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
  {
LABEL_24:
    v10 = -1073741558;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1061LL) & 2) != 0 )
  {
    v10 = -1073741637;
  }
  else
  {
    v10 = 0;
LABEL_5:
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v12) )
    {
      v12 = i;
      if ( !i )
        break;
      if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
      {
        MiLockVadShared((__int64)CurrentThread, i);
        if ( !(unsigned int)MiVadDeleted(v12)
          && (v13 = *(_QWORD *)(***(_QWORD ***)(v12 + 72) + 56LL), *(_DWORD *)(v13 + 60) == v5)
          && *(_DWORD *)(v13 + 72) == a3
          && (unsigned __int8)RtlIsPatchMachineApplicable(v6, a4) )
        {
          v15 = (void *)((*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
          v16 = MiImageVadHotPatchEligibleEx(v12);
          if ( v16 )
          {
            MiUnlockVadShared((__int64)CurrentThread, v12);
            if ( *(_QWORD *)&qword_140E37658
              && **(_DWORD **)&qword_140E37658
              && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
            {
              v17 = (int)v15;
              v5 = a2;
              MiLogHotPatchOperationStatus(a2, a3, v17, v16, 8);
            }
            else
            {
              v5 = a2;
            }
            v6 = v25;
          }
          else
          {
            MiReferenceVad(v12);
            MiUnlockVadShared((__int64)CurrentThread, v12);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
            MiInjectThreadForHotPatch(v15);
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
            MiLockVadShared((__int64)CurrentThread, v12);
            v18 = MiVadDeleted(v12);
            MiUnlockAndDereferenceVadShared(v20, v19, v21, v22);
            if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
              goto LABEL_24;
            v6 = v25;
            v23 = v18 == 0;
            v5 = a2;
            if ( !v23 )
              goto LABEL_5;
          }
        }
        else
        {
          MiUnlockVadShared((__int64)CurrentThread, v12);
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  return v10;
}
