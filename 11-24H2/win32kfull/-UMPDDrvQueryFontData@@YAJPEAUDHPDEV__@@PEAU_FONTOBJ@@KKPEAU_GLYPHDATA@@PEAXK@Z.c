/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140215600
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D9158 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  struct UMPDOBJ *v9; // rbx
  void *v10; // r14
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r15d
  char *KernelPtr; // rax
  size_t v16; // [rsp+20h] [rbp-91h]
  struct _FONTOBJ *v17; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-79h] BYREF
  int v19; // [rsp+3Ch] [rbp-75h]
  UMPDOBJ *v20[2]; // [rsp+40h] [rbp-71h] BYREF
  _DWORD v21[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  struct DHPDEV__ *v24; // [rsp+68h] [rbp-49h]
  struct _FONTOBJ *v25; // [rsp+70h] [rbp-41h] BYREF
  int v26; // [rsp+78h] [rbp-39h]
  int v27; // [rsp+7Ch] [rbp-35h]
  void *v28; // [rsp+80h] [rbp-31h] BYREF
  void *v29; // [rsp+88h] [rbp-29h] BYREF
  int v30; // [rsp+90h] [rbp-21h]
  int v31; // [rsp+94h] [rbp-1Dh]

  *(_WORD *)((char *)v21 + 1) = 0;
  HIBYTE(v21[0]) = 0;
  v22 = 0LL;
  v31 = 0;
  v18 = 0;
  LODWORD(v17) = a4;
  v19 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v20);
  v9 = v20[0];
  *(_WORD *)((char *)v21 + 1) = 0;
  HIBYTE(v21[0]) = 0;
  v22 = 0LL;
  v31 = 0;
  if ( !v20[0] )
    goto LABEL_12;
  LOBYTE(v21[0]) = 0;
  v21[1] = 28;
  v23 = *(_QWORD *)v20[0];
  v24 = a1;
  v26 = v19;
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v29 = v10;
  v25 = a2;
  v27 = (int)v17;
  v28 = a5;
  v30 = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v20[0], (const void **)&v28, 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&v29, Size) && (unsigned int)UMPDOBJ::pfo(v9, &v25, v11) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v9, 0LL, 0LL, 0LL);
    LODWORD(v16) = 4;
    v12 = UMPDOBJ::Thunk(v9, v21, 0x48u, &v18, v16);
    v13 = v18;
    if ( v12 == -1 )
      v13 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v9, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    if ( v13 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v29);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr((char **)v9, (char *)v28);
    }
  }
  else
  {
LABEL_12:
    v13 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v20);
  return v13;
}
