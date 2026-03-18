/*
 * XREFs of AMLIEvalPackageElement @ 0x14006AB98
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     GetBaseObject @ 0x14001A7A0 (GetBaseObject.c)
 *     EvalPackageElement @ 0x14002CD0C (EvalPackageElement.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 BaseObject; // rdi
  __int64 ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const char *v11; // r8
  void *v12; // rbx
  __int16 v13; // ax
  unsigned int **v14; // rcx
  const void *ObjectTypeName; // rax
  unsigned int v16; // ecx
  _OWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h] BYREF

  dword_1400890B8 = 0;
  v5 = a2;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v6 = *a1;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  *(_OWORD *)a3 = 0LL;
  v19 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  memset(v18, 0, sizeof(v18));
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = KeGetCurrentThread();
    v11 = byte_1400753E8;
    v12 = (void *)ObjectPath;
    if ( ObjectPath )
      v11 = (const char *)ObjectPath;
    PrintDebugMessage(0x2Eu, CurrentThread, v11, (const void *)v5, 0LL);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  v13 = *(_WORD *)(BaseObject + 66);
  if ( v13 != 8 )
  {
    if ( v13 == 4 )
    {
      v14 = (unsigned int **)(BaseObject + 96);
      goto LABEL_17;
    }
    v7 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v16 = 47;
LABEL_19:
    PrintDebugMessage(v16, ObjectTypeName, 0LL, 0LL, 0LL);
    goto LABEL_20;
  }
  v7 = SyncEvalObject(BaseObject, (__int64)v18, 0, 0LL);
  if ( !v7 )
  {
    if ( WORD1(v18[0]) == 4 )
    {
      v14 = (unsigned int **)&v19;
LABEL_17:
      v7 = EvalPackageElement(*v14, v5, a3);
      goto LABEL_20;
    }
    v7 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(WORD1(v18[0]));
    v16 = 48;
    goto LABEL_19;
  }
LABEL_20:
  FreeDataBuffs((__int64)v18, 1u);
  if ( v7 == 32772 )
    v7 = 259;
  DereferenceObjectEx(BaseObject);
  return v7;
}
