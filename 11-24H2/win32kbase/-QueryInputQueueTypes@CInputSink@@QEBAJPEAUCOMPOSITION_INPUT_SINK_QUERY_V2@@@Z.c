/*
 * XREFs of ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x14004B0B4
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x140049698 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     NtQueryCompositionInputSink @ 0x14004A590 (NtQueryCompositionInputSink.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CInputSink::QueryInputQueueTypes(CInputSink *this, struct COMPOSITION_INPUT_SINK_QUERY_V2 *a2)
{
  *(_DWORD *)a2 = 20;
  *((_DWORD *)a2 + 1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5));
  *((_DWORD *)a2 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  *((_DWORD *)a2 + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 16LL))(*((_QWORD *)this + 7));
  *((_DWORD *)a2 + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 16LL))(*((_QWORD *)this + 8));
  *((_DWORD *)a2 + 5) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 16LL))(*((_QWORD *)this + 9));
  return 0LL;
}
