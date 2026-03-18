/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140B53080
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

ULONG_PTR __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 PteAddress; // rax
  unsigned int v5; // ecx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  ULONG_PTR result; // rax

  v3 = a1;
  PteAddress = MiGetPteAddress(a1);
  v5 = 0;
  v6 = (_QWORD *)PteAddress;
  if ( a2 )
  {
    do
    {
      ++v5;
      *v6++ = CLFS_LSN_NULL_EXT;
    }
    while ( v5 < a2 );
    do
    {
      MiFlushSingleTbEntry(v3, -1, 1);
      v3 += 4096LL;
      --a2;
    }
    while ( a2 );
  }
  v7 = (_QWORD *)qword_140E2FE78;
  v8 = 32LL;
  result = CLFS_LSN_NULL_EXT;
  do
  {
    *v7++ = CLFS_LSN_NULL_EXT;
    --v8;
  }
  while ( v8 );
  return result;
}
