/*
 * XREFs of NewObjData @ 0x14003620C
 * Callers:
 *     AMLICreateOverrideObjectDefault @ 0x14006C648 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x14006C73C (AMLICreateOverrideObjectDep.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  const void *ObjectTypeName; // rax

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 > 0x82 )
  {
    v16 = v2 - 131;
    if ( !v16 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1329874504;
      return HeapAlloc(a1, v8, v7);
    }
    if ( v16 == 1 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1180191048;
      return HeapAlloc(a1, v8, v7);
    }
    goto LABEL_33;
  }
  if ( v2 == 130 )
  {
    v7 = *(_DWORD *)(a2 + 24);
    v8 = 1179337288;
    return HeapAlloc(a1, v8, v7);
  }
  if ( v2 > 8 )
  {
    v10 = v2 - 9;
    if ( !v10 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1414876488;
      return HeapAlloc(a1, v8, v7);
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1196576584;
      return HeapAlloc(a1, v8, v7);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1397903432;
      return HeapAlloc(a1, v8, v7);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1330794568;
      return HeapAlloc(a1, v8, v7);
    }
    if ( v13 == 2 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1145455176;
      return HeapAlloc(a1, v8, v7);
    }
    goto LABEL_33;
  }
  if ( v2 == 8 )
  {
    v7 = *(_DWORD *)(a2 + 24);
    v8 = 1413827912;
    return HeapAlloc(a1, v8, v7);
  }
  v5 = v2 - 2;
  if ( !v5 )
  {
    v7 = *(_DWORD *)(a2 + 24);
    v8 = 1381258056;
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v14 = v6 - 1;
    if ( !v14 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1196118088;
      goto LABEL_8;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1430537800;
      return HeapAlloc(a1, v8, v7);
    }
    if ( v15 == 2 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      v8 = 1314276680;
      return HeapAlloc(a1, v8, v7);
    }
LABEL_33:
    LogError(-1072431101);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
    PrintDebugMessage(0x70u, ObjectTypeName, 0LL, 0LL, 0LL);
    return v3;
  }
  v7 = *(_DWORD *)(a2 + 24);
  v8 = 1179992648;
LABEL_8:
  a1 = gpheapGlobal;
  return HeapAlloc(a1, v8, v7);
}
