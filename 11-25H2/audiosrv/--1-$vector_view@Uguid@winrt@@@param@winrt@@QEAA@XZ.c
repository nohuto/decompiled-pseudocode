/*
 * XREFs of ??1?$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ @ 0x1800DF654
 * Callers:
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     __lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()_::_1_::dtor$3 @ 0x1801656B9 (__lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::param::vector_view<winrt::guid>::~vector_view<winrt::guid>(_QWORD *a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)a1[1];
  if ( v1 )
    *v1 = 1;
  if ( !*((_BYTE *)a1 + 16) )
    *a1 = 0LL;
  return winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(a1);
}
