/*
 * XREFs of Concat @ 0x14002F1F0
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     CheckAndPromoteAliasedObjects @ 0x14002F770 (CheckAndPromoteAliasedObjects.c)
 *     ConvertToInteger @ 0x14002F7C4 (ConvertToInteger.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int16 v10; // ax
  _OWORD *v11; // rsi
  __int16 v12; // ax
  __int64 v13; // rcx
  unsigned int *v14; // r14
  unsigned int *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int16 v20; // ax
  size_t v21; // r8
  const void *v22; // rdx
  void *v23; // rcx
  void *v24; // rcx
  int v26; // eax
  __int64 v27; // r9
  const void *ObjectTypeName; // rax
  const void *v29; // r10
  bool v30; // zf
  int v31; // eax
  bool v32; // al
  _QWORD *v33; // rcx
  _OWORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+50h] [rbp-48h]
  char v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h] BYREF

  v37 = 0LL;
  v36 = 0;
  v3 = *(_QWORD *)(a2 + 80);
  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  v5 = ValidateArgTypes(a1, v3, 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135LL, &v37);
  if ( v5 )
    return v5;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = v37;
  if ( *(_WORD *)(v7 + 82) != 128 )
    CheckAndPromoteAliasedObjects(v7, v6, v37);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = *(_WORD *)(v9 + 2);
  v11 = (_OWORD *)(v9 + 40);
  if ( v10 != *(_WORD *)(v9 + 42) )
  {
    switch ( v10 )
    {
      case 1:
        v26 = ConvertToInteger(v9 + 40, v34);
        break;
      case 2:
        v26 = ConvertToString(v9 + 40, 0LL, v34);
        break;
      case 3:
        v26 = ConvertToBuffer(v9 + 40, (__int64)v34);
        break;
      default:
        goto LABEL_26;
    }
    v5 = v26;
    if ( v26 < 0 )
      goto LABEL_6;
LABEL_26:
    v11 = v34;
    v36 = 1;
  }
LABEL_6:
  v12 = *(_WORD *)(v9 + 2);
  if ( v12 == *((_WORD *)v11 + 1) )
  {
    v13 = *(_QWORD *)(a2 + 88);
    if ( v12 == 1 )
    {
      *(_WORD *)(v13 + 2) = 3;
      v30 = !IsCompatableDSDTRevision();
      v31 = 16;
      if ( v30 )
        v31 = 8;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v31;
      v14 = (unsigned int *)(v9 + 24);
      v15 = (unsigned int *)v11 + 6;
    }
    else
    {
      *(_WORD *)(v13 + 2) = v12;
      v14 = (unsigned int *)(v9 + 24);
      v15 = (unsigned int *)v11 + 6;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v9 + 24) + *((_DWORD *)v11 + 6);
      v16 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v16 + 2) == 2 )
        --*(_DWORD *)(v16 + 24);
    }
    v17 = *(_QWORD *)(a2 + 88);
    v18 = 1381258056;
    if ( *(_WORD *)(v17 + 2) != 2 )
      v18 = 1179992648;
    v19 = HeapAlloc(gpheapGlobal, v18, *(_DWORD *)(v17 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v19;
    if ( v19 )
    {
      v20 = *(_WORD *)(v9 + 2);
      if ( v20 == 1 )
      {
        v32 = IsCompatableDSDTRevision();
        v33 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v32 )
        {
          *v33 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v11 + 2);
        }
        else
        {
          *(_DWORD *)v33 = *(_DWORD *)(v9 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v11 + 4);
        }
      }
      else
      {
        v21 = *v14;
        v22 = *(const void **)(v9 + 32);
        v23 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v20 == 2 )
        {
          memmove(v23, v22, (unsigned int)(v21 - 1));
          v24 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *v14);
        }
        else
        {
          memmove(v23, v22, v21);
          v24 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *v14);
        }
        memmove(v24, *((const void **)v11 + 4), *v15);
      }
      if ( !v5 )
        v5 = WriteObject(a1, v8, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x1Bu, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v27 + 2));
    PrintDebugMessage(0x1Au, ObjectTypeName, v29, 0LL, 0LL);
  }
  if ( v36 )
    FreeDataBuffs((__int64)v34, 1u);
  return v5;
}
