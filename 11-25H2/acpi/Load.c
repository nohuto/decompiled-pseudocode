/*
 * XREFs of Load @ 0x14006F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006B950 (LoadMemDDB.c)
 */

__int64 __fastcall Load(_QWORD *Entry, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int MemDDB; // eax
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = ValidateArgTypes((__int64)Entry, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget((__int64)Entry, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v11);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL), Entry[10], (__int64)&v12, 0x80000000);
  v6 = v12;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(-1073741772);
    AcpiDiagTraceAmlError((__int64)Entry, -1073741772);
    PrintDebugMessage(0x4Eu, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( !NameSpaceObject )
  {
    v7 = *(_WORD *)(v12 + 66);
    if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(v12 + 96);
      if ( !*(_BYTE *)(v8 + 12) )
      {
        MemDDB = LoadMemDDB((__int64)Entry, *(const char **)v8, v11);
LABEL_11:
        v4 = MemDDB;
        goto LABEL_13;
      }
    }
    else if ( v7 == 5 )
    {
      MemDDB = LoadFieldUnitDDB((__int64)Entry, v12 + 64, v11);
      goto LABEL_11;
    }
    v4 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431095);
    PrintDebugMessage(0x4Fu, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
LABEL_13:
    if ( (gdwfAMLIInit & 2) != 0 )
    {
      PrintDebugMessage(0x10u, 0LL, 0LL, 0LL, 0LL);
      AMLIDebugger();
    }
  }
LABEL_15:
  if ( v6 )
    DereferenceObjectEx(v6);
  return v4;
}
