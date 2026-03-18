/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140A5EAF4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0LL, &v7);
  v3 = *(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  v4 = *(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF);
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v7) = 0;
  return MiFreeVadRange((_DWORD *)v2, (int)&v7, v4, v3, (ULONG_PTR)Process, 0, 0LL);
}
