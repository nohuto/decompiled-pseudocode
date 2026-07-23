/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x140A0F50C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     EtwpIsStackWalkingEnabled @ 0x140A0F644 (EtwpIsStackWalkingEnabled.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, __int64 a2, char a3, unsigned int **a4, unsigned int a5)
{
  NTSTATUS v8; // r15d
  __int64 v10; // rdx
  unsigned int i; // ecx
  _QWORD v13[2]; // [rsp+20h] [rbp-50h] BYREF
  PVOID P; // [rsp+30h] [rbp-40h]
  __int16 v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h]
  PVOID v17; // [rsp+50h] [rbp-20h]
  char v18; // [rsp+60h] [rbp-10h]
  char IsStackWalkingEnabled; // [rsp+62h] [rbp-Eh]
  PEPROCESS Process; // [rsp+90h] [rbp+20h] BYREF

  Process = 0LL;
  v8 = 0;
  memset_0(v13, 0, 0x50uLL);
  v13[0] = a1;
  v16 = a2;
  v10 = 1283LL;
  v18 = a3;
  if ( !a3 )
    v10 = 1284LL;
  IsStackWalkingEnabled = EtwpIsStackWalkingEnabled(a2, v10);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
    v13[1] = (char *)&EtwpObjectTypeFilter + 20 * *(unsigned __int8 *)(a2 + 818);
  P = (PVOID)ExAllocatePool2(0x40uLL, 0x2000uLL, 0x74777445u);
  if ( P )
    v15 = 0x2000;
  if ( a5 && a4 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( HIDWORD(a4[2 * i + 1]) == -2147483644 )
      {
        v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
        if ( v8 >= 0 )
          EtwpProcessEnumCallback(Process, (__int64)v13);
        goto LABEL_9;
      }
    }
  }
  EtwpProcessEnumCallback((PEPROCESS)PsIdleProcess, (__int64)v13);
  PsEnumProcesses((__int64 (__fastcall *)(_QWORD, _QWORD))EtwpProcessEnumCallback, (__int64)v13);
LABEL_9:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v8;
}
