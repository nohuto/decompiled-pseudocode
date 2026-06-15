/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18003D464
 * Callers:
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18003DB6C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      WTSFreeMemory(v1);
  }
}
