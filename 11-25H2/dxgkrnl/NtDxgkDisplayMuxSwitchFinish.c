/*
 * XREFs of NtDxgkDisplayMuxSwitchFinish @ 0x1401AE1A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DxgkDisplayMuxSwitchFinish @ 0x1400893E0 (DxgkDisplayMuxSwitchFinish.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchFinish(_OWORD *a1)
{
  const void *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  _OWORD *v5; // rcx
  _OWORD v7[14]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v7, v2, 0xE0uLL);
  DxgkDisplayMuxSwitchFinish(v7, v3, v4);
  v5 = a1 + 4;
  if ( (unsigned __int64)(a1 + 14) > MmUserProbeAddress || a1 + 14 <= v5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v7[4];
  a1[5] = v7[5];
  a1[6] = v7[6];
  a1[7] = v7[7];
  a1[8] = v7[8];
  a1[9] = v7[9];
  a1[10] = v7[10];
  a1[11] = v7[11];
  a1[12] = v7[12];
  a1[13] = v7[13];
  return 0LL;
}
