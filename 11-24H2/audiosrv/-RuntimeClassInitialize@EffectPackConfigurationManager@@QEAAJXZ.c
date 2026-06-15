/*
 * XREFs of ?RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ @ 0x1800FC108
 * Callers:
 *     ??$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEffectPackConfigurationManager@@@Z @ 0x1800CAEA4 (--$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EffectPackConfigurationManager::RuntimeClassInitialize(EffectPackConfigurationManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RegisterForMediaCallback(0x400000LL, this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 56) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
