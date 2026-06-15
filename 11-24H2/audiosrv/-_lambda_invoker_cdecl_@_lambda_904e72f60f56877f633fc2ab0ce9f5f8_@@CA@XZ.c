/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CA@XZ @ 0x18014E960
 * Callers:
 *     <none>
 * Callees:
 *     ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x18014EA40 (--_ENUIAudioTracing@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  NUIAudioTracing *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)NUIAudioTracing::`vector deleting destructor'(v2, 0);
  }
  return result;
}
