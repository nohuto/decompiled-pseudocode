/*
 * XREFs of DbgkpLkmdSnapGlobals @ 0x14057B33C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057B304 (DbgkpLkmdSnapDataEx.c)
 *     KeEnumerateProcessorDpcs @ 0x1405B8F5C (KeEnumerateProcessorDpcs.c)
 */

__int64 __fastcall DbgkpLkmdSnapGlobals(__int64 a1)
{
  ULONG ActiveProcessorCount; // ebp
  __int64 result; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rdx

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  result = DbgkpLkmdSnapDataEx(a1);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_QWORD *)a1;
    do
    {
      KeGetPrcb(v4);
      if ( (int)DbgkpLkmdSnapDataEx(a1) >= 0 )
      {
        MEMORY[8] = 0LL;
        *v5 = 0LL;
      }
      result = KeEnumerateProcessorDpcs(v4++, v6, a1);
      ++v5;
    }
    while ( v4 < ActiveProcessorCount );
  }
  return result;
}
