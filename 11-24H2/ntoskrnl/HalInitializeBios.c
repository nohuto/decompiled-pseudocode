/*
 * XREFs of HalInitializeBios @ 0x140539620
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     x86BiosInitializeBiosEx @ 0x140543E18 (x86BiosInitializeBiosEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalInitializeBios(int a1, _QWORD *a2)
{
  char *v3; // rcx
  char *v5; // rax
  int *v6; // rax
  __int64 Pool2; // rax
  struct _MDL *v8; // rdi
  __int64 *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD **v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  const void *v28; // r15
  int *v29; // rax

  v3 = (char *)a2[27];
  if ( !v3 || (v5 = strupr(v3), !strstr(v5, "NOVGA")) )
  {
    if ( a1 == -1 )
    {
      if ( (*(_BYTE *)(a2[30] + 2656LL) & 4) == 0 )
      {
        HalpIoMemoryBase = 0LL;
        HalpFrameBufferBase = 0LL;
        qword_140E00828 = (__int64)HalpBiosDisplayReset;
        HalpVideoBiosPresent = 1;
        x86BiosInitializeBiosEx(v3, 0LL, 0LL, 0x20000LL);
        v6 = x86BiosTranslateAddress(0, 0);
        memmove(v6, 0LL, 0x800uLL);
      }
      return;
    }
    Pool2 = ExAllocatePool2(0x40uLL, 0x830uLL, 0x466C6148u);
    v8 = (struct _MDL *)Pool2;
    if ( !Pool2 )
      return;
    *(_QWORD *)Pool2 = 0LL;
    v9 = (__int64 *)(Pool2 + 48);
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 44) = 0;
    v10 = 0;
    *(_DWORD *)(Pool2 + 8) = 134350896;
    v11 = 0LL;
    *(_DWORD *)(Pool2 + 40) = 0x100000;
    do
    {
      v12 = v11;
      if ( v10 - 160 <= 0x1F )
        v12 = 240LL;
      ++v10;
      ++v11;
      *v9++ = v12;
    }
    while ( v10 < 0x100 );
    v13 = a2[45];
    if ( (v13 & 1) != 0 )
    {
      if ( v13 == 1 )
        goto LABEL_31;
      i = v13 ^ ((unsigned __int64)(a2 + 44) | 1);
    }
    else
    {
      i = a2[45];
    }
    while ( i )
    {
      v15 = *(_QWORD *)(i + 32);
      if ( v15 < 0x100 )
      {
        v16 = *(int *)(i + 24);
        if ( (unsigned int)v16 > 0x23 || (v17 = 0xBC0400040LL, !_bittest64(&v17, v16)) )
        {
          v18 = *(unsigned int *)(i + 32);
          v19 = v15 - 1 + *(_QWORD *)(i + 40);
          v20 = v18;
          if ( v19 > 0xFF )
            v19 = 255LL;
          if ( v18 <= v19 )
          {
            do
            {
              LODWORD(v18) = v18 + 1;
              *((_QWORD *)&v8[1].Next + v20) = 240LL;
              v20 = (unsigned int)v18;
            }
            while ( (unsigned int)v18 <= v19 );
          }
        }
      }
      v21 = *(_QWORD ***)(i + 8);
      v22 = i;
      if ( v21 )
      {
        v23 = *v21;
        for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
          i = (unsigned __int64)v23;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v22 )
            break;
          v22 = i;
        }
      }
    }
LABEL_31:
    HalpIoMemoryBase = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( HalpIoMemoryBase )
    {
      v25 = MmMapIoSpaceEx(655360LL, 0x20000LL, 516LL);
      if ( v25 )
      {
        v26 = HalpMmAllocCtxAlloc(v24, 0x2000LL);
        if ( v26 )
        {
          HalpFrameBufferBase = v25 - 655360;
          x86BiosInitializeBiosEx(v27, HalpIoMemoryBase, v25 - 655360, v26);
          v28 = (const void *)MmMapIoSpaceEx(0LL, 2048LL, 4LL);
          if ( v28 )
          {
            v29 = x86BiosTranslateAddress(0, 0);
            memmove(v29, v28, 0x800uLL);
            MiUnmapContiguousMemory((unsigned __int64)v28, 0x800uLL, 1);
            HalpVideoBiosPresent = 1;
            qword_140E00828 = (__int64)HalpBiosDisplayReset;
LABEL_39:
            ExFreePoolWithTag(v8, 0);
            return;
          }
        }
        MiUnmapContiguousMemory(v25, 0x20000uLL, 1);
        HalpFrameBufferBase = 0LL;
      }
    }
    if ( HalpIoMemoryBase )
    {
      MmUnmapLockedPages(HalpIoMemoryBase, v8);
      HalpIoMemoryBase = 0LL;
    }
    goto LABEL_39;
  }
}
