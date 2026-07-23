/*
 * XREFs of VmCreateMemoryProcess @ 0x14079E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     VmpLogCreateMemoryProcess @ 0x14079FFA8 (VmpLogCreateMemoryProcess.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, void *a3, int a4, void *a5, __int64 a6, _QWORD *a7)
{
  HANDLE v7; // rdi
  char v8; // bl
  unsigned int v9; // esi
  unsigned int v10; // r12d
  char v11; // r15
  NTSTATUS v14; // r14d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r11
  int v24; // [rsp+30h] [rbp-50h]
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-8h] BYREF
  HANDLE ProcessHandle; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+48h]
  void *v30; // [rsp+D0h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  BaseAddress = 0LL;
  v7 = 0LL;
  RegionSize = 0LL;
  v8 = *(_BYTE *)(a1 + 1530);
  ProcessHandle = 0LL;
  v9 = (a4 & 0x20 | 0x40u) >> 3;
  v10 = 0;
  v11 = a4;
  if ( (a4 & 0xFFFFFF80) != 0 )
  {
    v14 = -1073741811;
  }
  else
  {
    v15 = ((a4 & 1) << 13) | 0x4000;
    if ( (a4 & 2) == 0 )
      v15 = (a4 & 1) << 13;
    v16 = v15 | 0x20000;
    if ( (a4 & 4) == 0 )
      v16 = v15;
    v17 = v16 | 0x400;
    if ( (a4 & 0x10) == 0 )
      v17 = v16;
    v10 = v17 | 0x400000;
    if ( (a4 & 0x40) == 0 )
      v10 = v17;
    v18 = PsCreateMinimalProcess(a1, a2, 0LL, v8, a3, v10, v9, 0LL, a5, 0LL, a6, &ProcessHandle);
    v7 = ProcessHandle;
    v14 = v18;
    if ( v18 >= 0 )
    {
      RegionSize = 4294901760LL;
      BaseAddress = (PVOID)0x10000;
      if ( (v10 & 0x6000) != 0
        || (v14 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u), v14 >= 0) )
      {
        if ( (v11 & 8) == 0 )
        {
          Object = 0LL;
          ObReferenceObjectByHandle(v7, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
          _InterlockedOr((volatile signed __int32 *)Object + 383, 0x2000u);
          ObfDereferenceObject(Object);
          v7 = ProcessHandle;
        }
        *a7 = v7;
        v7 = 0LL;
        v14 = 0;
      }
    }
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
  {
    LOBYTE(v24) = v8;
    VmpLogCreateMemoryProcess(v19, v21, v22, v10, v9, a5, v24, v20, a1, v14);
  }
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v14;
}
