/*
 * XREFs of MiCreatePagefile @ 0x1407EE570
 * Callers:
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407FE884 (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403C3CC0 (MiInitializePagefileBitmapsCache.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiAllocateModWriterEntry @ 0x14046930C (MiAllocateModWriterEntry.c)
 *     MiReservePageHash @ 0x140692440 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407EE4FC (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 */

_BYTE *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  unsigned int v11; // r15d
  ULONG v12; // r12d
  __int64 Pool; // rax
  _BYTE *v14; // r14
  ULONG v15; // esi
  int v16; // eax
  UNICODE_STRING *v17; // rcx
  __int64 v18; // rax
  unsigned int i; // edi
  _DWORD *ModWriterEntry; // rax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v25; // rdi
  _RTL_BITMAP *v26; // rdi
  __int64 v27; // rax
  unsigned int v29; // [rsp+20h] [rbp-148h]
  _BYTE v31[256]; // [rsp+30h] [rbp-138h] BYREF

  memset_0(v31, 0, sizeof(v31));
  v11 = 2;
  v12 = (a8 & 2) != 0 ? 5 : 2;
  Pool = MiAllocatePool(0x40uLL, 0x100uLL, 538996045);
  v14 = v31;
  if ( Pool )
    v14 = (_BYTE *)Pool;
  *(_DWORD *)v14 = a4;
  *((_DWORD *)v14 + 2) = a4;
  v15 = a4 - v12;
  *((_DWORD *)v14 + 3) = v15;
  *((_DWORD *)v14 + 5) = v15;
  *((_QWORD *)v14 + 3) = a2;
  *((_QWORD *)v14 + 24) = a3;
  *((_DWORD *)v14 + 1) = a5;
  *((_DWORD *)v14 + 23) = dword_140FC520C;
  if ( (a8 & 2) != 0 )
    v16 = -1;
  else
    v16 = 4 * dword_140FC520C;
  *((_DWORD *)v14 + 26) = v16;
  *((_QWORD *)v14 + 27) = a1;
  InitializeSListHead((PSLIST_HEADER)v14 + 3);
  v17 = (UNICODE_STRING *)(v14 + 64);
  *((_QWORD *)v14 + 26) = 0LL;
  if ( a6 )
    *v17 = *a6;
  else
    RtlInitUnicodeString(v17, 0LL);
  if ( a7 >= 0 )
  {
    if ( (a8 & 2) != 0 )
    {
      *((_WORD *)v14 + 86) |= 0x60u;
    }
    else if ( (a8 & 4) != 0 )
    {
      *((_WORD *)v14 + 86) |= 0x8A0u;
      *((_QWORD *)v14 + 28) = 0LL;
      *((_QWORD *)v14 + 29) = 0LL;
    }
    else
    {
      if ( (a7 & 0x40000000) != 0 )
        *((_WORD *)v14 + 86) |= 0x20u;
      if ( (a7 & 0x2000000) != 0 )
        *((_WORD *)v14 + 86) |= 0x80u;
    }
  }
  else
  {
    *((_WORD *)v14 + 86) |= 0xB0u;
  }
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v14 + 86) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v14 + 86) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v14 + 42) = (a7 & 0x3C000000u) >> 26;
  if ( v14 == v31 )
    goto LABEL_49;
  v29 = dword_140FC520C;
  if ( a7 >= 0 )
  {
    if ( (a8 & 2) != 0 )
    {
      v11 = 4;
    }
    else if ( (a8 & 4) != 0 )
    {
      v11 = KeNumberProcessors_0;
      if ( !(_DWORD)KeNumberProcessors_0 )
        goto LABEL_37;
    }
  }
  else
  {
    v11 = 1;
  }
  v18 = MiAllocatePool(0x40uLL, 8LL * v11, 538996045);
  *((_QWORD *)v14 + 4) = v18;
  if ( !v18 )
    goto LABEL_49;
  for ( i = 0; i < v11; ++i )
  {
    ModWriterEntry = MiAllocateModWriterEntry(a1, v29, 0);
    if ( !ModWriterEntry )
      goto LABEL_49;
    ModWriterEntry[10] |= 0x20u;
    *((_QWORD *)ModWriterEntry + 7) = a1;
    *((_QWORD *)ModWriterEntry + 8) = v14;
    *(_QWORD *)(*((_QWORD *)v14 + 4) + 8LL * i) = ModWriterEntry;
    ++*((_DWORD *)v14 + 10);
  }
LABEL_37:
  v21 = 0;
  v22 = 0;
  if ( (a8 & 4) == 0 )
  {
    LOBYTE(v21) = (a8 & 2) == 0;
    v22 = v21;
  }
  if ( v22 )
  {
    v23 = MiReservePageHash(*((_DWORD *)v14 + 1));
    if ( !v23 )
      goto LABEL_49;
    *((_QWORD *)v14 + 23) = v23;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((_DWORD *)v14 + 1));
  v25 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    *((_QWORD *)v14 + 10) = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v25 + 8), v12, *(_DWORD *)v14 - v12);
    v26 = (_RTL_BITMAP *)(v25 + 24);
    RtlSetAllBits(v26);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v26, v12, *(_DWORD *)v14 - v12);
    *((_DWORD *)v14 + 22) = v12;
    if ( (a8 & 2) != 0 )
      return v14;
    v27 = MiAllocatePool(0x40uLL, 0x7000uLL, 1665296717);
    *((_QWORD *)v14 + 20) = v27;
    if ( v27 )
    {
      MiInitializePagefileBitmapsCache((__int64)v14);
      return v14;
    }
  }
LABEL_49:
  MiDeletePagefile(v14);
  return 0LL;
}
