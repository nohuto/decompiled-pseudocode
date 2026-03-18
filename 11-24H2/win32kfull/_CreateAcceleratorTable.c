/*
 * XREFs of _CreateAcceleratorTable @ 0x1401E24C8
 * Callers:
 *     NtUserCreateAcceleratorTable @ 0x1401E2400 (NtUserCreateAcceleratorTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall CreateAcceleratorTable(const void *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax

  v2 = (unsigned int)a2;
  v3 = a2 + 34;
  if ( (int)a2 + 34 < (unsigned int)a2 )
    return 0LL;
  v4 = PtiCurrent((__int64)a1, a2);
  LOBYTE(v5) = 8;
  v6 = HMAllocObject(v4, 0LL, v5, v3);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  memmove((void *)(v6 + 28), a1, (unsigned int)v2);
  *(_DWORD *)(v7 + 24) = v2 / 6;
  v8 = 3LL * ((unsigned int)(v2 / 6) - 1);
  *(_BYTE *)(v7 + 2 * v8 + 28) |= 0x80u;
  return v7;
}
