/*
 * XREFs of MiSwitchToPfns @ 0x140C540A0
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140586020 (HvlChangeIsolatedMemoryVisibility.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 *     MiCreateFreePfns @ 0x140C5339C (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD **v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 result; // rax
  __m128i v17[3]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v18[3]; // [rsp+68h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+67h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  MiCreatePfnTemplate((__int64)v18, 128, 0);
  MiCreatePfnTemplate((__int64)v17, 256, 0);
  v2 = 48 * qword_140E3D580 - 0x220000000000LL;
  if ( !qword_140E3D580 && !(unsigned __int16)*(_DWORD *)(v2 + 32) )
  {
    MiSetPfnContainingFrame(48 * qword_140E3D580 - 0x220000000000LL, 0LL);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xC000000000000000uLL | 1;
    LODWORD(BugCheckParameter4) = *(_DWORD *)(v2 + 32);
    BYTE2(BugCheckParameter4) = BYTE2(BugCheckParameter4) & 0xF8 | 5;
    *(_DWORD *)(v2 + 32) = BugCheckParameter4;
    LODWORD(BugCheckParameter4) = *(_DWORD *)(v2 + 32);
    BYTE2(BugCheckParameter4) = BYTE2(BugCheckParameter4) & 0x3F | 0x40;
    *(_DWORD *)(v2 + 32) = BugCheckParameter4;
    *(_QWORD *)(v2 + 40) |= 0x40000000000000uLL;
  }
  qsort(MxBootFreeDescriptor, 0x40uLL, 0x38uLL, MxBootSortConsumedPages);
  v5 = *(_QWORD *)(a1 + 360);
  if ( (v5 & 1) == 0 )
  {
    i = *(_QWORD *)(a1 + 360);
    while ( 1 )
    {
LABEL_29:
      if ( !i )
        goto LABEL_30;
      v7 = *(_DWORD *)(i + 24) & 0x1FFFFFFF;
      if ( v7 == 29 )
      {
        if ( (MiFlags & 0x1000) == 0 )
          goto LABEL_16;
      }
      else if ( v7 == 42 )
      {
        v10 = *(_QWORD *)(i + 40);
        v11 = *(_QWORD *)(i + 32);
        BugCheckParameter4 = 0LL;
        if ( (int)HvlChangeIsolatedMemoryVisibility(v11, v10, 0, &BugCheckParameter4) < 0 )
          KeBugCheckEx(0x1Au, 0x3030318uLL, *(_QWORD *)(i + 32), *(_QWORD *)(i + 40), BugCheckParameter4);
LABEL_16:
        MiCreateFreePfns((_OWORD *)i);
        *(_DWORD *)(i + 24) = 2;
        goto LABEL_22;
      }
      v8 = *(int *)(i + 24);
      if ( (v8 & 0x80000000) == 0LL )
      {
        if ( (v8 & 0x1FFFFFFF) <= 0x18 && (v9 = 16777524, _bittest(&v9, v8 & 0x1FFFFFFF)) )
        {
          MiCreateFreePfns((_OWORD *)i);
        }
        else if ( (_DWORD)v8 != 6 && (unsigned int)(v8 - 30) > 2 )
        {
          if ( (unsigned int)v8 > 0x2C || (v12 = 0x15C400C00008LL, !_bittest64(&v12, v8)) )
            MiCreateDescriptorPfns(i, v18, v17, v4);
        }
      }
LABEL_22:
      v13 = *(_QWORD ***)(i + 8);
      v14 = i;
      if ( v13 )
      {
        v15 = *v13;
        for ( i = *(_QWORD *)(i + 8); v15; v15 = (_QWORD *)*v15 )
          i = (__int64)v15;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v14 )
            break;
          v14 = i;
        }
      }
    }
  }
  if ( v5 != 1 )
  {
    i = v5 ^ ((a1 + 352) | 1);
    goto LABEL_29;
  }
LABEL_30:
  result = MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v3);
  MiFlags |= 0x10000000uLL;
  return result;
}
