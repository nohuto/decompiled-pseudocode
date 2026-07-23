/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140266330
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 */

unsigned __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r9d
  _KPROCESS *Process; // rdi
  unsigned __int64 result; // rax

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(a2) = 17;
  MiDeletePagablePteRange((_DWORD)Process + 1024, a2, a1, v5, 0, a3 | 0x80, a4);
  result = *(_QWORD *)(a4 + 24);
  if ( result )
  {
    result = -(__int64)result;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, result);
  }
  return result;
}
