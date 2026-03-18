/*
 * XREFs of ??0CKernelTransport@@AEAA@XZ @ 0x18026F158
 * Callers:
 *     ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x18022E4C8 (-Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FE014 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18026F28C (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

CKernelTransport *__fastcall CKernelTransport::CKernelTransport(CKernelTransport *this)
{
  void *v2; // rdx
  wil::details *Event; // rsi
  unsigned int v4; // r8d
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CKernelTransport::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v2, v4, v5);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 2,
    Event);
  return this;
}
