/*
 * XREFs of ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C1220
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019860C (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180033D10 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeConstants@MPCHandProcessor@@AEAAXXZ @ 0x1800C0168 (-InitializeConstants@MPCHandProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall MPCHandProcessor::RuntimeClassInitialize(
        MPCHandProcessor *this,
        const struct InputProcessorCreateParams *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 512 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      a4);
  v5 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    MPCHandProcessor::InitializeConstants(this);
    *((_QWORD *)this + 1244) = 1000 * qword_180250DB0 / 1000;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
