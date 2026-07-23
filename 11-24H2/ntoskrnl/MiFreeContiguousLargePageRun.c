/*
 * XREFs of MiFreeContiguousLargePageRun @ 0x1406833D4
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140683324 (MiFreeAwePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MiClearAweLargePageMetadata @ 0x140682A90 (MiClearAweLargePageMetadata.c)
 *     MiFreePhysicalRange @ 0x140683670 (MiFreePhysicalRange.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068DDA4 (MiCoalesceActivePagesIntoFree.c)
 */

unsigned __int64 __fastcall MiFreeContiguousLargePageRun(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 *v8; // r14
  __int64 i; // rdi
  unsigned __int64 v10; // r12
  int PfnPageSizeIndex; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 *v16; // r13
  unsigned __int64 v17; // rbp
  __int64 v18; // r15
  unsigned __int8 v19; // bl
  __int64 v20; // rcx
  unsigned int active; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  unsigned __int64 *j; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30[8]; // [rsp+58h] [rbp-40h] BYREF
  int v31; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v32; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v32 = a3;
  v30[0] = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v4 = a3;
  v5 = a2;
  v27 = 0LL;
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
    v7 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    v33 = v7;
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
        v15 = PfnPageSizeIndex;
        v31 = PfnPageSizeIndex;
        v28 = MiPageSizes[PfnPageSizeIndex];
        if ( ((v8[5] >> 60) & 7) == 1 )
        {
          v16 = &v8[6 * v10];
          if ( v8 < v16 )
          {
            v17 = 48 * v5 - 0x220000000000LL;
            v18 = 48 * MiPageSizes[PfnPageSizeIndex];
            do
            {
              v19 = MiLockPageInline(v17, v12, v13, v14);
              MiClearAweLargePageMetadata(v17);
              MiUnlockPage(v17, v19);
              v17 += v18;
            }
            while ( v17 < (unsigned __int64)v16 );
            v3 = v27;
            v4 = v32;
            v15 = v31;
          }
          v7 = v33;
        }
        if ( (unsigned int)i <= 1 )
          MiUpdateLargePageBitMap(v7, v5, v10, 0);
        v20 = 0LL;
        if ( v15 != (_DWORD)i )
        {
          while ( 1 )
          {
            active = MiCoalesceActivePagesIntoFree(v20, v5, (unsigned int)i);
            v20 = active;
            if ( active || (_DWORD)i + 1 == v15 )
              break;
            LODWORD(i) = i + 1;
          }
        }
        v22 = MiPageSizes[(unsigned int)i];
        if ( (_DWORD)v20 )
        {
          MiFreeLargePageCharges(v7, MiPageSizes[(unsigned int)i], 0);
          if ( v7 != *((_QWORD *)qword_140E300C8
                     + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
            MiReturnCrossPartitionCharges(v7, 2u, 1);
        }
        else
        {
          v23 = 0LL;
          for ( j = &v8[6 * v22]; v8 < j; v8 += 6 * v28 )
          {
            v25 = (v23 >> 3) ^ (*v8 ^ (v23 >> 3)) & 0xFFFFF00000000001uLL;
            v23 = (unsigned __int64)v8;
            *v8 = v25;
          }
          MiFreeLargePages(v7, v23, v30, &v29, 0);
        }
        v3 += v22;
        v5 += v22;
        v27 = v3;
        v4 -= v22;
        v32 = v4;
      }
      while ( v4 );
    }
  }
  return v3;
}
