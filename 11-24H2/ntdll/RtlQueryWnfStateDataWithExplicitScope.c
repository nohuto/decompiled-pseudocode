/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x180098D70
 * Callers:
 *     RtlpFcStartSubscriptionManager @ 0x180097CFC (RtlpFcStartSubscriptionManager.c)
 *     RtlQueryWnfStateData @ 0x180098D40 (RtlQueryWnfStateData.c)
 * Callees:
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x1801327B4 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     ZwQueryWnfStateData @ 0x180164A80 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlQueryWnfStateDataWithExplicitScope(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64, __int64, _BYTE *, _DWORD),
        __int64 a5,
        __int64 a6)
{
  void *v8; // rsp
  __int64 result; // rax
  __int64 v10; // rdx
  _BYTE v11[4096]; // [rsp+20h] [rbp-1000h] BYREF
  unsigned int v12; // [rsp+1020h] [rbp+0h] BYREF
  _DWORD v13[3]; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1030h] [rbp+10h]
  __int64 v15; // [rsp+1038h] [rbp+18h] BYREF

  v15 = a2;
  v12 = 0;
  v8 = alloca(4096LL);
  v14 = v11;
  v13[0] = 4096;
  result = ZwQueryWnfStateData(&v15, a6, a3, &v12, v11, v13);
  v13[1] = result;
  if ( (int)result >= 0 )
  {
    v10 = v12;
    *a1 = v12;
    return a4(v15, v10, a6, a5, v11, v13[0]);
  }
  return result;
}
