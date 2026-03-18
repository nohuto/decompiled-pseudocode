/*
 * XREFs of NtDxgkDisplayMuxSwitchExecute @ 0x1401ADFA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DxgkDisplayMuxSwitchExecute @ 0x1400892D8 (DxgkDisplayMuxSwitchExecute.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchExecute(_OWORD *a1)
{
  const void *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  _OWORD *v5; // rcx
  void *v6; // rcx
  _OWORD v8[15]; // [rsp+50h] [rbp-108h] BYREF

  memset(v8, 0, 0xE8uLL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v8, v2, 0xE8uLL);
  DxgkDisplayMuxSwitchExecute(v8, v3, v4);
  v5 = a1 + 4;
  if ( (unsigned __int64)(a1 + 14) > MmUserProbeAddress || a1 + 14 <= v5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v8[4];
  a1[5] = v8[5];
  a1[6] = v8[6];
  a1[7] = v8[7];
  a1[8] = v8[8];
  a1[9] = v8[9];
  a1[10] = v8[10];
  a1[11] = v8[11];
  a1[12] = v8[12];
  a1[13] = v8[13];
  v6 = a1 + 14;
  if ( (unsigned __int64)(a1 + 14) >= MmUserProbeAddress )
    v6 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v6, &v8[14], 4uLL);
  return 0LL;
}
