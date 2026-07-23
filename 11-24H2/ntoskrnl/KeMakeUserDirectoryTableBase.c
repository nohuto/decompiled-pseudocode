/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1404951F8
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  __int64 result; // rax

  result = a1 | 1;
  if ( !KiFlushPcid )
    return a1;
  return result;
}
