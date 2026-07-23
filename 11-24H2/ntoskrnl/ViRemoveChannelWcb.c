/*
 * XREFs of ViRemoveChannelWcb @ 0x14060F40C
 * Callers:
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r8
  __int64 i; // rbx
  __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 **v16; // rax

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 176);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v10 = a1 + 160;
  v11 = v9;
  for ( i = *(_QWORD *)(a1 + 160); ; i = *v14 )
  {
    v13 = i - 72;
    v14 = (__int64 *)(v13 + 72);
    if ( v10 == v13 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v13 + 96) == a2 || *(_QWORD *)(v13 + 88) == a2)
      || a3 && *(_QWORD *)(v13 + 40) == a3
      || *(_DWORD *)(v13 + 52) <= 1u )
    {
      v15 = (__int64 *)*v14;
      if ( *(__int64 **)(*v14 + 8) != v14 || (v16 = *(__int64 ***)(v13 + 80), *v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      v6 = 1;
      v15[1] = (__int64)v16;
      break;
    }
  }
  KeReleaseSpinLock(v8, v11);
  if ( v6 != 1 )
    return 0LL;
  return v13;
}
