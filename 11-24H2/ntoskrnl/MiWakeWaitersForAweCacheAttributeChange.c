/*
 * XREFs of MiWakeWaitersForAweCacheAttributeChange @ 0x1406843F8
 * Callers:
 *     MiResolveAwePageConflict @ 0x1406840F8 (MiResolveAwePageConflict.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiWakeWaitersForAweCacheAttributeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 **v5; // r14
  volatile signed __int32 *v7; // rdi
  unsigned __int8 v8; // bp
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rbx
  int v12; // [rsp+40h] [rbp+8h]

  v5 = (volatile signed __int32 **)(a1 + 80);
  v7 = 0LL;
  v8 = MiLockPageInline(a2, a2, a3, a4);
  v12 = *(_DWORD *)(a2 + 32);
  BYTE2(v12) &= ~0x20u;
  *(_DWORD *)(a2 + 32) = v12;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  v9 = *v5;
  if ( *v5 )
  {
    do
    {
      v10 = *(volatile signed __int32 **)v9;
      if ( *((_QWORD *)v9 + 1) == a2 )
      {
        *(_QWORD *)v9 = v7;
        v7 = v9;
        *v5 = v10;
      }
      else
      {
        v5 = (volatile signed __int32 **)v9;
      }
      v9 = v10;
    }
    while ( v10 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  MiUnlockPage(a2, v8);
  if ( v7 )
  {
    do
    {
      v11 = *(volatile signed __int32 **)v7;
      KeSignalGate(v7 + 4, 1LL);
      v7 = v11;
    }
    while ( v11 );
  }
}
