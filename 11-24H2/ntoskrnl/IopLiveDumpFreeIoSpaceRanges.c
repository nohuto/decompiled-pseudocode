/*
 * XREFs of IopLiveDumpFreeIoSpaceRanges @ 0x140597DA4
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 * Callees:
 *     IopLiveDumpUnpackMemoryRun @ 0x14059B4AC (IopLiveDumpUnpackMemoryRun.c)
 *     MmFreeMemoryRanges @ 0x1407EB960 (MmFreeMemoryRanges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeIoSpaceRanges(PVOID *a1, unsigned int a2)
{
  _QWORD *v4; // r10
  __int64 i; // r11
  __int64 v6; // r11
  int v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+24h] [rbp-3Ch]
  int v9; // [rsp+34h] [rbp-2Ch]
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 Pool2; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = 0LL;
  v15 = 0;
  v9 = 0;
  v11 = 0LL;
  v12 = a2;
  v8 = 0LL;
  LODWORD(v8) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  v7 = 1;
  v10 = 0x40000000LL;
  Pool2 = ExAllocatePool2(0x40uLL, 8LL * a2, 0x706D644Cu);
  v4 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(v6 + 1) )
    {
      if ( (int)IopLiveDumpUnpackMemoryRun(*((_QWORD *)*a1 + i), &v14, &v15) < 0 )
        goto LABEL_7;
      v4[v6] = (v14 << 12) | ((v15 >> 18) - 1);
    }
    MmFreeMemoryRanges(&v7);
    v4 = (_QWORD *)Pool2;
  }
LABEL_7:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x706D644Cu);
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0x706D644Cu);
    *a1 = 0LL;
  }
}
