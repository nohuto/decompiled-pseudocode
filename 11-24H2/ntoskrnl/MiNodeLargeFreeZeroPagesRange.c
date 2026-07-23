/*
 * XREFs of MiNodeLargeFreeZeroPagesRange @ 0x14047E154
 * Callers:
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPagesRange(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int64 *v4; // r10
  __int64 *v5; // r11
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx

  v3 = 0LL;
  if ( a3 <= 2 )
  {
    v4 = &MiPageSizes[a3];
    v5 = (__int64 *)(a1 + 1280LL * a3 + 8);
    v6 = 3 - a3;
    do
    {
      v7 = 0LL;
      v8 = v5;
      v9 = 2LL;
      do
      {
        v10 = *v8++;
        v7 += v10;
        --v9;
      }
      while ( v9 );
      v11 = v7 * *v4++;
      v5 += 160;
      v3 += v11;
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
