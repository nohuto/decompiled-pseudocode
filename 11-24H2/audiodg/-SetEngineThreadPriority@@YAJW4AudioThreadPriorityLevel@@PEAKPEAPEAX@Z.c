/*
 * XREFs of ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z @ 0x14004624C
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021538 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAXK@Z @ 0x140056340 (-ResetEngineThreadPriority@@YAJPEAPEAXK@Z.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x140066A00 (McTemplateU0qq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall SetEngineThreadPriority(ULONG a1, DWORD *a2, _QWORD *a3)
{
  HANDLE v5; // rax
  void *v6; // rbx
  BOOL v7; // eax
  signed int LastError; // eax
  signed int v10; // ebx
  __int64 v11; // rdx
  signed int v12; // eax
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  HANDLE CurrentThread; // rax
  signed int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ULONG SystemResponsivenessValue; // [rsp+30h] [rbp+8h] BYREF
  void *v19; // [rsp+48h] [rbp+20h] BYREF

  SystemResponsivenessValue = a1;
  v5 = AvSetMmThreadCharacteristicsW(L"Audio", a2);
  v19 = v5;
  v6 = v5;
  if ( !v5 )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      return (unsigned int)v10;
    v11 = 2314LL;
    goto LABEL_13;
  }
  SystemResponsivenessValue = 0;
  if ( !AvQuerySystemResponsiveness(v5, &SystemResponsivenessValue) )
  {
    v12 = GetLastError();
    v10 = v12;
    if ( v12 > 0 )
      v10 = (unsigned __int16)v12 | 0x80070000;
    if ( v10 >= 0 )
      return (unsigned int)v10;
    v11 = 2321LL;
    goto LABEL_13;
  }
  if ( (byte_1400C4541 & 8) != 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    McTemplateU0qq_EtwEventWriteTransfer(v14, &AudioCore_Pump_AttachToMMCSS_Start, *a2, CurrentThreadId);
  }
  if ( SystemResponsivenessValue > 0x32 )
  {
    v10 = ResetEngineThreadPriority(&v19, *a2);
    if ( v10 < 0 )
    {
      v11 = 2329LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    CurrentThread = GetCurrentThread();
    v7 = SetThreadPriority(CurrentThread, 15);
    v6 = v19;
  }
  else
  {
    v7 = AvSetMmThreadPriority(v6, AVRT_PRIORITY_HIGH);
    *a3 = v6;
  }
  if ( v7 )
  {
    *a3 = v6;
    return 0LL;
  }
  v16 = GetLastError();
  v10 = v16;
  if ( v16 > 0 )
    v10 = (unsigned __int16)v16 | 0x80070000;
  if ( v10 < 0 )
  {
    v11 = 2341LL;
    goto LABEL_13;
  }
  return (unsigned int)v10;
}
