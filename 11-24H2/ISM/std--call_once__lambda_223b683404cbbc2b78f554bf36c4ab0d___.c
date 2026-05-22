/*
 * XREFs of std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___ @ 0x1801BA270
 * Callers:
 *     ?InitializeConstants@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BBE64 (-InitializeConstants@MPCSixDofProcessor@@AEAAXXZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18008202C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BAC84 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 */

void __fastcall std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_constantsInitialized, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &MPCSixDofProcessor::s_constantsInitialized;
    lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
