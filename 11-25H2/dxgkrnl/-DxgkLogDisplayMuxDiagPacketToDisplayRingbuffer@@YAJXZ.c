/*
 * XREFs of ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401C07B0
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiGetMdmStatus @ 0x140027114 (DpiGetMdmStatus.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiDumpAdaptersDisplayMuxStatus @ 0x1400884F4 (DpiDumpAdaptersDisplayMuxStatus.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

__int64 DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer(void)
{
  __int64 v0; // r9
  __int64 v1; // rax
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ecx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  _DWORD v21[192]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+330h] [rbp+230h] BYREF

  memset(v21, 0, 0x2F4uLL);
  DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)v21);
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v21[185] <= 1u )
      return 0LL;
  }
  else if ( !v21[185] )
  {
    return 0LL;
  }
  v1 = operator new[](0x320uLL, 0x4B677844u, 256LL, v0);
  v2 = v21[1];
  v3 = v1;
  v22 = v1;
  v4 = 5LL;
  *(_DWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_DWORD *)v1 = 56;
  *(_DWORD *)(v1 + 4) = 800;
  *(_QWORD *)(v1 + 8) = 0LL;
  LODWORD(v1) = v21[3];
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_DWORD *)(v3 + 48) = v2;
  LOBYTE(v2) = v21[6];
  *(_DWORD *)(v3 + 52) = v1;
  *(_DWORD *)(v3 + 56) = v21[4];
  LODWORD(v1) = v21[5] & 1;
  *(_DWORD *)(v3 + 64) = 1;
  v5 = v21[0] & 1 | *(_DWORD *)(v3 + 60) & 0xFFFFFFF0 | (2 * (v21[2] & 1 | (2 * (v1 | (2 * (v2 & 1))))));
  v6 = &v21[7];
  *(_DWORD *)(v3 + 60) = v5;
  v7 = (_OWORD *)(v3 + 68);
  do
  {
    v8 = v6[1];
    *v7 = *v6;
    v9 = v6[2];
    v7[1] = v8;
    v10 = v6[3];
    v7[2] = v9;
    v11 = v6[4];
    v7[3] = v10;
    v12 = v6[5];
    v7[4] = v11;
    v13 = v6[6];
    v7[5] = v12;
    v14 = v6[7];
    v6 += 8;
    v7[6] = v13;
    v7 += 8;
    *(v7 - 1) = v14;
    --v4;
  }
  while ( v4 );
  v15 = v6[1];
  *v7 = *v6;
  v16 = v6[2];
  v7[1] = v15;
  v17 = v6[3];
  v7[2] = v16;
  v18 = v6[4];
  v19 = *((_QWORD *)v6 + 10);
  v7[3] = v17;
  v7[4] = v18;
  *((_QWORD *)v7 + 10) = v19;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v3);
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
    DpiDumpAdaptersDisplayMuxStatus();
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v22);
  return 0LL;
}
