/*
 * XREFs of ParseFieldList @ 0x1400358A8
 * Callers:
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 */

__int64 __fastcall ParseFieldList(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v9; // r15
  unsigned int v10; // ebp
  _BYTE v12[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v5 = 0;
  v13 = 0;
  v12[0] = 0;
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("{");
    ++dword_140089034;
  }
  v14 = 0LL;
  while ( *(_QWORD *)(a1 + 120) < a2 )
  {
    v5 = ParseField(a1, a3, (unsigned int)&v15, (unsigned int)&v13, (__int64)v12, (__int64)&v14);
    if ( v5 )
      break;
    v9 = **(_QWORD **)(a3 + 96);
    if ( (gDebugger & 0xD0) != 0 && *(_QWORD *)(a1 + 120) < a2 )
      ConPrintf(",");
    if ( a5 != -1 )
    {
      v10 = v13 + 7;
      if ( (unsigned int)(v13 + 7) >> 3 > a5 && *(_BYTE *)(*(_QWORD *)(v9 + 96) + 12LL) != 6 )
      {
        v5 = -1072431100;
        LogError(-1072431100);
        AcpiDiagTraceAmlError(a1, -1072431100);
        PrintDebugMessage(0x7Fu, (const void *)((unsigned __int64)v10 >> 3), (const void *)a5, 0LL, 0LL);
        break;
      }
    }
  }
  if ( v14 )
    HeapFree(v14);
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_140089034;
    PrintIndent(a1);
    ConPrintf("}");
  }
  return v5;
}
