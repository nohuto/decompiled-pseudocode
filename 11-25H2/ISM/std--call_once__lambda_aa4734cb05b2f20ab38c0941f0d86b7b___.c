/*
 * XREFs of std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___ @ 0x1801B6C98
 * Callers:
 *     ?InitializeConstants@MPCGamepadProcessor@@AEAAXXZ @ 0x1801B78CC (-InitializeConstants@MPCGamepadProcessor@@AEAAXXZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180081F8C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801B6FB8 (_lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator().c)
 */

void __fastcall std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&MPCGamepadProcessor::s_constantsInitialized, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &MPCGamepadProcessor::s_constantsInitialized;
    lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
