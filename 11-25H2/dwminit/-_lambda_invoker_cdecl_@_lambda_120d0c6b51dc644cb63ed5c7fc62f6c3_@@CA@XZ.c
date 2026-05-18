/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_@@CA@XZ @ 0x180010660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 1u, &v0, &v1) )
  {
    if ( !v0 )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, 0LL);
  }
}
