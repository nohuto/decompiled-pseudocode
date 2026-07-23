/*
 * XREFs of MiGetNumberOfCachedPtes @ 0x1403F607C
 * Callers:
 *     MmGetNumberOfFreeSystemPtes @ 0x1403F5EC4 (MmGetNumberOfFreeSystemPtes.c)
 *     MiPteBinsNeedTrimming @ 0x1403F601C (MiPteBinsNeedTrimming.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNumberOfCachedPtes(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  bool v8; // cc
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0LL;
  if ( (__int64 *)a1 == &qword_140E376A8 )
  {
    v3 = 3LL;
  }
  else
  {
    v3 = 2LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v4 = 1;
      if ( (_UNKNOWN *)a1 == &unk_140E35EC0 )
        v4 = 2;
      v3 = v4;
    }
  }
  v5 = (unsigned __int16)KeNumberNodes;
  do
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = *(_QWORD *)(v1 + 64);
        v8 = v7 <= 0;
        v9 = v7 + v2;
        v5 = (unsigned __int16)KeNumberNodes;
        if ( v8 )
          v9 = v2;
        v1 += 72LL;
        ++v6;
        v2 = v9;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
    }
    --v3;
  }
  while ( v3 );
  return v2;
}
