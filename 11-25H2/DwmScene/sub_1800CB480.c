/*
 * XREFs of sub_1800CB480 @ 0x1800CB480
 * Callers:
 *     sub_1800CB550 @ 0x1800CB550 (sub_1800CB550.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

void __fastcall sub_1800CB480(__int64 a1)
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
    sub_18000E854((__int64 *)(a1 + 464));
    v2 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_18018BA18, &pFactoryOptions, v1);
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
