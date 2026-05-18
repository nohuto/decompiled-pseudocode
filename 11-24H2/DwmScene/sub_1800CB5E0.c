/*
 * XREFs of sub_1800CB5E0 @ 0x1800CB5E0
 * Callers:
 *     sub_1800CB6B0 @ 0x1800CB6B0 (sub_1800CB6B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

void __fastcall sub_1800CB5E0(__int64 a1)
{
  void **v1; // rbx
  HRESULT v2; // eax
  ULONG_PTR v3; // rbx
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = (void **)(a1 + 464);
  if ( !*(_QWORD *)(a1 + 464) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    sub_18000E954((__int64 *)(a1 + 464));
    v2 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_18018CA08, &pFactoryOptions, v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
