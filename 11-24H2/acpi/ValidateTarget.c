/*
 * XREFs of ValidateTarget @ 0x14002F550
 * Callers:
 *     ExprOp1_32 @ 0x14002DB10 (ExprOp1_32.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ToBuffer @ 0x14002E060 (ToBuffer.c)
 *     CopyObject @ 0x14002E220 (CopyObject.c)
 *     ExprOp1_64 @ 0x14002E690 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x14002E874 (ExprOp2_32.c)
 *     MidString @ 0x14002EA20 (MidString.c)
 *     Divide @ 0x14002EC90 (Divide.c)
 *     ToInteger @ 0x14002ED80 (ToInteger.c)
 *     CondRefOf @ 0x14002EE00 (CondRefOf.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ToString @ 0x14002F8D0 (ToString.c)
 *     ConcatenateResTemplate @ 0x140052C10 (ConcatenateResTemplate.c)
 *     Load @ 0x14006F3B0 (Load.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // eax
  _WORD *v5; // rbx
  __int64 v6; // r10
  unsigned int v7; // edi
  int v11; // ecx
  int v13; // edx
  const void *ObjectTypeName; // rax
  const void *v15; // r8
  unsigned int v16; // ecx
  const void *v17; // r10

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = (_WORD *)(a2 + 2);
  v6 = a2;
  v7 = 0;
  if ( (_WORD)v4 == 128 )
  {
    v6 = *(_QWORD *)(a2 + 16) + 64LL;
  }
  else if ( (_WORD)v4 == 129 )
  {
    v6 = *(_QWORD *)(a2 + 16);
  }
  else if ( v4 > 0x10 || (v11 = 81921, !_bittest(&v11, v4)) )
  {
    LogError(-1072431094);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v5);
    v15 = 0LL;
    v16 = 208;
    goto LABEL_22;
  }
  *(_QWORD *)a4 = v6;
  if ( *v5 == 128 )
  {
    v13 = *(unsigned __int16 *)(v6 + 2);
    if ( v13 == a3 || v13 == 14 && a3 == 1 )
      return v7;
    switch ( *(_WORD *)(v6 + 2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
        v13 = 133;
        goto LABEL_25;
      case 5:
      case 0xE:
        v13 = 134;
LABEL_25:
        if ( v13 == a3 )
          return v7;
        goto LABEL_15;
      default:
LABEL_15:
        if ( a3 == 135 && (unsigned int)(v13 - 133) <= 1 )
          return v7;
        if ( v13 )
        {
          if ( !a3 )
            return v7;
        }
        else if ( a3 != 134 )
        {
          return v7;
        }
        LogError(-1072431094);
        AcpiDiagTraceAmlError(a1, -1072431094);
        GetObjectTypeName(a3);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
        v15 = v17;
        v16 = 207;
        break;
    }
LABEL_22:
    PrintDebugMessage(v16, ObjectTypeName, v15, 0LL, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( *(_WORD *)(v6 + 2) == 133 )
  {
LABEL_11:
    FreeDataBuffs(v6, 1u);
  }
  else
  {
    switch ( *(_WORD *)(v6 + 2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
        goto LABEL_11;
      case 5:
      case 0xE:
        return v7;
      default:
        if ( !*(_WORD *)(v6 + 2) )
          goto LABEL_11;
        break;
    }
  }
  return v7;
}
