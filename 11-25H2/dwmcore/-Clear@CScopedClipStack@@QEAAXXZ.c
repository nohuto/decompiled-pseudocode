/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800ABDF4
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800D9D60 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x1801DE4B4 (--1CScopedClipStack@@QEAA@XZ.c)
 * Callees:
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800AC100 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1800AC320 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v1; // rsi
  int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  __int64 v13; // r14
  __int64 i; // rbp
  CRectanglesShape *v15; // rcx
  CPolygonShape *(__fastcall *v16)(CPolygonShape *, char); // rax
  unsigned int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // eax
  void *v20; // rbp
  int v21; // r9d
  void *v22; // rbp

  v1 = *(_QWORD *)this;
  v3 = 0;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 6) )
  {
    v4 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 6 << 6;
    v5 = v4 + v1;
    while ( v1 != v5 )
    {
      v6 = *(_QWORD *)(v1 + 176);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v1 += 192LL;
    }
    *((_QWORD *)this + 1) -= v4;
  }
  v7 = *((_QWORD *)this + 243);
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v7) >> 3) )
  {
    v13 = 8 * ((*((_QWORD *)this + 244) - v7) >> 3);
    for ( i = v13 + v7; v7 != i; v7 += 40LL )
    {
      if ( *(_BYTE *)(v7 + 8) )
      {
        v15 = *(CRectanglesShape **)v7;
        if ( *(_QWORD *)v7 )
        {
          v16 = **(CPolygonShape *(__fastcall ***)(CPolygonShape *, char))v15;
          if ( (char *)v16 == (char *)CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::`scalar deleting destructor'(v15, 1u);
          }
          else if ( (char *)v16 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::`vector deleting destructor'(v15, 1u);
          }
          else if ( v16 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v15, 1);
          }
          else
          {
            v16(v15, 1);
          }
        }
      }
      *(_QWORD *)v7 = 0LL;
      *(_BYTE *)(v7 + 8) = 0;
    }
    *((_QWORD *)this + 244) -= v13;
  }
  *((_DWORD *)this + 600) = 0;
  v8 = 8LL;
  v9 = *((_DWORD *)this + 602);
  v10 = -2147024882;
  if ( v9 != 8 )
  {
    v11 = v9 + 1;
    goto LABEL_11;
  }
  v17 = *((_DWORD *)this + 603);
  v18 = 8LL;
  if ( v17 > 8 )
    v18 = v17;
  if ( (unsigned __int64)(3 * v18) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
  else if ( (unsigned int)(3 * v18) <= *((_DWORD *)this + 601) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v18 <= 0x10 )
    {
      v21 = -2147024809;
    }
    else
    {
      v20 = MIDL_user_allocate(16LL * (unsigned int)v18);
      if ( v20 )
      {
        operator delete(*((void **)this + 299));
        *((_QWORD *)this + 299) = v20;
        *((_DWORD *)this + 601) = v18;
        goto LABEL_29;
      }
      v21 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x11Eu, 0LL);
  }
LABEL_29:
  *((_DWORD *)this + 603) = 0;
  v11 = 0;
LABEL_11:
  *((_DWORD *)this + 602) = v11;
  *((_DWORD *)this + 594) = 0;
  v12 = *((_DWORD *)this + 596);
  if ( v12 == 8 )
  {
    v19 = *((_DWORD *)this + 597);
    if ( v19 > 8 )
      v8 = v19;
    if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 595) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
      {
        v10 = -2147024809;
      }
      else
      {
        v22 = MIDL_user_allocate(16LL * (unsigned int)v8);
        if ( v22 )
        {
          operator delete(*((void **)this + 296));
          *((_QWORD *)this + 296) = v22;
          *((_DWORD *)this + 595) = v8;
          goto LABEL_34;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x11Eu, 0LL);
    }
LABEL_34:
    *((_DWORD *)this + 597) = 0;
    goto LABEL_13;
  }
  v3 = v12 + 1;
LABEL_13:
  *((_DWORD *)this + 596) = v3;
}
