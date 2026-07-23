/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0
 * Callers:
 *     RtlpFcStartSubscriptionManager @ 0x18000336C (RtlpFcStartSubscriptionManager.c)
 *     RtlQueryWnfStateData @ 0x1800043B0 (RtlQueryWnfStateData.c)
 * Callees:
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180134294 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     ZwQueryWnfStateData @ 0x180166010 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlQueryWnfStateDataWithExplicitScope(
        ULONG *a1,
        WNF_STATE_NAME a2,
        const void *a3,
        __int64 (__fastcall *a4)(WNF_STATE_NAME, __int64, PCWNF_TYPE_ID, __int64, _BYTE *, ULONG),
        __int64 a5,
        PCWNF_TYPE_ID TypeId)
{
  void *v8; // rsp
  NTSTATUS result; // eax
  __int64 v10; // rdx
  _BYTE Buffer[4096]; // [rsp+20h] [rbp-1000h] BYREF
  ULONG ChangeStamp; // [rsp+1020h] [rbp+0h] BYREF
  ULONG BufferSize[3]; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1030h] [rbp+10h]
  WNF_STATE_NAME StateName; // [rsp+1038h] [rbp+18h] BYREF

  StateName = a2;
  ChangeStamp = 0;
  v8 = alloca(4096LL);
  v14 = Buffer;
  BufferSize[0] = 4096;
  result = ZwQueryWnfStateData(&StateName, TypeId, a3, &ChangeStamp, Buffer, BufferSize);
  BufferSize[1] = result;
  if ( result >= 0 )
  {
    v10 = ChangeStamp;
    *a1 = ChangeStamp;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))a4)(
             StateName,
             v10,
             TypeId,
             a5,
             Buffer,
             BufferSize[0]);
  }
  return result;
}
