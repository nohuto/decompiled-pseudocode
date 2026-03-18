/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C0035B30
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00C4D00 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     pProcessDfbSurfaces2 @ 0x1C015AA90 (pProcessDfbSurfaces2.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r14d
  bool v7; // si
  unsigned int v8; // ebp
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64); // rsi
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  struct OBJECT *v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v4 = a2;
  v18 = a1;
  v6 = 1;
  v7 = _bittest((const signed __int32 *)(a1 + 2096), 0x10u)
    && a2
    && _bittest((const signed __int32 *)(a2 + 2096), 0x10u);
  v8 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    v8 = HmgSafeNextObjt(v8, a2, &v17);
    if ( !v8 )
      break;
    if ( *((_QWORD *)v17 + 6) == a1
      && (*((_DWORD *)v17 + 28) & 0x800000) != 0
      && !*((_QWORD *)v17 + 70)
      && *((_QWORD *)v17 + 5)
      && (a3 || (*((_DWORD *)v17 + 29) & 1) == 0)
      && (!v7 || (*((_DWORD *)v17 + 29) & 4) == 0)
      && !pProcessDfbSurfaces2(v17, v4) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64))(v18 + 3008);
    if ( v10 )
    {
      if ( _bittest((const signed __int32 *)(a1 + 40), 0x17u) )
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 3496) + 1520LL);
      else
        v14 = *(_QWORD *)(a1 + 1520);
      while ( v14 )
      {
        v10(v14);
        *(_QWORD *)(v14 + 48) = 0LL;
        v14 = *(_QWORD *)(v14 + 672);
      }
      if ( _bittest((const signed __int32 *)(a1 + 40), 0x17u) )
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3496) + 1512LL);
      else
        v15 = *(_QWORD *)(a1 + 1512);
      while ( v15 )
      {
        v10(v15);
        *(_QWORD *)(v15 + 48) = 0LL;
        v15 = *(_QWORD *)(v15 + 672);
      }
    }
    v11 = 0;
    while ( 1 )
    {
      LOBYTE(v9) = 16;
      v11 = HmgSafeNextObjt(v11, v9, &v16);
      if ( !v11 )
        break;
      *(_DWORD *)(v16 + 112) = -1;
      v9 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v12) + 24)
                                                                         + 744LL));
      *(_DWORD *)(v16 + 44) = v9;
    }
    if ( *(_QWORD *)(a1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C0294AE0 )
      qword_1C0294AE0(&v18);
  }
  return v6;
}
