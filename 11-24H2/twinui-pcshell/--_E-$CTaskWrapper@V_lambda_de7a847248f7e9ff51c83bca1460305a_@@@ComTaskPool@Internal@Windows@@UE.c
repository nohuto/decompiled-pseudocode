/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180060120
 * Callers:
 *     <none>
 * Callees:
 *     ??1_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@XZ @ 0x180060168 (--1_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  _lambda_de7a847248f7e9ff51c83bca1460305a_::~_lambda_de7a847248f7e9ff51c83bca1460305a_((_lambda_de7a847248f7e9ff51c83bca1460305a_ *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
