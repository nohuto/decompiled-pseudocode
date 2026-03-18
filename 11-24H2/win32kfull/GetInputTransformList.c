/*
 * XREFs of GetInputTransformList @ 0x1401D7AC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x14029046C (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 */

InputTransform *__fastcall GetInputTransformList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  InputTransform *result; // rax
  volatile struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]

  v5 = a2;
  LOBYTE(a2) = 1;
  result = (InputTransform *)HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (InputTransform *)InputTransform::GetTransformList(result, (struct tagWND *)v5, a3, a5, v9, v10);
  }
  return result;
}
