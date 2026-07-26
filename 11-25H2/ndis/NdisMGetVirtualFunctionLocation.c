/*
 * XREFs of NdisMGetVirtualFunctionLocation @ 0x1400EAA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall NdisMGetVirtualFunctionLocation(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD, __int64, __int64, __int64)
{
  unsigned __int16 v7; // bp
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v10; // rcx

  v7 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      128,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      a1);
  }
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4808);
  if ( result )
  {
    v10 = *(_QWORD *)(a1 + 4824);
    if ( v10 )
      result = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(v10, v7, a3, a4, a5);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))WPP_RECORDER_SF_q(
                                                                                 *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                                                 a2,
                                                                                 26,
                                                                                 129,
                                                                                 (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
                                                                                 a1);
  }
  return result;
}
