/*
 * XREFs of CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x1409DA09C (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmLockHiveSecurityShared @ 0x140BA9A5C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpLightWeightCommitSetSecDescUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r15
  ULONG_PTR v5; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD **)(a1 + 104);
  v18 = 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(v2 + 32);
  v7 = *(unsigned int *)(v2 + 40);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v7, &v18);
  else
    CellFlat = HvpGetCellPaged(v5, v7, &v18);
  v9 = *(_DWORD *)(CellFlat + 44);
  v10 = CellFlat;
  *(_DWORD *)(CellFlat + 44) = *v3;
  CmpDereferenceSecurityNode(v5, v9);
  *v3 = -1;
  *(_QWORD *)(v10 + 4) = *a2;
  v11 = *a2;
  v12 = *(_QWORD *)(a1 + 48);
  v17 = 0;
  *(_QWORD *)(v12 + 168) = v11;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  BugCheckParameter4 = *(unsigned int *)(v10 + 44);
  v14 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(v14 + 88) = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v14 + 32);
    CmLockHiveSecurityShared(v15);
    if ( !CmpFindSecurityCellCacheIndex(v15, BugCheckParameter4, &v17) )
    {
      *(_QWORD *)(v14 + 88) = 0LL;
      KeBugCheckEx(0x51u, 4uLL, 1uLL, v14, BugCheckParameter4);
    }
    *(_QWORD *)(v14 + 88) = *(_QWORD *)(*(_QWORD *)(v15 + 1888) + 16LL * v17 + 8);
    CmUnlockHiveSecurity(v15);
  }
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v5, &v18);
  else
    HvpReleaseCellPaged(v5, (unsigned int *)&v18);
  result = CmpLightWeightCleanupSetSecDescUoW(v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
