/*
 * XREFs of PrintObject @ 0x140055B98
 * Callers:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     PrintBuffData @ 0x14006E578 (PrintBuffData.c)
 */

ULONG __fastcall PrintObject(__int64 a1)
{
  int v2; // ecx
  const char *ObjectTypeName; // rax
  int v5; // edi

  v2 = *(unsigned __int16 *)(a1 + 2);
  switch ( v2 )
  {
    case 1:
      return ConPrintf("0x%I64x", *(_QWORD *)(a1 + 16));
    case 2:
      return ConPrintf("\"%s\"", *(_QWORD *)(a1 + 32));
    case 3:
      ConPrintf("Buffer(0x%x)", *(_DWORD *)(a1 + 24));
      return PrintBuffData(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 24));
    case 4:
      ConPrintf("Package(%d){", **(_DWORD **)(a1 + 32));
      v5 = 0;
      while ( v5 < **(_DWORD **)(a1 + 32) )
      {
        ConPrintf("\n\t");
        PrintObject(*(_QWORD *)(a1 + 32) + 8 * (5LL * v5++ + 1));
        if ( v5 < **(_DWORD **)(a1 + 32) )
          ConPrintf(",");
      }
      return ConPrintf("}");
    default:
      ObjectTypeName = (const char *)GetObjectTypeName(v2);
      return ConPrintf(
               "<Obj=%p,Type=%s,Value=0x%I64x,Buff=%p,Len=%d>",
               (const void *)a1,
               ObjectTypeName,
               *(_QWORD *)(a1 + 16),
               *(const void **)(a1 + 32),
               *(_DWORD *)(a1 + 24));
  }
}
