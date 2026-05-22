/*
 * XREFs of ?InitializeConstants@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BBE64
 * Callers:
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801BBB20 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801BCB68 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___ @ 0x1801BA270 (std--call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___.c)
 */

void __fastcall MPCSixDofProcessor::InitializeConstants(MPCSixDofProcessor *this)
{
  MPCSixDofProcessor *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___((__int64)this, (__int64)&v1);
}
