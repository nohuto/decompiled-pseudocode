/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x140606FAC (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 */

void __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r12
  unsigned int v4; // r9d
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v8; // r8
  __int64 v9; // rbx
  char v10; // al
  int v11; // r9d
  unsigned __int16 v12; // bp
  unsigned __int8 v13; // r15
  _WORD *v14; // rsi
  int v15; // eax

  v2 = (unsigned __int16 *)(a2 + 88);
  v4 = (*(_DWORD *)(a1 + 76) >> 13) & 0x3FFFF;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 76) >> 4;
  _BitScanReverse(&v6, v4);
  v8 = v4 ^ (1 << v6);
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2) + 8 * v8 + 8) + 8 * (v5 & 0x1FF));
  if ( !v9 )
    v9 = RtlpHpLfhThreadDataInitializeSet(a1);
  v10 = RtlpHpAcquireLockExclusive((int *)(a2 + 80), *(unsigned __int8 *)(a1 + 65), v8);
  v12 = *v2;
  v13 = v10;
  while ( v12 )
  {
    v14 = (_WORD *)(a1 + (v12 << 6));
    if ( v14 + 8 == v2 )
      break;
    v12 = v14[8];
    if ( (_WORD)v9 == v14[2] )
    {
      v15 = RtlpHpLfhHeatMapQuery(
              a1,
              a1 + ((unsigned __int64)(unsigned __int16)v14[3] << 6),
              (unsigned __int8 *)a2,
              v11);
      if ( v15 >= 2 )
        RtlpHpLfhOwnerCompact(a1, (__int64)v14, (unsigned int)v15);
      else
        RtlpHpLfhPrivateSlotShutdown(a1, v14, v9, 1LL);
    }
  }
  RtlpHpReleaseLockExclusive(a2 + 80, *(unsigned __int8 *)(a1 + 65), v13);
}
