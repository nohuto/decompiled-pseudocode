/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x14069C588
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069C7A0 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14069C61C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070DD00 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_GPT *this, struct GPT_HEADER *a2, struct GPT_ENTRY **a3, unsigned int a4)
{
  __int64 v4; // rax
  int v7; // ecx
  struct GPT_ENTRY *v9; // rax
  struct GPT_ENTRY *v10; // rdi
  int Entries; // ebx

  v4 = *(_QWORD *)this;
  v7 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  *a3 = 0LL;
  v9 = (struct GPT_ENTRY *)SC_ENV::Allocate(
                             -*(_DWORD *)(v4 + 236) & (unsigned int)(*(_DWORD *)(v4 + 236) + v7 - 1),
                             (unsigned int)a2,
                             (unsigned __int8)a3,
                             a4);
  v10 = v9;
  if ( v9 )
  {
    Entries = SC_GPT::ReadEntries(this, a2, v9);
    if ( Entries < 0 )
      PspUserApcKernelRoutine(v10);
    else
      *a3 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Entries;
}
