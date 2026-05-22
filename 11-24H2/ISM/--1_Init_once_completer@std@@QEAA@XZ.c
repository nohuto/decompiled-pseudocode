/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18008202C
 * Callers:
 *     std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x180011924 (std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30___.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x180069164 (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x18007333C (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 *     std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___ @ 0x180097048 (std--call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___.c)
 *     std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF224 (std--call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___.c)
 *     std::call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___ @ 0x1801B9658 (std--call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___.c)
 *     std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___ @ 0x1801BA270 (std--call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801BCB68 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___ @ 0x1801BE1C8 (std--call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___.c)
 *     std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x1801C3A0C (std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390___.c)
 *     std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x1801C3FA0 (std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___.c)
 *     std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___ @ 0x1801C42E0 (std--call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___.c)
 *     _std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7____::_1_::dtor$0 @ 0x1801CFBCA (_std--call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7____--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$9 @ 0x1801D0650 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$9.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$13 @ 0x1801D081E (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$13.c)
 * Callees:
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009E828 (__std_init_once_link_alternate_names_and_abort.c)
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    _std_init_once_link_alternate_names_and_abort(v2, v1);
}
