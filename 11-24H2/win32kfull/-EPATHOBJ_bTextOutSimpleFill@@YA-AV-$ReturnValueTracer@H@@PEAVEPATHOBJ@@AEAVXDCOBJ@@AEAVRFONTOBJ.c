/*
 * XREFs of ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140300244
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_DWORD *__fastcall EPATHOBJ_bTextOutSimpleFill(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        struct RFONTOBJ *a4,
        __int64 a5,
        SURFACE *a6,
        CLIPOBJ *a7,
        BRUSHOBJ *a8,
        POINTL *a9)
{
  int *v9; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  int v13; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r12d
  unsigned int v21; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-65h] BYREF
  int *v23; // [rsp+58h] [rbp-61h] BYREF
  POINTL *v24; // [rsp+60h] [rbp-59h]
  BRUSHOBJ *v25; // [rsp+68h] [rbp-51h]
  CLIPOBJ *v26; // [rsp+70h] [rbp-49h]
  SURFACE *v27; // [rsp+78h] [rbp-41h]
  __int64 v28; // [rsp+80h] [rbp-39h]
  __int64 v29; // [rsp+88h] [rbp-31h]
  int v30[10]; // [rsp+90h] [rbp-29h] BYREF

  v9 = v30;
  v28 = a5;
  v11 = 0;
  v27 = a6;
  v12 = 0;
  v13 = 0;
  v26 = a7;
  v25 = a8;
  v24 = a9;
  v16 = *a3;
  v29 = a2;
  v22 = 0;
  v21 = 0;
  v17 = *(_QWORD *)(v16 + 48);
  v23 = v30;
  if ( (*(_DWORD *)(v17 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a4 )
  {
    v18 = UMPDReleaseRFONTSem(a4, 0LL, &v22, &v21, (void **)&v23);
    v11 = v22;
    v13 = v18;
    v12 = v21;
    v9 = v23;
  }
  v19 = *EPATHOBJ_bSimpleFill(&v21, v29, *(_DWORD *)(*a3 + 72), v28, v27, v26, v25, v24, 0xD0Du, 2u);
  if ( v13 )
  {
    UMPDAcquireRFONTSem(a4, 0LL, v11, v12, v9);
    if ( v9 )
    {
      if ( v9 != v30 )
        Win32FreePool(v9);
    }
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v19);
  return a1;
}
