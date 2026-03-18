/*
 * XREFs of MiHotPatchProcess @ 0x1407F2D08
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1407F2C54 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiUnlockVadShared @ 0x1402BA960 (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     MiGetFirstVad @ 0x1404043B8 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140404438 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404044B8 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiImageVadHotPatchEligible @ 0x1407F30E4 (MiImageVadHotPatchEligible.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3144 (MiInjectThreadForHotPatch.c)
 *     RtlIsPatchMachineApplicable @ 0x14082F36C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiHotPatchProcess(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 v6; // r15
  int v10; // edi
  __int64 i; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  unsigned __int16 v23; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_WORD *)(a1 + 1772);
  v23 = v6;
  v10 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
  {
LABEL_18:
    v10 = -1073741558;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1061LL) & 2) != 0 )
  {
    v10 = -1073741637;
  }
  else
  {
LABEL_4:
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v12) )
    {
      v12 = i;
      if ( !i )
        break;
      if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
      {
        MiLockVadShared((__int64)CurrentThread, i);
        if ( !(unsigned int)MiVadDeleted(v12)
          && (unsigned int)MiImageVadHotPatchEligible()
          && (v13 = *(_QWORD *)(***(_QWORD ***)(v12 + 72) + 56LL), *(_DWORD *)(v13 + 60) == a2)
          && *(_DWORD *)(v13 + 72) == a3
          && (unsigned __int8)RtlIsPatchMachineApplicable(v6, a4) )
        {
          v15 = (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
          MiReferenceVad(v12);
          MiUnlockVadShared((__int64)CurrentThread, v12);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          v10 = MiInjectThreadForHotPatch(v15, a2, a3);
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVadShared((__int64)CurrentThread, v12);
          v16 = MiVadDeleted(v12);
          MiUnlockAndDereferenceVadShared(v18, v17, v19, v20);
          if ( v10 < 0 )
            break;
          if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
            goto LABEL_18;
          v21 = v16 == 0;
          v6 = v23;
          if ( !v21 )
            goto LABEL_4;
        }
        else
        {
          MiUnlockVadShared((__int64)CurrentThread, v12);
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  return (unsigned int)v10;
}
