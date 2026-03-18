/*
 * XREFs of ToString @ 0x14002F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  bool v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(0xBFu, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x85u, (__int64)&v12);
      if ( !v5 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) )
        {
          v6 = IsCompatableDSDTRevision();
          v7 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v7 + 56) != (-(__int64)v6 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF )
          {
            v8 = *(unsigned int *)(v7 + 56);
            goto LABEL_13;
          }
        }
LABEL_12:
        v8 = 0LL;
LABEL_13:
        v9 = ConvertToString(*(_QWORD *)(a2 + 80), v8, *(_QWORD *)(a2 + 88));
        v5 = v9;
        switch ( v9 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            v10 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            PrintDebugMessage(0xBDu, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)-1072431098;
          case 0xC0140006:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, v5);
            v10 = 192;
            break;
          default:
            return v5;
        }
        PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "B");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v12);
      if ( !v5 )
        goto LABEL_12;
    }
  }
  return v5;
}
