/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1405FAC6C (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403C8930 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 */

void __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r12
  unsigned int v4; // r9d
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v8; // rbx
  char v9; // al
  int v10; // r9d
  unsigned __int16 v11; // bp
  unsigned __int8 v12; // r15
  _WORD *v13; // rsi
  signed int v14; // eax

  v2 = (unsigned __int16 *)(a2 + 88);
  v4 = (*(_DWORD *)(a1 + 76) >> 13) & 0x3FFFF;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 76) >> 4;
  _BitScanReverse(&v6, v4);
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2) + 8LL * (v4 ^ (1 << v6)) + 8)
                 + 8 * (v5 & 0x1FF));
  if ( !v8 )
    v8 = RtlpHpLfhThreadDataInitializeSet(a1);
  v9 = RtlpHpAcquireLockExclusive((int *)(a2 + 80), *(unsigned __int8 *)(a1 + 65));
  v11 = *v2;
  v12 = v9;
  while ( v11 )
  {
    v13 = (_WORD *)(a1 + (v11 << 6));
    if ( v13 + 8 == v2 )
      break;
    v11 = v13[8];
    if ( (_WORD)v8 == v13[2] )
    {
      v14 = RtlpHpLfhHeatMapQuery(
              a1,
              a1 + ((unsigned __int64)(unsigned __int16)v13[3] << 6),
              (unsigned __int8 *)a2,
              v10);
      if ( v14 >= 2 )
        RtlpHpLfhOwnerCompact(a1, (__int64)v13, v14);
      else
        RtlpHpLfhPrivateSlotShutdown(a1, v13, v8, 1LL);
    }
  }
  RtlpHpReleaseLockExclusive(a2 + 80, *(unsigned __int8 *)(a1 + 65), v12);
}
