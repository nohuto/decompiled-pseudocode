/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x14026BE10
 * Callers:
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x14026C070 (MiAssignInitialPageAttribute.c)
 *     MiGetPageTablesForLargeMap @ 0x14026C224 (MiGetPageTablesForLargeMap.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemoryLarge(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5)
{
  unsigned __int64 v7; // r13
  char v8; // r10
  volatile LONG **BugCheckParameter4; // r11
  unsigned int v10; // r9d
  _QWORD *v11; // r12
  __int64 v12; // rbx
  int v13; // ebp
  volatile LONG **v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // edx
  int v18; // r14d
  int v19; // eax
  char v20; // r15
  unsigned __int64 PageTablesForLargeMap; // rax
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+18h]
  int v25; // [rsp+B8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v7 = 0LL;
  *a5 = 0;
  v23 = MiProtectionToCacheAttribute(a3);
  v10 = v23;
  v11 = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL);
  if ( a1 > qword_140E2DD20 )
    LODWORD(v12) = (_DWORD)BugCheckParameter4;
  else
    v12 = (*v11 >> 54) & 1LL;
  v13 = 3;
  v14 = BugCheckParameter4;
  v15 = (48 * a1 - 0x220000000000LL) & -(__int64)((_DWORD)v12 != 0);
  v16 = v15;
  while ( (unsigned __int64)v14 < a2 )
  {
    if ( (unsigned __int64)v14 + a1 <= qword_140E2DD20 && ((*v11 >> 54) & 1) != 0 )
    {
      if ( (v8 & 2) != 0 && ((*(_BYTE *)(v16 + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(v16 + 40), 0x35u)) )
        KeBugCheckEx(0x1Au, 0x1246uLL, (ULONG_PTR)v14 + a1, 0LL, (ULONG_PTR)BugCheckParameter4);
      if ( !v15 )
        return v7;
      if ( (HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) == 0xC0 )
      {
        MiAssignInitialPageAttribute(v16, v10);
        v15 = (48 * a1 - 0x220000000000LL) & -(__int64)((_DWORD)v12 != 0);
        BugCheckParameter4 = 0LL;
        v10 = v23;
        v8 = v25;
      }
      if ( (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6 != v10 )
        return v7;
      v13 = v10;
    }
    else if ( v15 )
    {
      return v7;
    }
    v14 = (volatile LONG **)((char *)v14 + 1);
    v11 += 6;
    v16 += 48LL;
  }
  if ( v14 == (volatile LONG **)a2 )
  {
    if ( (_DWORD)v12 )
    {
      v18 = 0;
    }
    else
    {
      v23 = (unsigned int)BugCheckParameter4;
      if ( (int)MiReferenceIoPages(1u, a1, a2, v10, (volatile LONG *)&v23, BugCheckParameter4) < 0 )
        return v7;
      v17 = v23;
      if ( ((v23 - 1) & v23) != 0 )
        goto LABEL_25;
      v13 = 0;
      while ( (v17 & 1) == 0 )
      {
        ++v13;
        v17 >>= 1;
      }
      v18 = 1;
    }
    v19 = MiPageToNode(a1);
    v20 = v24;
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, (v24 & 0x18) != 0 ? 6 : 8, 1LL, (unsigned int)(v19 + 1));
    v7 = PageTablesForLargeMap;
    if ( PageTablesForLargeMap )
    {
      MiMapWithLargePages((__int64)&unk_140E38240, PageTablesForLargeMap, a1, a2, 1u, v20, v13);
      if ( v18 )
        *a5 |= 1u;
      return v7;
    }
    if ( (_DWORD)v12 )
      return v7;
LABEL_25:
    MiDereferenceIoPages(1LL, a1, a2);
  }
  return v7;
}
