/*
 * XREFs of MxBootDescriptorDepleted @ 0x140C40F68
 * Callers:
 *     MxGetNextPage @ 0x140C41860 (MxGetNextPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxBootDescriptorDepleted(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) == -1LL )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL) &= ~0x40000000u;
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(result + 24) |= 0x80000000;
  }
  return result;
}
