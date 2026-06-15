/*
 * XREFs of ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x14006693C
 * Callers:
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14001DCC0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x140066784 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastError<2>(
           this,
           (void *)0x81B,
           (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
           a4,
           v5,
           retaddr);
}
