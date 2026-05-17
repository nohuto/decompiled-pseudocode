/*
 * XREFs of LdrpAllocateUnicodeString @ 0x1800760E0
 * Callers:
 *     LdrpResolvePatchDllName @ 0x180074708 (LdrpResolvePatchDllName.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall LdrpAllocateUnicodeString(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 Atom; // rax

  v2 = a2 + 2;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
    return 3221225734LL;
  if ( (v2 & 1) != 0 )
    return 3221225485LL;
  Atom = RtlpAllocateAtom(v2);
  *(_QWORD *)(a1 + 8) = Atom;
  if ( !Atom )
    return 3221225495LL;
  *(_WORD *)(a1 + 2) = v2;
  return 0LL;
}
