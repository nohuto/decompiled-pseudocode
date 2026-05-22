/*
 * XREFs of ?InitializeConstants@MPCGamepadProcessor@@AEAAXXZ @ 0x1801BEDFC
 * Callers:
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801BECE0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C02D0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___ @ 0x1801BE1C8 (std--call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___.c)
 */

void __fastcall MPCGamepadProcessor::InitializeConstants(MPCGamepadProcessor *this)
{
  MPCGamepadProcessor *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___((__int64)this, (__int64)&v1);
}
