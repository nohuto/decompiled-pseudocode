/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CA@XZ @ 0x1800D4380
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x1800745C0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ISMTracing *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(
             &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper,
             1u,
             &v1,
             (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ISMTracing::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
