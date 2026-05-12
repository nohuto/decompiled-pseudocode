/*
 * XREFs of StorPortGetLogicalUnit @ 0x14001BCB0
 * Callers:
 *     RaidAdapterWmiDeferredRoutine @ 0x1400A5BA0 (RaidAdapterWmiDeferredRoutine.c)
 *     StorPortGetLogicalUnitVrfy @ 0x1401C1290 (StorPortGetLogicalUnitVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorPortGetLogicalUnit(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  __int64 *Unit; // rax
  int v9; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  HIBYTE(v9) = 0;
  if ( !v4 )
    return 0LL;
  v6 = *(_DWORD **)v4;
  if ( !*(_QWORD *)v4 || (*(_BYTE *)(v4 + 248) & 1) != 0 || *v6 != 1094997074 )
    return 0LL;
  LOBYTE(v9) = a2;
  BYTE1(v9) = a3;
  BYTE2(v9) = a4;
  Unit = RaidAdapterFindUnit((__int64)v6, v9);
  if ( Unit )
    return Unit[2];
  return v5;
}
