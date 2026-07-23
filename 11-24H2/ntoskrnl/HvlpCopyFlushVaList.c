/*
 * XREFs of HvlpCopyFlushVaList @ 0x14039E000
 * Callers:
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1403A46F4 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140585C30 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140585D10 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140585F34 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpCopyFlushVaList(unsigned int a1, __int64 *a2, char a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // r8

  if ( a3 )
  {
    v7 = 0LL;
    if ( a1 )
    {
      v8 = a1;
      do
      {
        v9 = *a2;
        v10 = ((unsigned __int64)*a2 >> 10) & 3;
        if ( (*a2 & 0x3FF) != 0 && v10 != 0 )
        {
          v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v12 = 4096LL << (9 * (unsigned __int8)v10);
          v13 = (*a2 & 0x3FF) + 1;
          do
          {
            *(_QWORD *)(a4 + 8 * v7) = v11;
            v11 += v12;
            v7 = (unsigned int)(v7 + 1);
            --v13;
          }
          while ( v13 );
        }
        else
        {
          *(_QWORD *)(a4 + 8 * v7) = v9 & 0xFFFFFFFFFFFFF3FFuLL;
          v7 = (unsigned int)(v7 + 1);
        }
        ++a2;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( a1 )
  {
    v4 = (char *)a2 - a4;
    v5 = a1;
    do
    {
      v6 = *(_QWORD *)&v4[a4];
      a4 += 8LL;
      *(_QWORD *)(a4 - 8) = v6 & 0x800 | (v6 + (v6 & 0xC00));
      --v5;
    }
    while ( v5 );
  }
}
