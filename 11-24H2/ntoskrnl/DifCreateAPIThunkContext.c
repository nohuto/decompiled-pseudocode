/*
 * XREFs of DifCreateAPIThunkContext @ 0x140616C0C
 * Callers:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DifCreateAPIThunkContext(__int64 a1, int a2, int a3)
{
  __int64 Pool2; // r9
  __int64 v7; // rax

  Pool2 = ExAllocatePool2(0x40uLL, 0x20uLL, 0x70416644u);
  if ( Pool2 )
  {
    if ( a2 )
      v7 = *(_QWORD *)(a1 + 16);
    else
      v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(Pool2 + 8) = v7;
    *(_BYTE *)(Pool2 + 4) = a2 != 0;
    *(_DWORD *)Pool2 = a3;
  }
  return Pool2;
}
