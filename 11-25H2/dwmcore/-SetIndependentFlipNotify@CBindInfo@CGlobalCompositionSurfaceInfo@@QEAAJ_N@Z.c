/*
 * XREFs of ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18023FD8C
 * Callers:
 *     ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6250 (-SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEB.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6570 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 *     ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18024C15C (-SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x18029CE90 (-SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800CFA2C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801E8E74 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  int v5; // ecx
  _DWORD *v6; // r14
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v3 = 0;
  if ( a2 != *((_BYTE *)this + 181) )
  {
    v5 = *((_DWORD *)this + 52);
    v14 = 0;
    v6 = (_DWORD *)((char *)this + 212);
    v7 = NtSetCompositionSurfaceIndependentFlipInfo(
           *(_QWORD *)(*(_QWORD *)this + 32LL),
           (char *)this + 24,
           1LL,
           a2,
           *((_DWORD *)this + 54),
           1 << v5,
           (char *)this + 212,
           &v14);
    if ( v7 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v13 = *((unsigned __int8 *)this + 182);
        LODWORD(v12) = *((_DWORD *)this + 54);
        LODWORD(v11) = v2;
        LODWORD(v10) = 1;
        LODWORD(v9) = *v6;
        McTemplateU0xxqqqqq_EventWriteTransfer(
          (unsigned int)*v6,
          *((unsigned __int8 *)this + 182),
          *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
          *((_QWORD *)this + 3),
          v9,
          v10,
          v11,
          v12,
          v13);
      }
      *((_BYTE *)this + 181) = v2;
      if ( (_BYTE)v2 )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    }
    else
    {
      v3 = v7 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7 | 0x10000000, 0x541u, 0LL);
    }
  }
  return v3;
}
