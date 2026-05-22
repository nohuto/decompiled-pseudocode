/*
 * XREFs of ?InitializeConstants@MPCHandProcessor@@AEAAXXZ @ 0x1800C0168
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BFFE0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C1220 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF224 (std--call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___.c)
 */

void __fastcall MPCHandProcessor::InitializeConstants(MPCHandProcessor *this)
{
  MPCHandProcessor *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___((__int64)this, (__int64)&v1);
}
