/*
 * XREFs of MiInitMachineDependent @ 0x140C4AEB4
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiInitMachineDependent()
{
  unsigned __int64 v0; // rax
  _KPROCESS *Process; // rdx
  __int16 v2; // cx
  __int64 result; // rax

  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = __readcr3();
  result = ((v0 >> 12) & 0xFFFFFFFFFFLL) << 12;
  Process->DirectoryTableBase = result | v2 & 0xFFF;
  return result;
}
