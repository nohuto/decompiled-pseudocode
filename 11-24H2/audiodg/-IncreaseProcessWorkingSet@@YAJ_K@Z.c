/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004A960
 * Callers:
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140021644 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140021B60 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140022610 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140074588 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14007461C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  HANDLE v9; // rax
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rdi
  SIZE_T v12; // rbx
  HANDLE v13; // rax
  __int64 v15; // [rsp+48h] [rbp-59h]
  DWORD Flags; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MaximumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR MinimumWorkingSetSize[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+7h]

  MinimumWorkingSetSize[0] = 0LL;
  MaximumWorkingSetSize = 0LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  Flags = 0;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v9 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v9, MinimumWorkingSetSize, &MaximumWorkingSetSize, &Flags) )
    {
      v10 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      v12 = v20 + v10;
      MaximumWorkingSetSize += v10 + v20 - MinimumWorkingSetSize[0];
      v11 = MaximumWorkingSetSize;
      MinimumWorkingSetSize[0] = v20 + v10;
      v13 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v13, v12, v11, 0) )
      {
        v8 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 14, 0, 0, 0, 0, v15, a1, v8);
  return v8;
}
