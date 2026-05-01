/*
 * XREFs of ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z @ 0x1805AC29C
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AA3AC (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SnapLayoutHelpers::IsBetterFillCandidate(
        SnapLayoutHelpers *this,
        const struct SnapLayoutHelpers::FillCandidate *a2,
        const struct SnapLayoutHelpers::FillCandidate *a3,
        const enum SnapLayoutHelpers::FillRule *a4)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 v8; // r8
  int v9; // edx
  bool v10; // zf
  bool v11; // sf
  bool v12; // of
  bool v13; // sf
  bool v14; // of
  unsigned int i; // ecx
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch]
  int v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+2Ch] [rbp-24h]
  int v21; // [rsp+30h] [rbp-20h] BYREF
  int v22; // [rsp+34h] [rbp-1Ch]
  int v23; // [rsp+38h] [rbp-18h]
  int v24; // [rsp+3Ch] [rbp-14h]

  v5 = 0;
  v6 = *(_QWORD *)this;
  if ( !v6 || !*(_QWORD *)a2 )
    return 1;
  v8 = *((unsigned int *)this + 2);
  v9 = *((_DWORD *)a2 + 2);
  if ( (_DWORD)v8 != v9 )
  {
    for ( i = 0; i < 5; ++i )
    {
      if ( (_DWORD)v8 == dword_1807B6F80[i] )
        return 1;
      if ( v9 == dword_1807B6F80[i] )
        break;
    }
    return v5;
  }
  (*(void (__fastcall **)(__int64, int *, __int64, const enum SnapLayoutHelpers::FillRule *))(*(_QWORD *)v6 + 48LL))(
    v6,
    &v21,
    v8,
    a4);
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v17);
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&v21) || Geometry::CRect::IsEmpty((Geometry::CRect *)&v17) )
    return v5;
  switch ( *((_DWORD *)this + 3) )
  {
    case 1:
      v14 = __OFSUB__(v22, v18);
      v13 = v22 - v18 < 0;
      return v13 ^ v14;
    case 2:
      v14 = __OFSUB__(v21, v17);
      v13 = v21 - v17 < 0;
      return v13 ^ v14;
    case 3:
      v12 = __OFSUB__(v23, v19);
      v10 = v23 == v19;
      v11 = v23 - v19 < 0;
      return !(v11 ^ v12 | v10);
    case 4:
      v12 = __OFSUB__(v24, v20);
      v10 = v24 == v20;
      v11 = v24 - v20 < 0;
      return !(v11 ^ v12 | v10);
  }
  return v5;
}
