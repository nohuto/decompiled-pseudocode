/*
 * XREFs of Store @ 0x140006870
 * Callers:
 *     <none>
 * Callees:
 *     WriteField @ 0x14000229C (WriteField.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int16 v12; // ax
  char v15; // al
  size_t v16; // rdx
  __int64 v17; // rcx
  int ObjectTypeName; // eax
  int v19; // r8d
  int v20; // ecx
  int v21; // r10d
  int v22; // edx
  int v23; // eax
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80) + 40LL;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL);
  if ( (_WORD)v5 != 128 )
  {
    if ( (_WORD)v5 == 129 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
      goto LABEL_5;
    }
    if ( v5 <= 0x10 )
    {
      v6 = 81921;
      if ( _bittest(&v6, v5) )
      {
LABEL_5:
        v7 = *(unsigned __int16 *)(v2 + 2);
        if ( (_DWORD)v7 == 133 )
        {
LABEL_22:
          FreeDataBuffs(v2, 1LL);
        }
        else
        {
          switch ( *(_WORD *)(v2 + 2) )
          {
            case 1:
            case 2:
            case 3:
            case 4:
              goto LABEL_22;
            case 5:
            case 0xE:
              goto LABEL_8;
            default:
              if ( !*(_WORD *)(v2 + 2) )
                goto LABEL_22;
              break;
          }
        }
        goto LABEL_8;
      }
    }
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
    v19 = 0;
    v20 = 208;
LABEL_32:
    PrintDebugMessage(v20, ObjectTypeName, v19, 0, 0LL);
    return 3222536202LL;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 64LL;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 66LL);
  if ( (_DWORD)v7 != 135 )
  {
    switch ( (int)v7 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 14:
        goto LABEL_8;
      default:
        if ( (_DWORD)v7 == 133 || (_DWORD)v7 == 134 || !(_DWORD)v7 )
          goto LABEL_8;
        LogError(3222536202LL);
        AcpiDiagTraceAmlError(a1, 3222536202LL);
        GetObjectTypeName(135LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
        v19 = v21;
        v20 = 207;
        break;
    }
    goto LABEL_32;
  }
LABEL_8:
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_QWORD *)(a2 + 88);
  if ( v9 != v8 )
  {
    *(_OWORD *)v9 = *(_OWORD *)v8;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(v8 + 32);
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 88);
  v11 = 0;
  v24 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(v2 + 2);
      if ( v12 != 128 )
        break;
      v2 = *(_QWORD *)(v2 + 16) + 64LL;
    }
    if ( v12 != 129 )
      break;
    v2 = *(_QWORD *)(v2 + 16);
  }
  if ( *(_WORD *)(v2 + 2) )
  {
    switch ( *(_WORD *)(v2 + 2) )
    {
      case 1:
        v15 = IsCompatableDSDTRevision();
        v16 = 8LL;
        if ( !v15 )
          v16 = 4LL;
        return (unsigned int)CopyObjBuffer((void *)(v2 + 16), v16);
      case 2:
        v22 = *(_DWORD *)(v2 + 24);
        if ( v22 )
          return (unsigned int)CopyObjBuffer(*(void **)(v2 + 32), (unsigned int)(v22 - 1));
        v11 = -1073741811;
        break;
      case 3:
        return (unsigned int)CopyObjBuffer(*(void **)(v2 + 32), *(unsigned int *)(v2 + 24));
      case 5:
        v11 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v24);
        if ( !v11 )
        {
          v17 = v24;
          *(_QWORD *)(v24 + 32) = v2;
          *(_QWORD *)(v17 + 40) = v10;
        }
        return v11;
      case 0xE:
        return (unsigned int)WriteField(a1, v2, *(_QWORD *)(v2 + 32) + 12LL, v10);
      case 0x10:
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(v10, v7, 0LL);
        return v11;
      default:
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        v23 = GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
        PrintDebugMessage(215, v23, 0, 0, 0LL);
        return (unsigned int)-1072431095;
    }
  }
  else
  {
    return (unsigned int)DupObjData(gpheapGlobal, v2, v10);
  }
  return v11;
}
