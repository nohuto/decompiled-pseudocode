/*
 * XREFs of StorExtBuildScatterGatherList @ 0x140073100
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorExtBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  _BYTE *v9; // rcx
  __int64 RaidAdapter; // rax
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r11
  unsigned int v14; // ebx

  v9 = *(_BYTE **)(a1 - 16);
  if ( (v9[248] & 1) != 0 )
    return 1LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v9);
  v14 = 0;
  if ( !RaidAdapter )
    return 1LL;
  LOBYTE(v14) = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(*(_QWORD *)(RaidAdapter + 880) + 8LL) + 112LL))(
                  *(_QWORD *)(RaidAdapter + 880),
                  *(_QWORD *)(RaidAdapter + 8),
                  v13,
                  v11,
                  v12,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9) == -1073741789;
  return v14;
}
