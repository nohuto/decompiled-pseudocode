/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140A56CE4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  _KPROCESS *Process; // rax
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = MiObtainReferencedVadEx(a1, 0LL, &v12, a4);
  v6 = *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32);
  v7 = *(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32);
  MiUnlockPageTableRange(a1, (v6 << 12) | 0xFFF, v8, v9);
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v12) = 0;
  return MiFreeVadRange((_DWORD *)v5, (int)&v12, v7, v6, (ULONG_PTR)Process, 0, 0LL);
}
