/*
 * XREFs of MiHotPatchProcess @ 0x1407E2E80
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 *     MiImageVadHotPatchEligible @ 0x1407E325C (MiImageVadHotPatchEligible.c)
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     RtlIsPatchMachineApplicable @ 0x14081F62C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiHotPatchProcess(__int64 a1, int a2, int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 v6; // r15
  int v10; // edi
  __int64 i; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // rdi
  int v16; // r15d
  PVOID v17; // rcx
  bool v18; // zf
  unsigned __int16 v20; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_WORD *)(a1 + 1772);
  v20 = v6;
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
          v15 = (void *)((*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
          MiReferenceVad(v12);
          MiUnlockVadShared((__int64)CurrentThread, v12);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          v10 = MiInjectThreadForHotPatch(v15);
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVadShared((__int64)CurrentThread, v12);
          v16 = MiVadDeleted(v12);
          MiUnlockAndDereferenceVadShared(v17);
          if ( v10 < 0 )
            break;
          if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
            goto LABEL_18;
          v18 = v16 == 0;
          v6 = v20;
          if ( !v18 )
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
