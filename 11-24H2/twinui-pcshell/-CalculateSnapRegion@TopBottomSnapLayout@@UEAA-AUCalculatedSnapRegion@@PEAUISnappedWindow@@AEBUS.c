/*
 * XREFs of ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B51C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1802144BC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180231DA0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805AF6C0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B4F00 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TopBottomSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r12d
  unsigned int v9; // ebx
  int *v10; // r8
  RECT *v11; // rax
  int RectForRegion; // eax
  __m128i v13; // xmm6
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  RECT *v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // xmm0_8
  int v24; // ecx
  int v25; // eax
  __m128i v26; // xmm2
  int v28; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+38h] [rbp-D0h]
  void **v31; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h]
  __int128 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+98h] [rbp-70h]
  int v38[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v39[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v40[48]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v41[16]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( ((*(_DWORD *)(a5 + 32) - 1) & 0xFFFFFFF9) != 0 )
  {
    LODWORD(v31) = (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 20)) / 2;
    v30 = *(_DWORD *)(a5 + 20);
    v8 = 2;
    v9 = 6;
    if ( v30 <= (int)v31 )
    {
      v8 = 6;
      v9 = 2;
    }
    memset(&v40[16], 0, 32);
    v10 = (int *)(a4 + 8);
    if ( *(_BYTE *)(a5 + 36) )
    {
      *(_OWORD *)v39 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v11 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v38, v9, v10);
      RectForRegion = SnapLayoutHelpers::GetRectForRegion(
                        v11,
                        0,
                        *(SnapRectHelpers **)a4,
                        (RECT *)(a4 + 48),
                        (struct tagRECT *)v39,
                        (__int64)&v32);
      if ( RectForRegion < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAD,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)RectForRegion,
          v28);
      if ( Geometry::CRect::Contains((Geometry::CRect *)v39, (const struct tagPOINT *)(a5 + 16)) )
        goto LABEL_9;
      *(_OWORD *)v38 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v16 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v41, v8, (int *)(a4 + 8));
      v17 = SnapLayoutHelpers::GetRectForRegion(
              v16,
              0,
              *(SnapRectHelpers **)a4,
              (RECT *)(a4 + 48),
              (struct tagRECT *)v38,
              (__int64)&v35);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC2,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v17,
          v29);
      if ( !Geometry::CRect::Contains((Geometry::CRect *)v38, (const struct tagPOINT *)(a5 + 16))
        && ((v18 = *(_DWORD *)(a5 + 20), v30 > (int)v31)
          ? (v19 = v39[1] - v18, v20 = v18 - v38[3])
          : (v19 = v18 - v39[3], v20 = v38[1] - v18),
            v19 < v20) )
      {
LABEL_9:
        v13 = *(__m128i *)v39;
        *(_OWORD *)v40 = v32;
        v14 = v33;
        v15 = v34;
      }
      else
      {
        v13 = *(__m128i *)v38;
        v9 = v8;
        *(_OWORD *)v40 = v35;
        v14 = v36;
        v15 = v37;
      }
      *(_OWORD *)&v40[16] = v14;
      *(_OWORD *)&v40[32] = v15;
    }
    else
    {
      v13 = *(__m128i *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v41, v9, v10);
    }
    *(_OWORD *)v38 = *(_OWORD *)(a5 + 40);
    v21 = *(_DWORD *)(a5 + 20);
    if ( v9 == 2 )
    {
      v22 = v21 + 1;
      v23 = _mm_srli_si128(v13, 8).m128i_u64[0];
      if ( SHIDWORD(v23) >= v22 )
        v22 = HIDWORD(v23);
      v38[3] = v22;
    }
    else
    {
      v24 = v21 - 1;
      if ( v24 >= v13.m128i_i32[1] )
        v24 = v13.m128i_i32[1];
      v38[1] = v24;
    }
    v25 = CSnapComponentTelemetry::SendSnapFillTypeEvent(v40, v9, a3);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v25);
    v40[0] = 0;
    *(__m128i *)&v40[4] = v13;
    v26 = *(__m128i *)v38;
    *(_OWORD *)&v40[20] = *(_OWORD *)v38;
    *(_OWORD *)a2 = *(_OWORD *)v40;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)&v40[16];
    *(_DWORD *)(a2 + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
  }
  else
  {
    v31 = &DefaultSnapLayout::`vftable';
    DefaultSnapLayout::CalculateSnapRegion((__int64)&v31, a2, a3, a4, a5);
  }
  return a2;
}
