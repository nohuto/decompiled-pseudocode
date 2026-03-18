/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x14042A8E0
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1403B3544 (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 *v6; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // r8

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = MiPageSizes;
  v8 = 3LL;
  do
  {
    v9 = 0LL;
    if ( (_BYTE)v5 == 2 )
    {
      if ( (_DWORD)v4 == 2 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v13 = (_QWORD *)(a1 + 16);
      }
      else
      {
        v13 = (_QWORD *)(a1 + 8 * (v4 + 1));
      }
      v9 += *v13;
    }
    else
    {
      v10 = (__int64 *)(a1 + 8 * (v5 + 116 + 2 * v4));
      v11 = 2LL;
      do
      {
        v12 = *v10;
        v10 += 4;
        v9 += v12;
        --v11;
      }
      while ( v11 );
    }
    v14 = v9 * *v6++;
    a1 += 1280LL;
    v3 += v14;
    --v8;
  }
  while ( v8 );
  return v3;
}
