/*
 * XREFs of std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF224
 * Callers:
 *     ?InitializeConstants@MPCHandProcessor@@AEAAXXZ @ 0x1800C0168 (-InitializeConstants@MPCHandProcessor@@AEAAXXZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18008202C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF6C0 (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 */

void __fastcall std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&stru_180251688, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &stru_180251688;
    lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
