/*
 * XREFs of MiSwitchToPfns @ 0x140C40CE0
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405856D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiCreateDescriptorPfns @ 0x140C3FDC4 (MiCreateDescriptorPfns.c)
 *     MiCreateFreePfns @ 0x140C3FFDC (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  __int64 i; // rbx
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD **v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 result; // rax
  __m128i v15[3]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v16[3]; // [rsp+68h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+67h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  MiCreatePfnTemplate((__int64)v16, 128, 0);
  MiCreatePfnTemplate((__int64)v15, 256, 0);
  v2 = 48 * qword_140E3D200 - 0x220000000000LL;
  if ( !qword_140E3D200 && !(unsigned __int16)*(_DWORD *)(v2 + 32) )
  {
    MiSetPfnContainingFrame(48 * qword_140E3D200 - 0x220000000000LL, 0LL);
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
  v3 = *(_QWORD *)(a1 + 360);
  if ( (v3 & 1) == 0 )
  {
    i = *(_QWORD *)(a1 + 360);
    while ( 1 )
    {
LABEL_29:
      if ( !i )
        goto LABEL_30;
      v5 = *(_DWORD *)(i + 24) & 0x1FFFFFFF;
      if ( v5 == 29 )
      {
        if ( (MiFlags & 0x1000) == 0 )
          goto LABEL_16;
      }
      else if ( v5 == 42 )
      {
        v8 = *(_QWORD *)(i + 40);
        v9 = *(_QWORD *)(i + 32);
        BugCheckParameter4 = 0LL;
        if ( (int)HvlChangeIsolatedMemoryVisibility(v9, v8, 0, &BugCheckParameter4) < 0 )
          KeBugCheckEx(0x1Au, 0x3030318uLL, *(_QWORD *)(i + 32), *(_QWORD *)(i + 40), BugCheckParameter4);
LABEL_16:
        MiCreateFreePfns((_OWORD *)i);
        *(_DWORD *)(i + 24) = 2;
        goto LABEL_22;
      }
      v6 = *(int *)(i + 24);
      if ( (v6 & 0x80000000) == 0LL )
      {
        if ( (v6 & 0x1FFFFFFF) <= 0x18 && (v7 = 16777524, _bittest(&v7, v6 & 0x1FFFFFFF)) )
        {
          MiCreateFreePfns((_OWORD *)i);
        }
        else if ( (_DWORD)v6 != 6 && (unsigned int)(v6 - 30) > 2 )
        {
          if ( (unsigned int)v6 > 0x2C || (v10 = 0x15C400C00008LL, !_bittest64(&v10, v6)) )
            MiCreateDescriptorPfns(i, v16, v15);
        }
      }
LABEL_22:
      v11 = *(_QWORD ***)(i + 8);
      v12 = i;
      if ( v11 )
      {
        v13 = *v11;
        for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
          i = (__int64)v13;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v12 )
            break;
          v12 = i;
        }
      }
    }
  }
  if ( v3 != 1 )
  {
    i = v3 ^ ((a1 + 352) | 1);
    goto LABEL_29;
  }
LABEL_30:
  result = MiIssueFlushTbEntire(2LL, -1);
  MiFlags |= 0x10000000uLL;
  return result;
}
