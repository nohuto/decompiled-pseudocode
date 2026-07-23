/*
 * XREFs of EtwpAllocatePhysicalPages @ 0x1407A703C
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x1409CFA3C (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

size_t __fastcall EtwpAllocatePhysicalPages(char *Base, __int64 a2)
{
  size_t v4; // rsi
  unsigned __int64 v5; // rdi
  SIZE_T v6; // r13
  PMDL PagesForMdl; // rax
  _DWORD *v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // [rsp+30h] [rbp-49h]
  unsigned __int64 v12; // [rsp+38h] [rbp-41h]
  ULONG v13[2]; // [rsp+40h] [rbp-39h]
  PHYSICAL_ADDRESS SkipBytes; // [rsp+48h] [rbp-31h]
  int v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]

  v22 = 0LL;
  SkipBytes.QuadPart = 0x200000LL;
  v16 = 0x200000LL;
  v21 = 1;
  v13[0] = 97;
  v4 = 0LL;
  v17 = 97;
  v18 = 0x10000LL;
  v5 = 0LL;
  v20 = 0x10000LL;
  v15 = 33;
  v19 = 33;
  while ( 1 )
  {
    v12 = v5;
    v11 = a2 << 12;
    v6 = a2 << 12;
    if ( (unsigned __int64)(a2 << 12) > 0xFFE00000 )
      v6 = 4292870144LL;
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    *(&SkipBytes + 2 * v5),
                    v6,
                    MmCached,
                    v13[4 * v5]);
    ++v5;
    v8 = PagesForMdl;
    if ( PagesForMdl )
    {
      v9 = (unsigned __int64)PagesForMdl->ByteCount >> 12;
      memmove(&Base[8 * v4], &PagesForMdl[1], 8 * v9);
      v4 += v9;
      a2 -= v9;
      ExFreePoolWithTag(v8, 0);
      if ( v11 > 0xFFE00000 && v8[10] == v6 )
        v5 = v12;
    }
    if ( !a2 )
      break;
    if ( v5 >= 5 )
      return v4;
  }
  qsort(Base, v4, 8uLL, EtwpComparePfn);
  return v4;
}
