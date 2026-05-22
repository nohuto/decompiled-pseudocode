/*
 * XREFs of ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C510C
 * Callers:
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C4194 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180033D10 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___ @ 0x1801C42E0 (std--call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___.c)
 */

__int64 __fastcall MPCClickerProcessor::RuntimeClassInitialize(
        MPCClickerProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCClickerProcessor *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v8 = this;
    std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___(v4, (__int64)&v8);
    *((_DWORD *)this + 926) = 0;
    *((_DWORD *)this + 927) = 0;
    *((_DWORD *)this + 928) = 0;
    *((_DWORD *)this + 932) = 0;
    *((_DWORD *)this + 933) = 0;
    *((_DWORD *)this + 934) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
