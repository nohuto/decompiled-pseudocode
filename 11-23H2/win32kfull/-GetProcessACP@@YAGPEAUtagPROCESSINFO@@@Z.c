/*
 * XREFs of ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1C013C75C
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C00E75C0 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessACP(struct tagPROCESSINFO *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned __int16 *)(PsGetProcessPeb(*(_QWORD *)a1) + 844);
  return result;
}
