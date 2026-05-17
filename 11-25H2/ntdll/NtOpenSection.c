/*
 * XREFs of NtOpenSection @ 0x180163900
 * Callers:
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010CBD0 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenSection()
{
  __int64 result; // rax

  result = 55LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
