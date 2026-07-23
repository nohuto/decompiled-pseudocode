/*
 * XREFs of KeDeleteThread @ 0x14021F3F4
 * Callers:
 *     PspReaper @ 0x14021F340 (PspReaper.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x14021EF04 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall KeDeleteThread(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  __int64 *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r8
  __int64 **v10; // rax
  KIRQL v11; // al
  __int64 *v12; // rcx
  KIRQL v13; // dl
  __int64 **v14; // rax

  KiWaitForContextSwap((__int64)a1, a2, a3, a4);
  KiDecrementProcessStackCount(a1[23]);
  v5 = a1 + 110;
  if ( a1[110] != 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F224F8);
    v8 = *v5;
    v9 = v7;
    if ( *v5 != 1 && a1[111] )
    {
      if ( *(__int64 **)(v8 + 8) != v5 )
        goto LABEL_15;
      v10 = (__int64 **)a1[111];
      if ( *v10 != v5 )
        goto LABEL_15;
      *v10 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v10;
    }
    KeReleaseSpinLock(&qword_140F224F8, v9);
  }
  v6 = a1 + 126;
  if ( a1[126] != 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&KiUpdateVpThreadPriorityLock);
    v12 = (__int64 *)*v6;
    v13 = v11;
    if ( *v6 == 1 || !a1[127] )
      goto LABEL_16;
    if ( (__int64 *)v12[1] == v6 )
    {
      v14 = (__int64 **)a1[127];
      if ( *v14 == v6 )
      {
        *v14 = v12;
        v12[1] = (__int64)v14;
LABEL_16:
        KeReleaseSpinLock(&KiUpdateVpThreadPriorityLock, v13);
        return;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
}
