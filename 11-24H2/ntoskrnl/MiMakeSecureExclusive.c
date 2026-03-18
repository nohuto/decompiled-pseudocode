/*
 * XREFs of MiMakeSecureExclusive @ 0x1404F1BF0
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
 */

__int64 __fastcall MiMakeSecureExclusive(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rdi
  unsigned __int8 v4; // dl
  unsigned __int64 i; // rax

  v1 = 0;
  v2 = 0LL;
  v4 = MiLockVadCore(a1, 0);
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 80) == 2 )
    {
      if ( v2 )
        goto LABEL_7;
      v2 = i;
    }
  }
  *(_DWORD *)(v2 + 8) |= 0x20u;
  v1 = 1;
LABEL_7:
  MiUnlockVadCore(a1, v4);
  return v1;
}
