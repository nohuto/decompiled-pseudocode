/*
 * XREFs of ?ResetEngineThreadPriority@@YAJPEAPEAXK@Z @ 0x140056340
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z @ 0x14004624C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x140066A00 (McTemplateU0qq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall ResetEngineThreadPriority(void **a1, unsigned int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  signed int LastError; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*a1 )
    return 0LL;
  if ( (byte_1400C4541 & 8) != 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    McTemplateU0qq_EtwEventWriteTransfer(v5, &AudioCore_Pump_AttachToMMCSS_Stop, a2, CurrentThreadId);
  }
  if ( AvRevertMmThreadCharacteristics(*a1) )
  {
    *a1 = 0LL;
    return 0LL;
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  if ( (v7 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v7);
  return v7;
}
