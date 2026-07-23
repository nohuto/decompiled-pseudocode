/*
 * XREFs of MiPrepareToHotPatchImage @ 0x1407F5C30
 * Callers:
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     RtlFindNextForwardRunClear @ 0x1403C3BB0 (RtlFindNextForwardRunClear.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     RtlAreBitsSet @ 0x140441BC0 (RtlAreBitsSet.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1406A44F8 (RtlHotPatchSynchronizationRequired.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F584C (MiMapHotPatchImageInSystemSpace.c)
 *     MiProcessHotPatchUndoTable @ 0x1407F6330 (MiProcessHotPatchUndoTable.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14082F5C8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14082F7B8 (RtlEnumerateHotPatchPatches.c)
 *     RtlFindHotPatchBaseMachine @ 0x14082F88C (RtlFindHotPatchBaseMachine.c)
 *     RtlpCheckFunctionPatchApplied @ 0x140B6613C (RtlpCheckFunctionPatchApplied.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  _DWORD *v4; // rsi
  unsigned __int8 v6; // r12
  __int64 Pool; // rax
  _RTL_BITMAP *v8; // rcx
  int v9; // esi
  unsigned int *v10; // r15
  __int64 v11; // rax
  _RTL_BITMAP *v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  int *v15; // r13
  int v16; // r8d
  unsigned int v17; // r13d
  unsigned int *v18; // r8
  __int64 v19; // rax
  _RTL_BITMAP *v20; // rcx
  __int64 v21; // rcx
  ULONG v22; // r15d
  __int64 j; // rsi
  unsigned int v24; // r11d
  __int64 v25; // r15
  __int64 v26; // r12
  _BYTE *v27; // rdx
  unsigned int i; // r10d
  __int64 v29; // rcx
  int v30; // eax
  ULONG v31; // r14d
  _QWORD *v32; // r12
  ULONG NextForwardRunClear; // eax
  ULONG v34; // r15d
  int v35; // r14d
  __int64 v36; // rdx
  int v38; // [rsp+20h] [rbp-128h]
  int v39; // [rsp+40h] [rbp-108h]
  int v40; // [rsp+48h] [rbp-100h]
  int v41; // [rsp+50h] [rbp-F8h]
  int v42; // [rsp+58h] [rbp-F0h]
  int v43; // [rsp+60h] [rbp-E8h]
  __int64 v44; // [rsp+90h] [rbp-B8h]
  __int128 v45; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE *v46; // [rsp+A8h] [rbp-A0h]
  _BYTE *v47; // [rsp+B0h] [rbp-98h]
  __int64 v48; // [rsp+B8h] [rbp-90h]
  _BYTE v49[136]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int *v50; // [rsp+150h] [rbp+8h]
  _BYTE *StartingRunIndex; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int8 v53; // [rsp+168h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v4 = a2;
  v48 = a1;
  v45 = 0LL;
  memset_0(v49, 0, 0x48uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = v49;
    StartingRunIndex = v49;
    v6 = 1;
  }
  v53 = v6;
  v47 = v3;
  Pool = MiAllocatePool(
           0x100uLL,
           8 * ((unsigned int)((*(_DWORD *)(a1 + 32) & 0x3F000) != 0) + 2 + (*(_DWORD *)(a1 + 32) >> 18)),
           538996045);
  *(_QWORD *)(a1 + 48) = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = *(_DWORD *)(a1 + 32) >> 12;
    *(_QWORD *)(Pool + 8) = Pool + 16;
  }
  v8 = *(_RTL_BITMAP **)(a1 + 48);
  if ( !v8 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(v8);
  v10 = (unsigned int *)(v3 + 16);
  v46 = v3 + 16;
  *(_DWORD *)(a1 + 36) = 16 * *((_DWORD *)v3 + 4);
  if ( !v4 )
  {
    v11 = MiAllocatePool(0x40uLL, 8 * (((*v10 & 0x3F) != 0) + 2 + (*v10 >> 6)), 538996045);
    *(_QWORD *)(a1 + 40) = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = *v10;
      *(_QWORD *)(v11 + 8) = v11 + 16;
    }
    v12 = *(_RTL_BITMAP **)(a1 + 40);
    if ( v12 )
    {
      RtlClearAllBits(v12);
      MiProcessHotPatchUndoTable(a1, v3);
      v15 = 0LL;
LABEL_31:
      if ( !v6 )
      {
        v24 = *((_DWORD *)v3 + 4);
        v25 = *((_QWORD *)v3 + 3);
        v26 = *(_QWORD *)(a1 + 24);
        v27 = *(_BYTE **)(a1 + 8);
        StartingRunIndex = v27;
        for ( i = 0; i < v24; ++i )
        {
          v29 = *(unsigned int *)(v25 + 8LL * i);
          if ( (_DWORD)v29 )
          {
            v30 = RtlpCheckFunctionPatchApplied(&v27[v29], v27, v13, v26);
            if ( v30 != i )
              return (unsigned int)-1073740628;
            v27 = StartingRunIndex;
          }
        }
        LOBYTE(StartingRunIndex) = 0;
        RtlHotPatchSynchronizationRequired(
          *(_QWORD *)(a1 + 8),
          v4,
          v15,
          v14,
          v38,
          *(_QWORD *)(a1 + 24),
          *((_QWORD *)v3 + 3),
          *(PRTL_BITMAP *)(a1 + 40),
          v39,
          v40,
          v41,
          v42,
          v43,
          &StartingRunIndex);
        RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
        if ( (_BYTE)StartingRunIndex )
          *(_DWORD *)(a1 + 156) |= 1u;
      }
      v31 = 0;
      LODWORD(StartingRunIndex) = 0;
      v32 = (_QWORD *)(v48 + 8);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), v31, (PULONG)&StartingRunIndex);
        v34 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          break;
        v32 = (_QWORD *)(a1 + 8);
        v35 = (int)StartingRunIndex;
        v9 = MiPrepareImagePagesForHotPatch(
               (__int64 *)a1,
               *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
               NextForwardRunClear);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v31 = v34 + v35;
        LODWORD(StartingRunIndex) = v31;
      }
      v9 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
      if ( v9 >= 0 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
        *(_QWORD *)(a1 + 72) = v36;
        *(_QWORD *)(a1 + 80) = v36 + *(_QWORD *)(a1 + 24) - *v32;
        return 0;
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741670;
  }
  v44 = (__int64)v4 + *(unsigned int *)(RtlFindHotPatchBaseMachine(v4, *(unsigned __int16 *)(a1 + 136)) + 24);
  v9 = RtlCountRequiredHotPatchAddressTableEntries(
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 32),
         v16,
         *(_QWORD *)(a1 + 24),
         *v10,
         (__int64)v4,
         v44,
         v6);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v17 = *v10;
  v18 = (unsigned int *)(v47 + 20);
  v50 = (unsigned int *)(v47 + 20);
  if ( !v6 )
  {
    v19 = MiAllocatePool(0x40uLL, 8 * ((v17 >> 6) + ((v17 & 0x3F) != 0) + 2), 538996045);
    *(_QWORD *)(a1 + 40) = v19;
    if ( v19 )
    {
      *(_DWORD *)v19 = v17;
      *(_QWORD *)(v19 + 8) = v19 + 16;
    }
    v20 = *(_RTL_BITMAP **)(a1 + 40);
    if ( !v20 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v20);
    MiProcessHotPatchUndoTable(a1, v3);
    v18 = v50;
  }
  if ( !*(_DWORD *)(a1 + 36)
    || (v9 = MiPrepareImagePagesForHotPatch((__int64 *)a1, *(_QWORD *)(a1 + 24), *v18), v9 >= 0) )
  {
    *(_QWORD *)&v45 = a1;
    *((_QWORD *)&v45 + 1) = v6;
    v15 = (int *)v44;
    RtlEnumerateHotPatchPatches(a2, v44, MiPrepareToHotPatchImagePatchCallback, &v45);
    v21 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
    if ( (*(_DWORD *)(*(_QWORD *)v21 + 56LL) & 0x20000) != 0 )
    {
      v22 = 0;
      for ( j = *(_QWORD *)v21 + 128LL; j; j = *(_QWORD *)(j + 16) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x20000) != 0 && !RtlAreBitsSet(*(PRTL_BITMAP *)(a1 + 48), v22, *(_DWORD *)(j + 44)) )
        {
          v9 = -1073741746;
          goto LABEL_29;
        }
        v22 += *(_DWORD *)(j + 44);
      }
    }
    v9 = 0;
LABEL_29:
    if ( v9 >= 0 )
    {
      v4 = a2;
      goto LABEL_31;
    }
  }
  return (unsigned int)v9;
}
