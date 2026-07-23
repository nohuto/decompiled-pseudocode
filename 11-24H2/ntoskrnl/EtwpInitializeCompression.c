/*
 * XREFs of EtwpInitializeCompression @ 0x1404B1064
 * Callers:
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 * Callees:
 *     EtwpFreePlaceholderList @ 0x14045A93C (EtwpFreePlaceholderList.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x1404B1200 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     RtlCompressWorkSpaceSizeLZNT1 @ 0x140B6AEA0 (RtlCompressWorkSpaceSizeLZNT1.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 Pool2; // rax
  unsigned int v6; // ebp
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1436) = 5;
  *(_DWORD *)(a1 + 1440) = 3;
  *(_QWORD *)(a1 + 1384) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 1368) = 0LL;
  *(_QWORD *)(a1 + 1392) = a1;
  v9 = 0;
  v10 = 0;
  if ( RtlCompressWorkSpaceSizeXpressLz == RtlCompressWorkSpaceSizeLZNT1 )
    v2 = RtlCompressWorkSpaceSizeLZNT1(0LL, &v9, &v10);
  else
    v2 = RtlCompressWorkSpaceSizeXpressLz(0LL, &v9, &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v9 )
    {
      Pool2 = ExAllocatePool2(0x40uLL, v9, 0x5A777445u);
      *(_QWORD *)(a1 + 1424) = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    {
      *(_QWORD *)(a1 + 1408) = 0LL;
      *(_QWORD *)(a1 + 1480) = EtwpCompressionDpc;
      *(_DWORD *)(a1 + 1456) = 275;
      v6 = 0;
      *(_QWORD *)(a1 + 1488) = a1;
      *(_QWORD *)(a1 + 1512) = 0LL;
      *(_QWORD *)(a1 + 1472) = 0LL;
      *(_QWORD *)(a1 + 1448) = 0LL;
      while ( v6 < *(_DWORD *)(a1 + 1436) )
      {
        v7 = 256LL;
        if ( *(_DWORD *)(a1 + 300) != 1 )
          v7 = 64LL;
        v8 = ExAllocatePool2(v7, 0x48uLL, 0x42777445u);
        if ( !v8 )
        {
          v3 = -1073741801;
          ExFreePoolWithTag(*(PVOID *)(a1 + 1424), 0);
          EtwpFreePlaceholderList(a1);
          return v3;
        }
        *(_DWORD *)(v8 + 44) = 6;
        ++v6;
        *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 1448);
        *(_QWORD *)(a1 + 1448) = v8 + 32;
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1432), 1);
    }
  }
  return v3;
}
