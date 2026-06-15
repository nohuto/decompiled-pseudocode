/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x180167B50
 * Callers:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180167AA4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x180167D30 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  HANDLE v10; // rax
  unsigned __int64 v11; // rdx
  SIZE_T v12; // rdi
  SIZE_T v13; // rbx
  HANDLE v14; // rax
  int v16; // [rsp+28h] [rbp-79h]
  DWORD Flags; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MaximumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR MinimumWorkingSetSize[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+7h]

  MinimumWorkingSetSize[0] = 0LL;
  MaximumWorkingSetSize = 0LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  Flags = 0;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v10 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v10, MinimumWorkingSetSize, &MaximumWorkingSetSize, &Flags) )
    {
      v11 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      v13 = v21 + v11;
      MaximumWorkingSetSize += v11 + v21 - MinimumWorkingSetSize[0];
      v12 = MaximumWorkingSetSize;
      MinimumWorkingSetSize[0] = v21 + v11;
      v14 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v14, v13, v12, 0) )
      {
        v9 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1801DBA01 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, v8, v16);
  return v9;
}
