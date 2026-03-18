/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CA@XZ @ 0x1802D73E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18025E830 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  CompositorTracing *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 1u, &v0, (LPVOID *)&v1) )
  {
    if ( !v0 )
      CompositorTracing::`vector deleting destructor'(v1, 0);
  }
}
