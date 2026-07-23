/*
 * XREFs of MiPfnRangeIsZero @ 0x14066F480
 * Callers:
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14066F968 (MiPreparePfnDatabasePageForFree.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  __int64 *v16; // r12
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned __int64 ValidPte; // rax
  _QWORD *v22; // rcx
  unsigned int i; // edx
  unsigned __int64 LeafVa; // rax
  int v25; // [rsp+30h] [rbp-B8h]
  _QWORD v26[12]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v26, 0, sizeof(v26));
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( a1 < a2 )
  {
    v4 = v26;
    v5 = 4LL;
    do
    {
      v4[2] = 0LL;
      v4[1] = v4;
      *v4 = v4;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    v6 = 0LL;
    while ( 1 )
    {
      v7 = MI_IS_PHYSICAL_ADDRESS(a1);
      v8 = v7;
      v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = 1LL;
      LODWORD(v11) = 3;
      if ( v7 > 0 )
      {
        v12 = (unsigned int)v7;
        do
        {
          LODWORD(v11) = v11 - 1;
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v12;
        }
        while ( v12 );
        if ( (_DWORD)v11 != 3 )
        {
          v11 = (unsigned int)(v11 - 1);
          v10 = MiPageSizes[v11];
        }
      }
      if ( (((v10 << 12) - 1) & a1) == 0 && a2 - a1 >= v10 << 12 )
        break;
      if ( !(unsigned int)MiDemoteValidLargePageOneLevel(a1) )
      {
        LeafVa = MiGetLeafVa(v9 + 8);
LABEL_37:
        a1 = LeafVa;
      }
      if ( a1 >= a2 )
      {
        MiFreeLargeZeroPages((unsigned __int64)&MiSystemPartition, (__int64)v26, 0);
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v6);
        _InterlockedAdd64(&qword_140E37738, -(__int64)v6);
        return;
      }
    }
    if ( (*(_QWORD *)v9 & 0x20) != 0 && ((unsigned __int8)(1 << v7) & (unsigned __int8)byte_140E2DC09) != 0 )
    {
      v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v7 > 0 )
      {
        v14 = (unsigned int)v7;
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v14;
        }
        while ( v14 );
      }
      MiClearSystemAccessBits(v9);
    }
    v15 = v8;
    v25 = v8;
    v16 = (__int64 *)&qword_140E37480[v8];
LABEL_21:
    if ( (int)v8 < 3 )
    {
      v17 = *(_QWORD *)v9;
      if ( (_DWORD)v8 != v15 && (v17 & 0x20) != 0 && ((unsigned __int8)(1 << v8) & (unsigned __int8)byte_140E2DC09) != 0 )
        MiClearSystemAccessBits(v9);
      MiPreparePfnDatabasePageForFree(v9, (unsigned int)v8, (unsigned int)v11);
      v6 += v10;
      v18 = (_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      v19 = &v26[3 * (unsigned int)v11];
      v20 = (_QWORD *)v19[1];
      if ( (_QWORD *)*v20 != v19 )
        __fastfail(3u);
      *v18 = v19;
      v18[1] = v20;
      *v20 = v18;
      v19[1] = v18;
      ValidPte = MiMakeValidPte(v9, *v16, (_DWORD)v8 != 0 ? -1476395004 : 536870913);
      MiTransformValidPteInPlace(v9, v9, ValidPte, (_DWORD)v8 != 0 ? 116 : 68, v8);
      v22 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFF000uLL);
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x200 )
        {
          v10 = 1LL;
          LODWORD(v11) = 3;
          v15 = v25;
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LODWORD(v8) = v8 + 1;
          ++v16;
          goto LABEL_21;
        }
        if ( *v22 && ((*v22 >> 12) & 0xFFFFFFFFFFLL) != *v16 )
          break;
        ++v22;
      }
      v9 += 8LL;
    }
    LeafVa = MiGetLeafVa(v9);
    goto LABEL_37;
  }
}
