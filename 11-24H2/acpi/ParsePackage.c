/*
 * XREFs of ParsePackage @ 0x140001230
 * Callers:
 *     <none>
 * Callees:
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     ParseIntObj @ 0x140006630 (ParseIntObj.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  _QWORD *v7; // r15
  int *v8; // rdx
  _DWORD **v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp

  v4 = a3;
  if ( a3 )
    goto LABEL_19;
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
      {
        ((void (*)(void))PrintIndent)();
        ConPrintf("{");
        ++dword_140088FB4;
      }
      goto LABEL_4;
    case 1:
LABEL_4:
      v7 = (_QWORD *)(a1 + 120);
      while ( 1 )
      {
LABEL_5:
        v8 = (int *)(a2 + 40);
        v9 = (_DWORD **)(a2 + 32);
        while ( 1 )
        {
          if ( *v7 >= *(_QWORD *)(a2 + 48) )
            goto LABEL_14;
          v10 = *v8;
          if ( (unsigned int)v10 >= **v9 )
            goto LABEL_14;
          *v8 = v10 + 1;
          if ( (gDebugger & 0xD0) != 0 && (int)v10 > 0 )
            ConPrintf(",");
          if ( (unsigned __int8)(*(_BYTE *)*v7 - 17) <= 2u )
            break;
          if ( (gDebugger & 0xD0) != 0 )
            PrintIndent(a1);
          v11 = 5 * v10;
          LOBYTE(a4) = 1;
          v4 = ParseIntObj(a1, a1 + 120, &(*v9)[2 * v11 + 2], a4);
          if ( v4 != -1072431103
            || (LOBYTE(a4) = 1, v4 = ParseString(a1, a1 + 120, &(*v9)[2 * v11 + 2], a4), v4 != -1072431103)
            || (LOBYTE(a4) = 1, v4 = ParseObjName(a1, a1 + 120, &(*v9)[2 * v11 + 2], a4), v4 != -1072431103) )
          {
            if ( !v4 )
              goto LABEL_5;
LABEL_14:
            if ( v4 == 32772 )
              return v4;
            goto LABEL_15;
          }
          LogError(3222536193LL);
          AcpiDiagTraceAmlError(a1, 3222536193LL);
          PrintDebugMessage(135, *(unsigned __int8 *)*v7, *v7, 0, 0LL);
LABEL_15:
          if ( a2 != *(_QWORD *)(a1 + 416) )
            return v4;
          if ( !v4 && *v7 < *(_QWORD *)(a2 + 48) )
          {
            v9 = (_DWORD **)(a2 + 32);
            v8 = (int *)(a2 + 40);
            if ( *(_DWORD *)(a2 + 40) < **(_DWORD **)(a2 + 32) )
              continue;
          }
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_19;
        }
        v4 = ParseOpcode(a1, 0LL, &(*v9)[8 * v10 + 2 + 2 * v10]);
        if ( v4 )
          goto LABEL_14;
        if ( a2 != *(_QWORD *)(a1 + 416) )
          return v4;
      }
    case 2:
LABEL_19:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_140088FB4;
        PrintIndent(a1);
        ConPrintf("}");
        --dword_140088FB4;
      }
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL);
      HeapFree();
      break;
  }
  return v4;
}
