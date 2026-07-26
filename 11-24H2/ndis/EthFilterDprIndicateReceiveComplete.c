/*
 * XREFs of EthFilterDprIndicateReceiveComplete @ 0x140079770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(_QWORD *a1)
{
  unsigned int Number; // r12d
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  KIRQL v13; // [rsp+50h] [rbp+8h]

  Number = KeGetPcr()->Prcb.Number;
  if ( a1 )
  {
    v3 = a1[36];
    v13 = KfRaiseIrql(2u);
    v4 = (_QWORD *)(*(_QWORD *)(v3 + 32) + (KeGetPcr()->Prcb.Number << 12));
    ++*v4;
    _InterlockedOr(v12, 0);
    if ( *(_QWORD *)(v3 + 16) && *v4 <= 1uLL && *(struct _KTHREAD **)(v3 + 24) != KeGetCurrentThread() )
    {
      *v4 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 16));
      *v4 = 1LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 16));
    }
    v5 = *a1;
    v6 = a1;
    if ( !*a1 )
      goto LABEL_11;
    do
    {
      v7 = Number << 12;
      do
      {
        v8 = *(_QWORD *)(v5 + 720);
        v9 = *(_QWORD *)(v5 + 424);
        if ( *(_BYTE *)(v8 + v7) )
        {
          *(_BYTE *)(v8 + v7) = 0;
          (*(void (__fastcall **)(_QWORD))(v5 + 136))(*(_QWORD *)(v5 + 32));
        }
        v5 = v9;
      }
      while ( v9 );
LABEL_11:
      v10 = 0LL;
      if ( v6 != a1 + 1 )
        v10 = v6;
      v6 = v10;
      if ( v10 == a1 + 2 )
        v6 = a1 + 1;
      if ( v6 == a1 )
        v6 = a1 + 2;
      if ( !v6 )
        break;
      v5 = *v6;
    }
    while ( *v6 );
    v11 = (_QWORD *)(*(_QWORD *)(a1[36] + 32LL) + (KeGetPcr()->Prcb.Number << 12));
    --*v11;
    if ( v13 != 2 )
      KeLowerIrql(v13);
  }
}
