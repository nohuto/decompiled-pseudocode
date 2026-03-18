/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x140085BF0
 * Callers:
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     pProcessDfbSurfaces2 @ 0x140085260 (pProcessDfbSurfaces2.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x1400861B0 (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140086380 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14014A5FC (PDEVOBJ_bDisableHalftoneWrap.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x140155C34 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // r14d
  bool v7; // si
  __int64 i; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 j; // rcx
  __int64 v13; // rbx
  BRUSH *v14; // rcx
  unsigned int v15; // esi
  int (*v17)(void); // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64); // rax
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v4 = a2;
  v23 = a1;
  v6 = 1;
  v7 = _bittest((const signed __int32 *)(a1 + 2112), 0x10u)
    && a2
    && _bittest((const signed __int32 *)(a2 + 2112), 0x10u);
  for ( i = 0LL; ; i = v9 )
  {
    LOBYTE(a2) = 5;
    v9 = HmgSafeNextObjt(i, a2, &v21);
    if ( !v9 )
      break;
    if ( *(_QWORD *)(v21 + 48) == a1
      && (*(_DWORD *)(v21 + 112) & 0x800000) != 0
      && !*(_QWORD *)(v21 + 560)
      && *(_QWORD *)(v21 + 40)
      && (a3 || (*(_DWORD *)(v21 + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(v21 + 116) & 4) == 0) )
    {
      v6 &= -(pProcessDfbSurfaces2(v21, 0LL, 0, 1, v4) != 0);
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    if ( *(_QWORD *)(v23 + 3024) )
    {
      v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 24) + 1864LL);
      if ( v17 )
      {
        if ( v17() >= 0 )
        {
          v19 = v23;
          v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v10) + 24);
          v20 = *(void (__fastcall **)(__int64))(v10 + 1872);
          if ( v20 )
            v20(v19);
        }
      }
    }
    for ( j = 0LL; ; j = v15 )
    {
      LOBYTE(v10) = 16;
      v15 = HmgSafeNextObjt(j, v10, &v22);
      if ( !v15 )
        break;
      v13 = v22;
      *(_DWORD *)(v22 + 112) = -1;
      *(_DWORD *)(v13 + 44) = BRUSH::ulGlobalBrushUnique(v14);
    }
    if ( *(_QWORD *)(a1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v23);
  }
  return v6;
}
