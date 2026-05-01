/*
 * XREFs of ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B4F00
 * Callers:
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B51C0 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1802144BC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805AF6C0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 */

__int64 __fastcall DefaultSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r10
  SnapRectHelpers *v8; // r8
  int v9; // eax
  char v10; // dl
  bool v11; // zf
  int RectForRegion; // eax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-41h]
  RECT rcSrc; // [rsp+30h] [rbp-31h] BYREF
  int v17[4]; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+60h] [rbp-1h]
  __int128 v20; // [rsp+70h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)&rcSrc, *(_DWORD *)(a5 + 32), (int *)(a4 + 8));
  if ( *(_BYTE *)(a5 + 36) && a3 && *(_QWORD *)(v7 + 56) )
  {
    v8 = *(SnapRectHelpers **)v7;
    v9 = (*(_DWORD *)(a5 + 24) >> 1) & 1;
    *(RECT *)v17 = rcSrc;
    v10 = v9 | 2;
    v11 = *(_BYTE *)(a5 + 28) == 0;
    v19 = 0LL;
    if ( v11 )
      v10 = v9;
    v20 = 0LL;
    RectForRegion = SnapLayoutHelpers::GetRectForRegion(
                      &rcSrc,
                      v10,
                      v8,
                      (RECT *)(v7 + 48),
                      (struct tagRECT *)v17,
                      (__int64)v18);
    if ( RectForRegion >= 0 )
    {
      v13 = CSnapComponentTelemetry::SendSnapFillTypeEvent(v18, *(_DWORD *)(a5 + 32), a3);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x40,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v13);
      if ( Geometry::CRect::IsEmpty((Geometry::CRect *)v17) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x42,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8000FFFFLL,
          v15);
      rcSrc = *(RECT *)v17;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)RectForRegion);
    }
  }
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_BYTE *)a2 = 0;
  CopyRect((LPRECT)(a2 + 4), &rcSrc);
  CopyRect((LPRECT)(a2 + 20), (const RECT *)(a5 + 40));
  return a2;
}
