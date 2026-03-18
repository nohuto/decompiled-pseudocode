/*
 * XREFs of MiInitializeSystemCache @ 0x1407DD6C0
 * Callers:
 *     MiLateInitializeSystemCache @ 0x1404BE284 (MiLateInitializeSystemCache.c)
 * Callees:
 *     MiQuerySystemBase @ 0x140460F60 (MiQuerySystemBase.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  __int16 v9; // [rsp+30h] [rbp+8h]
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (_QWORD *)(a1 + 2160);
  v10 = 0LL;
  v4 = 4LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 4;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)(a1 + 2296) = a1 + 2288;
  *(_QWORD *)(a1 + 2288) = a1 + 2288;
  *(_QWORD *)(a1 + 2328) = a1 + 2320;
  *(_QWORD *)(a1 + 2320) = a1 + 2320;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    HIBYTE(v9) = BYTE1(dword_140E37A78);
    LOBYTE(v9) = dword_140E37A78 & 0xF0 | 1;
    LOWORD(dword_140E37A78) = v9;
    v5 = MiQuerySystemBase(3, &v10);
    v6 = v10;
    if ( !(unsigned int)MiInitializeDynamicRegion(7LL, v5, v10) )
      return 0LL;
    v7 = v6 >> 12;
  }
  else
  {
    v7 = 0LL;
  }
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList(a1, a1 + 18816, 1, v7) >= 0;
  return v1;
}
