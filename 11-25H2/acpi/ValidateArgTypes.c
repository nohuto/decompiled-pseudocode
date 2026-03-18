/*
 * XREFs of ValidateArgTypes @ 0x140007F70
 * Callers:
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     LogOp2 @ 0x1400077A0 (LogOp2.c)
 *     LogOp2_32 @ 0x140007938 (LogOp2_32.c)
 *     IfElse @ 0x140007D60 (IfElse.c)
 *     Notify @ 0x1400085C0 (Notify.c)
 *     Index @ 0x140008710 (Index.c)
 *     While @ 0x140008A20 (While.c)
 *     DerefOf @ 0x140008B10 (DerefOf.c)
 *     LNot @ 0x140008BB0 (LNot.c)
 *     ExprOp1_32 @ 0x14002DB10 (ExprOp1_32.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ToBuffer @ 0x14002E060 (ToBuffer.c)
 *     ExprOp1_64 @ 0x14002E690 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x14002E874 (ExprOp2_32.c)
 *     MidString @ 0x14002EA20 (MidString.c)
 *     Divide @ 0x14002EC90 (Divide.c)
 *     ToInteger @ 0x14002ED80 (ToInteger.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ToString @ 0x14002F8D0 (ToString.c)
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 *     Wait @ 0x140030C40 (Wait.c)
 *     CreateXField @ 0x14003B324 (CreateXField.c)
 *     SleepStall @ 0x14003B4C0 (SleepStall.c)
 *     Release @ 0x14003B700 (Release.c)
 *     Acquire @ 0x14003E2D0 (Acquire.c)
 *     Buffer @ 0x14003E650 (Buffer.c)
 *     Package @ 0x1400400A0 (Package.c)
 *     Match_64 @ 0x140041A60 (Match_64.c)
 *     Match_32 @ 0x140041C14 (Match_32.c)
 *     OSInterface @ 0x140051490 (OSInterface.c)
 *     ConcatenateResTemplate @ 0x140052C10 (ConcatenateResTemplate.c)
 *     Fatal @ 0x14006F340 (Fatal.c)
 *     Load @ 0x14006F3B0 (Load.c)
 *     Unload @ 0x14006F540 (Unload.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     ConvertToInteger @ 0x14002F7C4 (ConvertToInteger.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     ConvertToDDBHandle @ 0x140055FA8 (ConvertToDDBHandle.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v6; // r9d
  int v8; // r14d
  __int64 v10; // rax
  __int64 v11; // rdi
  _BYTE *v13; // rbp
  _WORD *v14; // rsi
  int v15; // eax
  int v16; // eax
  int ObjectTypeName; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v6 = 0;
  v8 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  v11 = (int)v10;
  if ( (int)v10 <= 0 )
    return 0LL;
  v13 = a4;
  v14 = (_WORD *)(a2 + 2);
  do
  {
    if ( v6 )
      break;
    if ( *v13 == 73 )
    {
      if ( *v14 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
        v18 = 198;
LABEL_31:
        PrintDebugMessage(v18, v8, ObjectTypeName, 0, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *v13 )
      {
        case 'A':
          if ( *v14 != 129 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v21 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(195, v8, v21, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v14 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 193;
            goto LABEL_31;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v14 - 3) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v15 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(194, v8, v15, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v14 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(199, v8, v19, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v14 - 1) > 2u
            && *v14 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(200, v8, v20, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v14 != 5 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 197;
            goto LABEL_31;
          }
          break;
        case 'H':
          if ( *v14 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v8, a2 + 40LL * v8)) != 0 )
            {
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(a1, 3222536201LL);
              v23 = GetObjectTypeName((unsigned __int16)*v14);
              PrintDebugMessage(196, v8, v23, 0, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v14 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 196;
            goto LABEL_31;
          }
          break;
        case 'O':
          if ( *v14 != 128 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v16 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(201, v8, v16, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v14 != 4 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 202;
            goto LABEL_31;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v14 - 128) > 1u && *v14 != 14 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 203;
            goto LABEL_31;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v14 - 2) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v22 = GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(204, v8, v22, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v14 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v8, 0LL, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v14);
            v18 = 205;
            goto LABEL_31;
          }
          break;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(206, (char)*v13, 0, 0, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++v13;
    ++v8;
    v14 += 20;
  }
  while ( v13 - a4 < v11 );
  return v6;
}
