/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x14014EFA0
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1400881B0 (WPP_RECORDER_SF_Sd.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014EB1C (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 */

__int64 __fastcall Ndis::BindRegistry::LoadNetworkInterfaceAddress(HANDLE *a1, const wchar_t *a2, _WORD *a3, ULONG a4)
{
  NTSTATUS inited; // ebx
  char v9[4]; // [rsp+30h] [rbp-28h]
  _UNICODE_STRING v10; // [rsp+40h] [rbp-18h] BYREF

  *a3 = 0;
  v10 = 0LL;
  inited = RtlUnicodeStringInitWorker(&v10, a2, (const size_t)a3, a4);
  if ( inited >= 0 )
    inited = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(a1, &v10, a3);
  if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
    return 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = inited;
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
      a2,
      *(_DWORD *)v9);
  }
  return (unsigned int)inited;
}
