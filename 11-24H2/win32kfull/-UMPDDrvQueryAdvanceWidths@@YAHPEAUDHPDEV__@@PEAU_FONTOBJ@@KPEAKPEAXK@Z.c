/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140334430
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
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  struct UMPDOBJ *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  unsigned int v17; // [rsp+30h] [rbp-79h] BYREF
  struct _FONTOBJ *v18; // [rsp+38h] [rbp-71h] BYREF
  UMPDOBJ *v19[2]; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h]
  struct DHPDEV__ *v22; // [rsp+68h] [rbp-41h]
  struct _FONTOBJ *v23; // [rsp+70h] [rbp-39h] BYREF
  int v24; // [rsp+78h] [rbp-31h]
  void *v25; // [rsp+80h] [rbp-29h] BYREF
  void *v26; // [rsp+88h] [rbp-21h]
  unsigned int v27; // [rsp+90h] [rbp-19h]

  v17 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v19);
  memset_0(v20, 0, 0x48uLL);
  v10 = v19[0];
  if ( !v19[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v20[1] = 53;
  LOBYTE(v20[0]) = 0;
  v21 = *(_QWORD *)v19[0];
  v22 = a1;
  v23 = a2;
  v24 = a3;
  v25 = a4;
  v27 = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v26 = UMPDOBJ::_AllocUserMem(v19[0], 2 * a6, 1);
  if ( v26
    && (unsigned int)UMPDOBJ::pfo(v10, &v23, v11)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v25, 4 * a6) )
  {
    v18 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v18, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v12 = UMPDOBJ::Thunk(v10, v20, 0x48u, &v17, Size);
    v13 = v17;
    if ( v12 == -1 )
      v13 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v18, v10, 0, 0, 0LL);
    v18 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v26);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v13 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v19);
  return v13;
}
