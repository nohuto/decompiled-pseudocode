/*
 * XREFs of NtDxgkDisplayMuxSwitchPrepare @ 0x1401B0820
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkDisplayMuxSwitchPrepare @ 0x140089BCC (DxgkDisplayMuxSwitchPrepare.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchPrepare(_OWORD *a1)
{
  const void *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  _OWORD *v5; // rcx
  void *v6; // rcx
  _OWORD v8[16]; // [rsp+50h] [rbp-118h] BYREF

  memset(v8, 0, 0xF8uLL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v8, v2, 0xF8uLL);
  DxgkDisplayMuxSwitchPrepare((struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *)v8, v3, v4);
  v5 = a1 + 5;
  if ( (unsigned __int64)(a1 + 15) > MmUserProbeAddress || a1 + 15 <= v5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v8[5];
  a1[6] = v8[6];
  a1[7] = v8[7];
  a1[8] = v8[8];
  a1[9] = v8[9];
  a1[10] = v8[10];
  a1[11] = v8[11];
  a1[12] = v8[12];
  a1[13] = v8[13];
  a1[14] = v8[14];
  v6 = a1 + 15;
  if ( (unsigned __int64)(a1 + 15) >= MmUserProbeAddress )
    v6 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v6, &v8[15], 8uLL);
  return 0LL;
}
