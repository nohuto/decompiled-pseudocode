/*
 * XREFs of RemoteThinwireStats @ 0x1C0202D68
 * Callers:
 *     NtUserRemoteThinwireStats @ 0x1C01D9580 (NtUserRemoteThinwireStats.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RemoteThinwireStats(_OWORD *Address, __int64 a2)
{
  PDEVICE_OBJECT v3; // rcx
  _UNKNOWN **v4; // r8

  v3 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v4,
      20,
      4,
      3,
      20,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(v3, a2, v4) != gpepCSRSS )
    return 3221225506LL;
  if ( !gpThinWireCache )
    return 3221225486LL;
  ProbeForWrite(Address, 0x54uLL, 1u);
  *Address = *gpThinWireCache;
  Address[1] = *(_OWORD *)(gpThinWireCache + 16LL);
  Address[2] = *(_OWORD *)(gpThinWireCache + 32LL);
  Address[3] = *(_OWORD *)(gpThinWireCache + 48LL);
  Address[4] = *(_OWORD *)(gpThinWireCache + 64LL);
  *((_DWORD *)Address + 20) = *(_DWORD *)(gpThinWireCache + 80LL);
  return 0LL;
}
