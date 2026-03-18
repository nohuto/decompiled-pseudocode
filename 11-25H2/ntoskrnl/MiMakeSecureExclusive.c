/*
 * XREFs of MiMakeSecureExclusive @ 0x1402A3168
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiMakeSecureExclusive(__int64 a1)
{
  unsigned __int64 v1; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  char v4; // al
  __int64 v5; // rdx
  unsigned __int64 i; // rax

  v1 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  if ( MmVadEventBlockFixEnabled )
    v4 = MiLockVadCore(a1, 0LL);
  else
    v4 = MiLockWorkingSetExclusive((__int64)p_Blink);
  LOBYTE(v5) = v4;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      *(_DWORD *)(v1 + 8) |= 0x20u;
      if ( MmVadEventBlockFixEnabled )
        MiUnlockVadCore(a1, v5);
      else
        MiUnlockWorkingSetExclusive(p_Blink, v5);
      return 1LL;
    }
    if ( *(_DWORD *)(i + 80) == 2 )
      break;
LABEL_13:
    ;
  }
  if ( !v1 )
  {
    v1 = i;
    goto LABEL_13;
  }
  if ( MmVadEventBlockFixEnabled )
    MiUnlockVadCore(a1, v5);
  else
    MiUnlockWorkingSetExclusive(p_Blink, v5);
  return 0LL;
}
