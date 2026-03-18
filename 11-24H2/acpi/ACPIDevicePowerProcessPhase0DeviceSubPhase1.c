/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140014800
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r14
  char v4; // bp
  unsigned int v5; // eax
  const char *v6; // rcx
  unsigned int v7; // esi
  const char *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 4;
  *(_OWORD *)(a1 + 216) = 0LL;
  v4 = 0;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v5 = ACPIGet(
         (_DWORD)v1,
         1096045407,
         -1610344446,
         0,
         0,
         (__int64)ACPIDeviceCompleteGenericPhase,
         a1,
         a1 + 232,
         a1 + 240);
  v6 = byte_1400753E8;
  v7 = v5;
  v8 = byte_1400753E8;
  if ( v1 )
  {
    v10 = v1[1];
    v4 = (char)v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (__int64)v8;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      10,
      52,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v7,
      v4,
      (__int64)v6,
      v11);
  }
  result = 259LL;
  if ( v7 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v7, v2, a1);
    return 0LL;
  }
  return result;
}
