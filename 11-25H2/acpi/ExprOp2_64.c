/*
 * XREFs of ExprOp2_64 @ 0x1400072C0
 * Callers:
 *     ExprOp2 @ 0x14002E810 (ExprOp2.c)
 * Callees:
 *     WriteField @ 0x14000229C (WriteField.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
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

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int16 v13; // ax
  char v15; // al
  size_t v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int ObjectTypeName; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // r10d
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, a2[10], 0LL, "II");
  if ( (int)result < 0 )
    return result;
  v5 = a2[10] + 80LL;
  v6 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v6 == 128 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL) + 64LL;
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a2[10] + 96LL) + 66LL);
    if ( (_DWORD)v8 == 135 )
      goto LABEL_9;
    switch ( *(_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 66LL) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xE:
        goto LABEL_9;
      default:
        if ( (_DWORD)v8 == 133 || (_DWORD)v8 == 134 || !*(_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 66LL) )
          goto LABEL_9;
        LogError(3222536202LL);
        AcpiDiagTraceAmlError(a1, 3222536202LL);
        GetObjectTypeName(135LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
        v23 = v25;
        v24 = 207;
        break;
    }
LABEL_45:
    PrintDebugMessage(v24, ObjectTypeName, v23, 0, 0LL);
    return 3222536202LL;
  }
  if ( (_WORD)v6 == 129 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL);
    goto LABEL_6;
  }
  if ( v6 > 0x10 || (v7 = 81921, !_bittest(&v7, v6)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    v23 = 0;
    v24 = 208;
    goto LABEL_45;
  }
LABEL_6:
  v8 = *(unsigned __int16 *)(v5 + 2);
  if ( (_DWORD)v8 == 133 )
  {
LABEL_29:
    FreeDataBuffs(v5, 1LL);
  }
  else
  {
    switch ( *(_WORD *)(v5 + 2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
        goto LABEL_29;
      case 5:
      case 0xE:
        break;
      default:
        if ( !*(_WORD *)(v5 + 2) )
          goto LABEL_29;
        break;
    }
  }
LABEL_9:
  *(_WORD *)(a2[11] + 2LL) = 1;
  v9 = 0;
  v10 = *(_DWORD *)(a2[7] + 8LL);
  if ( v10 == 114 )
  {
    v11 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
  }
  else
  {
    if ( v10 != 123 )
    {
      switch ( v10 )
      {
        case 116:
          v8 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 119:
          v11 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_11;
        case 121:
          v18 = a2[10];
          v19 = *(_QWORD *)(v18 + 56);
          if ( v19 >= 0x40 )
          {
            v8 = 0LL;
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          else
          {
            v8 = *(_QWORD *)(v18 + 16) << v19;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          break;
        case 122:
          v20 = a2[10];
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 >= 0x40 )
          {
            v8 = 0LL;
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          else
          {
            v8 = *(_QWORD *)(v20 + 16) >> v21;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          break;
        case 124:
          v11 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
          goto LABEL_11;
        case 125:
          v8 = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 126:
          v8 = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 127:
          v8 = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 133:
          v27 = a2[10];
          v28 = *(_QWORD *)(v27 + 56);
          if ( v28 )
          {
            v8 = *(_QWORD *)(v27 + 16) % v28;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          else
          {
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          break;
        default:
          goto LABEL_12;
      }
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
  }
LABEL_11:
  *(_QWORD *)(a2[11] + 16LL) = v11;
LABEL_12:
  v12 = a2[11];
  v30 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(_WORD *)(v5 + 2);
      if ( v13 != 128 )
        break;
      v5 = *(_QWORD *)(v5 + 16) + 64LL;
    }
    if ( v13 != 129 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
  }
  if ( *(_WORD *)(v5 + 2) )
  {
    switch ( *(_WORD *)(v5 + 2) )
    {
      case 1:
        v15 = IsCompatableDSDTRevision();
        v16 = 8LL;
        if ( !v15 )
          v16 = 4LL;
        return (unsigned int)CopyObjBuffer((void *)(v5 + 16), v16);
      case 2:
        v26 = *(_DWORD *)(v5 + 24);
        if ( v26 )
          return (unsigned int)CopyObjBuffer(*(void **)(v5 + 32), (unsigned int)(v26 - 1));
        v9 = -1073741811;
        break;
      case 3:
        return (unsigned int)CopyObjBuffer(*(void **)(v5 + 32), *(unsigned int *)(v5 + 24));
      case 5:
        v9 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v30);
        if ( !v9 )
        {
          v17 = v30;
          *(_QWORD *)(v30 + 32) = v5;
          *(_QWORD *)(v17 + 40) = v12;
        }
        return v9;
      case 0xE:
        return (unsigned int)WriteField(a1, v5, *(_QWORD *)(v5 + 32) + 12LL, v12);
      case 0x10:
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(v12, v8, 0LL);
        return v9;
      default:
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        v29 = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
        PrintDebugMessage(215, v29, 0, 0, 0LL);
        return (unsigned int)-1072431095;
    }
  }
  else
  {
    return (unsigned int)DupObjData(gpheapGlobal, v5, v12);
  }
  return v9;
}
