/*
 * XREFs of ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x180214C2C
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AA114 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B620C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     SnapLayoutHelpers::RotateWindowExtent @ 0x1802CBB84 (SnapLayoutHelpers--RotateWindowExtent.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall SnapLayoutHelpers::HandleMigrationRotation(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        int a6)
{
  int v6; // r10d
  int v8; // r11d
  int v10; // edx
  bool v13; // r9
  bool v14; // al
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ebx
  int v19; // r8d
  int v20; // ecx
  unsigned int v21; // ebx
  int v22; // r8d
  int v23; // ecx
  unsigned int v24; // ebx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int64 result; // rax
  int v43; // [rsp+20h] [rbp-30h]
  int v44; // [rsp+20h] [rbp-30h]
  int v45; // [rsp+20h] [rbp-30h]
  __int128 v46; // [rsp+30h] [rbp-20h] BYREF

  v6 = a4[3];
  v8 = a4[1];
  v10 = a4[2] - *a4;
  v46 = 0LL;
  v13 = v10 > v6 - v8 && (int)(a5[3] - a5[1]) > (int)(a5[2] - *a5);
  v14 = v6 - v8 > v10 && (int)(a5[2] - *a5) > (int)(a5[3] - a5[1]);
  if ( v13 )
  {
    v15 = a5[2];
    v16 = a3[1] - v8;
    if ( v16 > a6 )
      v15 -= MulDiv(v16, v15 - *a5, v6 - v8);
    v17 = *a3 - *a4;
    DWORD2(v46) = v15;
    v18 = a5[1];
    if ( v17 > a6 )
      v18 += MulDiv(v17, a5[3] - v18, a4[2] - *a4);
    v19 = a4[3];
    v20 = v19 - a3[3];
    DWORD1(v46) = v18;
    v21 = *a5;
    if ( v20 > a6 )
      v21 += MulDiv(v20, a5[2] - v21, v19 - a4[1]);
    v22 = a4[2];
    v23 = v22 - a3[2];
    LODWORD(v46) = v21;
    v24 = a5[3];
    if ( v23 > a6 )
      v24 -= MulDiv(v23, v24 - a5[1], v22 - *a4);
    v25 = (unsigned int)a6;
    HIDWORD(v46) = v24;
    goto LABEL_21;
  }
  if ( v14 )
  {
    v26 = SnapLayoutHelpers::RotateWindowExtent(
            (unsigned int)(a3[1] - v8),
            *a5,
            (unsigned int)(v6 - v8),
            a5[2] - *a5,
            0,
            a6);
    v27 = a5[3];
    v28 = a5[3] - a5[1];
    v29 = (unsigned int)(a4[2] - *a4);
    v30 = (unsigned int)(*a3 - *a4);
    LODWORD(v46) = v26;
    LOBYTE(v43) = 1;
    v31 = SnapLayoutHelpers::RotateWindowExtent(v30, v27, v29, v28, v43, a6);
    v32 = a5[2];
    v33 = a5[2] - *a5;
    v34 = (unsigned int)(a4[3] - a4[1]);
    v35 = (unsigned int)(a4[3] - a3[3]);
    HIDWORD(v46) = v31;
    LOBYTE(v44) = 1;
    v36 = SnapLayoutHelpers::RotateWindowExtent(v35, v32, v34, v33, v44, a6);
    v37 = a5[1];
    v38 = a5[3] - (unsigned int)v37;
    v39 = (unsigned int)(a4[2] - *a4);
    v40 = (unsigned int)(a4[2] - a3[2]);
    DWORD2(v46) = v36;
    LOBYTE(v45) = 0;
    DWORD1(v46) = SnapLayoutHelpers::RotateWindowExtent(v40, v37, v39, v38, v45, a6);
    v25 = (unsigned int)a6;
LABEL_21:
    a2 = dword_18078A1D0[(unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v46, a5, v25)];
  }
  v41 = v46;
  *(_DWORD *)(a1 + 16) = a2;
  result = a1;
  *(_OWORD *)a1 = v41;
  return result;
}
