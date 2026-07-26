/*
 * XREFs of ndisFInvokeCancelDirectOidRequest @ 0x1400CE3E0
 * Callers:
 *     ndisDoCancelDirectOidRequest @ 0x1400CE0FC (ndisDoCancelDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeCancelDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      12,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      a1);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 312))(*(_QWORD *)(a1 + 24), v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v6,
             11,
             13,
             (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
             a1);
  }
  return result;
}
