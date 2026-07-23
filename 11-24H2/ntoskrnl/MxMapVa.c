/*
 * XREFs of MxMapVa @ 0x140C552D4
 * Callers:
 *     MxMapPfnRange @ 0x140C550D8 (MxMapPfnRange.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiGetLargePteAddress @ 0x14026AE10 (MiGetLargePteAddress.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 *     MxGetNextPage @ 0x140C54C20 (MxGetNextPage.c)
 */

unsigned __int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 i; // rsi
  unsigned __int64 *v4; // r14
  unsigned __int64 result; // rax
  unsigned __int64 LargePteAddress; // rax
  _QWORD *v7; // rax
  __int64 j; // rdx
  __int64 NextPage; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  ULONG_PTR v13; // rbx
  unsigned __int64 v14; // rax
  __m128i *LeafVa; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v25; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v25 = 0LL;
  MiFillPteHierarchy(v2, BugCheckParameter2);
  for ( i = 3LL; ; --i )
  {
    v4 = (unsigned __int64 *)BugCheckParameter2[i];
    result = *v4;
    if ( (*v4 & 1) != 0 )
    {
      if ( (result & 0x80u) != 0LL )
      {
        LargePteAddress = MiGetLargePteAddress(*(_QWORD *)a1, 1u);
        result = MiGetLeafVa(LargePteAddress) + 0x200000;
LABEL_29:
        *(_QWORD *)a1 = result;
        return result;
      }
    }
    else
    {
      if ( i == 1 )
      {
        v7 = (_QWORD *)MiGetLargePteAddress(*(_QWORD *)a1, 1u);
        for ( j = 1LL; j; --j )
        {
          if ( *v7 )
            goto LABEL_11;
          ++v7;
        }
        NextPage = MxGetNextPage(*(_DWORD *)(a1 + 8), 1);
        if ( NextPage != -1 )
        {
          v14 = MiWriteLargePte(*(_QWORD *)a1, NextPage, 1u, -1275068412);
          LeafVa = (__m128i *)MiGetLeafVa(v14);
          _InterlockedAdd64(&qword_140E37738, 0x200uLL);
          if ( *(_DWORD *)(a1 + 12)
            || (v16 = *(_QWORD *)(a1 + 16)) != 0
            && (v17 = MiGetLeafVa(v16), v18 = MiGetLargePteAddress(v17, 1u), v19 <= v18)
            || (v20 = *(_QWORD *)(a1 + 24)) != 0
            && (v21 = MiGetLeafVa(v20), v22 = MiGetLargePteAddress(v21, 1u), v23 >= v22) )
          {
            KeZeroPages(LeafVa, 0x200000uLL);
          }
          result = (unsigned __int64)&LeafVa[0x20000];
          goto LABEL_29;
        }
      }
LABEL_11:
      v10 = MxGetNextPage(*(_DWORD *)(a1 + 8), 0);
      v12 = v10;
      if ( v10 == -1 )
        MxInstallMoreMemory(0);
      if ( i || *(_DWORD *)(a1 + 12) )
        MiFillPhysicalPages(0LL, v10, v11, 0LL);
      result = MiMakeValidPte((unsigned __int64)v4, v12, i != 0 ? -1744830460 : -1342177276);
      v13 = result;
      if ( _bittest64(&MiFlags, 0x24u) && (result & 0x20) == 0 )
      {
        result = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, v13, 128LL);
      }
      *v4 = v13;
      _InterlockedAdd64(&qword_140E37738, 1uLL);
    }
    if ( !i )
      break;
  }
  *(_QWORD *)a1 += 4096LL;
  return result;
}
