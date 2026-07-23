/*
 * XREFs of MiReduceWs @ 0x1402430A0
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiSelfTrim @ 0x140243008 (MiSelfTrim.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140482350 (MiSimpleAging.c)
 */

__int64 __fastcall MiReduceWs(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  char v4; // si
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx

  v3 = a3;
  v4 = a2;
  LODWORD(v6) = 8;
  while ( (_DWORD)v6 )
  {
    a2 = *(_QWORD *)(a1 + 128);
    v6 = (unsigned int)(v6 - 1);
    if ( a2 <= v3 )
      break;
    a2 -= v3;
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(a1 + 8 * v6 + 40);
      if ( v7 > a2 )
        v7 = a2;
      a2 = v7;
    }
    if ( a2 )
    {
      LOBYTE(a3) = v4;
      MiTrimWorkingSet(a1, a2, a3, v6, 16);
    }
  }
  LOBYTE(a2) = v4;
  return MiSimpleAging(a1, a2);
}
