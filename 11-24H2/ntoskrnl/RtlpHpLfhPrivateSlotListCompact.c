/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x14060428C
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1406045AC (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvTlsGetValue @ 0x14035F690 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 */

void __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // r12
  __int64 Value; // rbx
  char v6; // al
  int v7; // r9d
  unsigned __int16 v8; // r14
  unsigned __int8 v9; // r13
  _WORD *v10; // rsi
  signed int v11; // eax

  v3 = (unsigned __int16 *)(a2 + 88);
  Value = RtlpHpEnvTlsGetValue(*(_DWORD *)(a1 + 76));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1);
  v6 = RtlpHpAcquireLockExclusive((int *)(a2 + 80), *(unsigned __int8 *)(a1 + 65));
  v8 = *v3;
  v9 = v6;
  while ( v8 )
  {
    v10 = (_WORD *)(a1 + (v8 << 6));
    if ( v10 + 8 == v3 )
      break;
    v8 = v10[8];
    if ( (_WORD)Value == v10[2] )
    {
      v11 = RtlpHpLfhHeatMapQuery(a1, a1 + ((unsigned __int64)(unsigned __int16)v10[3] << 6), (unsigned __int8 *)a2, v7);
      if ( v11 >= 2 )
        RtlpHpLfhOwnerCompact((unsigned __int8 *)a1, (__int64)v10, v11);
      else
        RtlpHpLfhPrivateSlotShutdown(a1, v10, Value, 1LL);
    }
  }
  RtlpHpReleaseLockExclusive(a2 + 80, *(unsigned __int8 *)(a1 + 65), v9);
}
