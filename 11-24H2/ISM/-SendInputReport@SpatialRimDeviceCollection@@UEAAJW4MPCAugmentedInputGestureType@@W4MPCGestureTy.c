/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800D8490
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800328D0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D449C (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        int *a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        __int128 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v12; // r15
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v20; // rax
  char *v21; // rcx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rcx
  __int128 v40; // xmm1
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int *v43; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v44[64]; // [rsp+48h] [rbp-B8h]
  int v45[12]; // [rsp+90h] [rbp-70h] BYREF
  char v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+418h] [rbp+318h]
  __int64 v48; // [rsp+420h] [rbp+320h]
  __int64 v49; // [rsp+428h] [rbp+328h]
  char v50; // [rsp+430h] [rbp+330h]
  char v51; // [rsp+438h] [rbp+338h] BYREF
  __int128 v52; // [rsp+920h] [rbp+820h]
  __int128 v53; // [rsp+930h] [rbp+830h]
  __int128 v54; // [rsp+940h] [rbp+840h]
  __int128 v55; // [rsp+950h] [rbp+850h]
  __int128 v56; // [rsp+BD0h] [rbp+AD0h]
  __int128 v57; // [rsp+BE0h] [rbp+AE0h]
  __int128 v58; // [rsp+BF0h] [rbp+AF0h]
  __int128 v59; // [rsp+C00h] [rbp+B00h]
  wil::details::in1diag3 *retaddr; // [rsp+C98h] [rbp+B98h]

  v12 = a10;
  v43 = a1;
  v41 = a3;
  v42 = a4;
  memset_0(v45, 0, 0xBC0uLL);
  *(_DWORD *)v44 = 1065353216;
  *(_DWORD *)&v44[20] = 1065353216;
  *(_OWORD *)&v44[4] = 0LL;
  *(_DWORD *)&v44[40] = 1065353216;
  *(_OWORD *)&v44[24] = 0LL;
  *(_DWORD *)&v44[60] = 1065353216;
  *(_OWORD *)&v44[44] = 0LL;
  v45[6] = 3008;
  v56 = *(_OWORD *)v44;
  v57 = *(_OWORD *)&v44[16];
  v58 = *(_OWORD *)&v44[32];
  v59 = *(_OWORD *)&v44[48];
  v17 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a2, a3, 512, a4, (__int64)v45);
  if ( v17 < 0 )
  {
    v18 = 757LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v17);
    return (unsigned int)v17;
  }
  v47 = a7;
  v48 = a8;
  v20 = a9;
  if ( a9 <= a10 )
    v20 = a10;
  if ( v20 <= a11 )
  {
    v49 = a11;
  }
  else
  {
    if ( a9 > a10 )
      v12 = a9;
    v49 = v12;
  }
  v21 = &v51;
  v50 = a12;
  v22 = 9LL;
  v46 = 1;
  do
  {
    v23 = a5[1];
    *(_OWORD *)v21 = *a5;
    v24 = a5[2];
    *((_OWORD *)v21 + 1) = v23;
    v25 = a5[3];
    *((_OWORD *)v21 + 2) = v24;
    v26 = a5[4];
    *((_OWORD *)v21 + 3) = v25;
    v27 = a5[5];
    *((_OWORD *)v21 + 4) = v26;
    v28 = a5[6];
    *((_OWORD *)v21 + 5) = v27;
    v29 = a5[7];
    a5 += 8;
    *((_OWORD *)v21 + 6) = v28;
    v21 += 128;
    *((_OWORD *)v21 - 1) = v29;
    --v22;
  }
  while ( v22 );
  v30 = *((_QWORD *)a5 + 12);
  v31 = a5[1];
  *(_OWORD *)v21 = *a5;
  v32 = a5[2];
  *((_OWORD *)v21 + 1) = v31;
  v33 = a5[3];
  *((_OWORD *)v21 + 2) = v32;
  v34 = a5[4];
  *((_OWORD *)v21 + 3) = v33;
  v35 = a5[5];
  *((_OWORD *)v21 + 4) = v34;
  v36 = *a6;
  *((_OWORD *)v21 + 5) = v35;
  *((_QWORD *)v21 + 12) = v30;
  v37 = a6[1];
  v52 = v36;
  v38 = a6[2];
  v39 = *((_QWORD *)v43 + 2);
  v53 = v37;
  v40 = a6[3];
  v54 = v38;
  v55 = v40;
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 24LL))(v39, v45);
  if ( v17 < 0 )
  {
    v18 = 769LL;
    goto LABEL_3;
  }
  v43 = v45;
  RawInputProvidersContinuousTracing::HandInputReportProcessed<unsigned long &,enum MPCGestureType &,LegacyInputInfo *>(
    (unsigned int *)&v42,
    (unsigned int *)&v41,
    &v43);
  return 0LL;
}
