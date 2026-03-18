/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x14001CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x14001D478 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  const char *v1; // rdi
  _QWORD *v3; // rcx
  char v4; // r8
  const char *v5; // r10
  const char *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // r8
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-28h]

  v1 = byte_1400753E8;
  v3 = *(_QWORD **)(a1 + 40);
  v4 = 0;
  v5 = byte_1400753E8;
  v6 = byte_1400753E8;
  if ( v3 )
  {
    v7 = v3[1];
    v4 = (char)v3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v3[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      53,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v4,
      (__int64)v5,
      v14);
    v3 = *(_QWORD **)(a1 + 40);
  }
  if ( (*(_DWORD *)(a1 + 232) & 1) != 0 )
  {
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 256) = 0;
    v8 = 2;
  }
  v9 = 0LL;
  *(_DWORD *)(a1 + 212) = v8;
  v10 = byte_1400753E8;
  if ( v3 )
  {
    v11 = v3[1];
    v9 = v3;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v1 = (const char *)v3[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (__int64)v10;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v10,
      10,
      14,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      0,
      (char)v9,
      (__int64)v1,
      v15);
  }
  v12 = *(unsigned int *)(a1 + 212);
  *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
  ACPIDeviceCompletePhase3Common(a1 + 208, v12, v9);
  return 0LL;
}
