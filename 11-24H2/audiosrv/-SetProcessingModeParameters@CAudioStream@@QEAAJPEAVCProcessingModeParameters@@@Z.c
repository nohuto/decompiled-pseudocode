/*
 * XREFs of ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800199D0
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x180019640 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 * Callees:
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180019DC0 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Reset@CProcessingModeParameters@@QEAAXXZ @ 0x1800A0270 (-Reset@CProcessingModeParameters@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioStream::SetProcessingModeParameters(CAudioStream *this, struct CProcessingModeParameters *a2)
{
  CProcessingModeParameters *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = (CAudioStream *)((char *)this + 600);
    if ( a2 )
      CProcessingModeParameters::operator=(v2);
    else
      CProcessingModeParameters::Reset(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x828,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v3);
  }
  return result;
}
