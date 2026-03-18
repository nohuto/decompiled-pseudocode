/*
 * XREFs of MiWakeWaitersForAweCacheAttributeChange @ 0x1406779E8
 * Callers:
 *     MiResolveAwePageConflict @ 0x1406776E8 (MiResolveAwePageConflict.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 */

__int64 __fastcall MiWakeWaitersForAweCacheAttributeChange(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  unsigned __int8 v6; // bp
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rbx
  int v11; // [rsp+40h] [rbp+8h]

  v3 = (_QWORD **)(a1 + 80);
  v5 = 0LL;
  v6 = MiLockPageInline(a2);
  v11 = *(_DWORD *)(a2 + 32);
  BYTE2(v11) &= ~0x20u;
  *(_DWORD *)(a2 + 32) = v11;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  v7 = *v3;
  if ( *v3 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      if ( v7[1] == a2 )
      {
        *v7 = v5;
        v5 = v7;
        *v3 = v8;
      }
      else
      {
        v3 = (_QWORD **)v7;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  result = MiUnlockPage(a2, v6);
  if ( v5 )
  {
    do
    {
      v10 = (_QWORD *)*v5;
      result = KeSignalGate((_DWORD *)v5 + 4, 1);
      v5 = v10;
    }
    while ( v10 );
  }
  return result;
}
