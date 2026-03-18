/*
 * XREFs of DbgkpLkmdSnapGlobals @ 0x14057E65C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057E624 (DbgkpLkmdSnapDataEx.c)
 *     KeEnumerateProcessorDpcs @ 0x1405BCDFC (KeEnumerateProcessorDpcs.c)
 */

__int64 __fastcall DbgkpLkmdSnapGlobals(__int64 a1)
{
  ULONG ActiveProcessorCount; // ebp
  __int64 result; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 Prcb; // rax
  __int64 v7; // rdx

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  result = DbgkpLkmdSnapDataEx(a1, (__int64)KiProcessorBlock, 8 * ActiveProcessorCount, 0LL);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_QWORD *)a1;
    do
    {
      Prcb = KeGetPrcb(v4);
      if ( (int)DbgkpLkmdSnapDataEx(a1, Prcb, 52992LL, 2LL) >= 0 )
      {
        MEMORY[8] = 0LL;
        *v5 = 0LL;
      }
      result = KeEnumerateProcessorDpcs(v4++, v7, a1);
      ++v5;
    }
    while ( v4 < ActiveProcessorCount );
  }
  return result;
}
