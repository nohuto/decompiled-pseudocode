/*
 * XREFs of ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180179F70
 * Callers:
 *     _lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_ @ 0x180177B90 (_lambda_b12fa00c1928b9bf49ed577602750a33_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     _lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator() @ 0x18017818C (_lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_--operator().c)
 *     _lambda_c6487e696fe1a4f0096835366e69d3e1_::operator() @ 0x180178204 (_lambda_c6487e696fe1a4f0096835366e69d3e1_--operator().c)
 */

void __fastcall ControllerProcessor::RefreshCursorSpeedRegistrySettings(ControllerProcessor *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 5;
  *((_QWORD *)this + 975) = 10000LL
                          * (unsigned int)lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator()((__int64)this, a2, &v5);
  *((float *)this + 1948) = lambda_c6487e696fe1a4f0096835366e69d3e1_::operator()(
                              v3,
                              L"IRRemoteNavigationDelta",
                              1.0,
                              0.1);
  *((float *)this + 1949) = lambda_c6487e696fe1a4f0096835366e69d3e1_::operator()(v4, L"CursorSensitivity", 10.0, 0.1);
}
