/*
 * XREFs of MiSwitchToPfns @ 0x140C51F10
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140588D40 (HvlChangeIsolatedMemoryVisibility.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MiCreateDescriptorPfns @ 0x140C50FF4 (MiCreateDescriptorPfns.c)
 *     MiCreateFreePfns @ 0x140C5120C (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 i; // rbx
  int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD **v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 result; // rax
  __m128i v16[3]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v17[3]; // [rsp+68h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+67h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  MiCreatePfnTemplate((__int64)v17, 128, 0);
  MiCreatePfnTemplate((__int64)v16, 256, 0);
  v2 = 48 * qword_140E3D440 - 0x220000000000LL;
  if ( !qword_140E3D440 && !(unsigned __int16)*(_DWORD *)(v2 + 32) )
  {
    MiSetPfnContainingFrame(48 * qword_140E3D440 - 0x220000000000LL, 0LL);
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
  v4 = *(_QWORD *)(a1 + 360);
  if ( (v4 & 1) == 0 )
  {
    i = *(_QWORD *)(a1 + 360);
    while ( 1 )
    {
LABEL_29:
      if ( !i )
        goto LABEL_30;
      v6 = *(_DWORD *)(i + 24) & 0x1FFFFFFF;
      if ( v6 == 29 )
      {
        if ( (MiFlags & 0x1000) == 0 )
          goto LABEL_16;
      }
      else if ( v6 == 42 )
      {
        v9 = *(_QWORD *)(i + 40);
        v10 = *(_QWORD *)(i + 32);
        BugCheckParameter4 = 0LL;
        if ( (int)HvlChangeIsolatedMemoryVisibility(v10, v9, 0, &BugCheckParameter4) < 0 )
          KeBugCheckEx(0x1Au, 0x3030318uLL, *(_QWORD *)(i + 32), *(_QWORD *)(i + 40), BugCheckParameter4);
LABEL_16:
        MiCreateFreePfns((_OWORD *)i);
        *(_DWORD *)(i + 24) = 2;
        goto LABEL_22;
      }
      v7 = *(int *)(i + 24);
      if ( (v7 & 0x80000000) == 0LL )
      {
        if ( (v7 & 0x1FFFFFFF) <= 0x18 && (v8 = 16777524, _bittest(&v8, v7 & 0x1FFFFFFF)) )
        {
          MiCreateFreePfns((_OWORD *)i);
        }
        else if ( (_DWORD)v7 != 6 && (unsigned int)(v7 - 30) > 2 )
        {
          if ( (unsigned int)v7 > 0x2C || (v11 = 0x15C400C00008LL, !_bittest64(&v11, v7)) )
            MiCreateDescriptorPfns(i, v17, v16);
        }
      }
LABEL_22:
      v12 = *(_QWORD ***)(i + 8);
      v13 = i;
      if ( v12 )
      {
        v14 = *v12;
        for ( i = *(_QWORD *)(i + 8); v14; v14 = (_QWORD *)*v14 )
          i = (__int64)v14;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v13 )
            break;
          v13 = i;
        }
      }
    }
  }
  if ( v4 != 1 )
  {
    i = v4 ^ ((a1 + 352) | 1);
    goto LABEL_29;
  }
LABEL_30:
  result = MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v3);
  MiFlags |= 0x10000000uLL;
  return result;
}
