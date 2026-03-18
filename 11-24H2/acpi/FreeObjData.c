/*
 * XREFs of FreeObjData @ 0x14002E368
 * Callers:
 *     FreeData @ 0x14000E570 (FreeData.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x14006C73C (AMLICreateOverrideObjectDep.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  _QWORD *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  const void *ObjectTypeName; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // edx

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 > 0x82 )
  {
    v10 = v1 - 131;
    if ( !v10 )
    {
LABEL_25:
      v12 = **(_QWORD **)(a1 + 32);
LABEL_26:
      if ( v12 )
        DereferenceObjectEx(v12);
      goto LABEL_10;
    }
    if ( v10 != 1 )
      goto LABEL_15;
LABEL_18:
    v11 = **(_QWORD **)(a1 + 32);
    if ( v11 )
      DereferenceObjectEx(v11);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    goto LABEL_26;
  }
  if ( v1 == 130 )
    goto LABEL_18;
  if ( v1 <= 8 )
  {
    if ( v1 == 8 )
      goto LABEL_6;
    v3 = v1 - 2;
    if ( !v3 )
      goto LABEL_6;
    v6 = v3 - 1;
    if ( !v6 )
      goto LABEL_6;
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_6;
    v8 = v7 - 1;
    if ( v8 )
      goto LABEL_14;
    goto LABEL_25;
  }
  v5 = v1 - 9;
  if ( !v5 )
  {
    PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
LABEL_10:
    v4 = *(_QWORD **)(a1 + 32);
    goto LABEL_7;
  }
  v13 = v5 - 1;
  if ( !v13 )
    goto LABEL_6;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_6;
  v8 = v14 - 1;
  if ( !v8 )
    goto LABEL_6;
LABEL_14:
  if ( v8 == 2 )
  {
LABEL_6:
    v4 = *(_QWORD **)(a1 + 32);
LABEL_7:
    HeapFree(v4);
    return;
  }
LABEL_15:
  LogError(-1072431101);
  AcpiDiagTraceAmlError(0LL, -1072431101);
  ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
  PrintDebugMessage(0x36u, ObjectTypeName, 0LL, 0LL, 0LL);
}
