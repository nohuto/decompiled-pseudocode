/*
 * XREFs of MiFreeContiguousLargePageRun @ 0x1406769C4
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140676914 (MiFreeAwePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiFreeLargePageCharges @ 0x14038BC4C (MiFreeLargePageCharges.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiClearAweLargePageMetadata @ 0x140676080 (MiClearAweLargePageMetadata.c)
 *     MiFreePhysicalRange @ 0x140676C60 (MiFreePhysicalRange.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1406813E4 (MiCoalesceActivePagesIntoFree.c)
 */

unsigned __int64 __fastcall MiFreeContiguousLargePageRun(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 *v8; // r14
  __int64 i; // rdi
  unsigned __int64 v10; // r12
  int PfnPageSizeIndex; // eax
  int v12; // ebx
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // rbp
  __int64 v15; // r15
  unsigned __int8 v16; // bl
  __int64 v17; // rcx
  unsigned int active; // eax
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 *j; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27[8]; // [rsp+58h] [rbp-40h] BYREF
  int v28; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h]
  __int64 v30; // [rsp+B8h] [rbp+20h]

  v29 = a3;
  v27[0] = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v4 = a3;
  v5 = a2;
  v24 = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( a3 )
    {
      do
      {
        MiFreePhysicalRange(a1, v5);
        v5 += v6;
        v3 += v6;
      }
      while ( v3 < v4 );
    }
  }
  else
  {
    v7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    v30 = v7;
    if ( a3 )
    {
      do
      {
        v8 = (unsigned __int64 *)(48 * v5 - 0x220000000000LL);
        for ( i = (KeFeatureBits & 0x2000000000LL) == 0; ; i = (unsigned int)(i + 1) )
        {
          v10 = MiPageSizes[i];
          if ( ((v10 - 1) & v5) == 0 && v4 >= v10 )
            break;
        }
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * v5 - 0x220000000000LL);
        v12 = PfnPageSizeIndex;
        v28 = PfnPageSizeIndex;
        v25 = MiPageSizes[PfnPageSizeIndex];
        if ( ((v8[5] >> 60) & 7) == 1 )
        {
          v13 = &v8[6 * v10];
          if ( v8 < v13 )
          {
            v14 = 48 * v5 - 0x220000000000LL;
            v15 = 48 * MiPageSizes[PfnPageSizeIndex];
            do
            {
              v16 = MiLockPageInline(v14);
              MiClearAweLargePageMetadata(v14);
              MiUnlockPage(v14, v16);
              v14 += v15;
            }
            while ( v14 < (unsigned __int64)v13 );
            v3 = v24;
            v4 = v29;
            v12 = v28;
          }
          v7 = v30;
        }
        if ( (unsigned int)i <= 1 )
          MiUpdateLargePageBitMap(v7, v5, v10, 0);
        v17 = 0LL;
        if ( v12 != (_DWORD)i )
        {
          while ( 1 )
          {
            active = MiCoalesceActivePagesIntoFree(v17, v5, (unsigned int)i);
            v17 = active;
            if ( active || (_DWORD)i + 1 == v12 )
              break;
            LODWORD(i) = i + 1;
          }
        }
        v19 = MiPageSizes[(unsigned int)i];
        if ( (_DWORD)v17 )
        {
          MiFreeLargePageCharges(v7, MiPageSizes[(unsigned int)i], 0);
          if ( v7 != *((_QWORD *)qword_140E2FD48
                     + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
            MiReturnCrossPartitionCharges(v7, 2u, 1);
        }
        else
        {
          v20 = 0LL;
          for ( j = &v8[6 * v19]; v8 < j; v8 += 6 * v25 )
          {
            v22 = (v20 >> 3) ^ (*v8 ^ (v20 >> 3)) & 0xFFFFF00000000001uLL;
            v20 = (unsigned __int64)v8;
            *v8 = v22;
          }
          MiFreeLargePages(v7, v20, v27, &v26, 0);
        }
        v3 += v19;
        v5 += v19;
        v24 = v3;
        v4 -= v19;
        v29 = v4;
      }
      while ( v4 );
    }
  }
  return v3;
}
