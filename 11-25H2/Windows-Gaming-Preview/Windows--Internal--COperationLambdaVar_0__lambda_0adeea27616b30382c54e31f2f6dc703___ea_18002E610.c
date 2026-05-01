/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run @ 0x18002E610
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0adeea27616b30382c54e31f2f6dc703_::operator() @ 0x180026034 (_lambda_0adeea27616b30382c54e31f2f6dc703_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_0adeea27616b30382c54e31f2f6dc703_::operator()((unsigned int *)(a1 + 8), a2);
  return (unsigned int)a3;
}
