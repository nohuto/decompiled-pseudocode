/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x14017AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x14002851C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015A480 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401B8D54 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        char *Src,
        unsigned int a7,
        size_t Size,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  struct tagBITMAPINFO *v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // esi
  unsigned int biSize; // r8d
  int v17; // eax
  __int64 inited; // rax
  __int64 DIBitmapComp; // rax
  __int64 v21; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v22; // [rsp+78h] [rbp-F0h]
  __int64 v23; // [rsp+80h] [rbp-E8h]
  __int16 v24; // [rsp+88h] [rbp-E0h]
  _BYTE v25[24]; // [rsp+90h] [rbp-D8h] BYREF
  __int16 v26; // [rsp+A8h] [rbp-C0h]
  _BYTE v27[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v13 = 0LL;
  v14 = 1LL;
  memset(v25, 0, sizeof(v25));
  v26 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( !Src )
  {
    v15 = Size;
    goto LABEL_19;
  }
  v15 = Size;
  if ( !(_DWORD)Size )
    goto LABEL_19;
  if ( (unsigned int)Size < 4 )
    goto LABEL_14;
  if ( (unsigned int)Size > 0x2710000 )
    goto LABEL_14;
  v13 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
  if ( !v13 )
    goto LABEL_14;
  if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, Src, (unsigned int)Size);
  biSize = v13->bmiHeader.biSize;
  if ( v13->bmiHeader.biSize < 0x28
    || (unsigned int)Size < biSize
    || (_DWORD)Size != (unsigned int)GreGetBitmapSizeInternal(v13, a7, biSize) )
  {
    FreeThreadBufferWithTag(v13);
    v13 = 0LL;
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  v17 = 1;
LABEL_15:
  v14 = -(__int64)(v17 != 0) & 1;
  if ( v14 && a5 )
  {
    inited = umptr_r<unsigned char>::init_probe((__int64)v25, a5, a9, 4);
    v21 = *(_QWORD *)inited;
    v22 = *(_QWORD *)(inited + 8);
    v23 = *(_QWORD *)(inited + 16);
    v24 = *(_WORD *)(inited + 24);
    v14 &= -(__int64)(v21 != 0);
  }
LABEL_19:
  if ( v14 == 1 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v27, a1);
    if ( (a4 & 2) != 0 )
      DIBitmapComp = GrepCreateDIBitmapReal(
                       (OPTAPIDCOBJ *)v27,
                       a4,
                       &v21,
                       &v13->bmiHeader.biSize,
                       a7,
                       v15,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    else
      DIBitmapComp = GrepCreateDIBitmapComp(
                       (struct OPTAPIDCOBJ *)v27,
                       a2,
                       a3,
                       (__int64)&v21,
                       (__int64)v13,
                       a7,
                       v15,
                       a11);
    v14 = DIBitmapComp;
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v27);
  }
  if ( v13 )
    FreeThreadBufferWithTag(v13);
  return v14;
}
