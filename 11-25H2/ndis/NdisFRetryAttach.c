/*
 * XREFs of NdisFRetryAttach @ 0x140142F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _lambda_85929b32d2a9a50437f74da086400a81_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__) @ 0x1400A3108 (_lambda_85929b32d2a9a50437f74da086400a81_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__).c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015DDB0 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015E140 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NdisFRetryAttach(__int64 a1, ULONG_PTR BugCheckParameter3)
{
  char v2; // bl
  void (*v4)(struct NDIS_BIND_LINK_BASE *); // rax
  int v5; // edx

  v2 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
    ndisBugCheckEx(0x2DuLL, 1uLL, (unsigned int)BugCheckParameter3, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(BugCheckParameter3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      BugCheckParameter3,
      6,
      126,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      a1);
  }
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  v4 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_85929b32d2a9a50437f74da086400a81_::operator_void____cdecl___NDIS_BIND_LINK_BASE___();
  NDIS_BIND_DRIVER_BASE::ForEachLink(*(NDIS_BIND_DRIVER_BASE **)(a1 + 336), v4);
  if ( (v2 & 1) == 0 )
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *(NDIS_BIND_DRIVER_BASE **)(a1 + 336),
      (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
  Ndis::BindEngine::EndBindOperation();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      6,
      128,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      a1);
  }
}
