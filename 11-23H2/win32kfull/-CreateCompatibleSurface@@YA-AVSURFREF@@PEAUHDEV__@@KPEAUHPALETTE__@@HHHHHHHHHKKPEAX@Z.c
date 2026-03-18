/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C00140D4 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00913D8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00222C0 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C0026144 (GreDwmUseDeviceBitmaps.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0026F2C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00910AC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C0264E28 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall CreateCompatibleSurface(
        SURFREF *a1,
        HDEV a2,
        unsigned int a3,
        HPALETTE a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  HSURF v16; // rdi
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // r10d
  bool v22; // zf
  __int64 (__fastcall *v23)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, HDEV *); // r11
  int v24; // r12d
  int v25; // eax
  unsigned int v26; // r13d
  HSURF v27; // rax
  SURFACE *v28; // rax
  __int64 (__fastcall *v29)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // rax
  unsigned int v30; // r12d
  HSURF v31; // rax
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64, _QWORD); // rax
  int (*v33)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v34; // rcx
  __int64 v35; // r10
  int v36; // eax
  SURFACE *v37; // rdi
  SURFACE *v39; // [rsp+60h] [rbp-79h] BYREF
  char v40; // [rsp+68h] [rbp-71h]
  int v41; // [rsp+6Ch] [rbp-6Dh]
  int v42; // [rsp+70h] [rbp-69h]
  _BYTE v43[32]; // [rsp+78h] [rbp-61h] BYREF
  SURFACE *v44; // [rsp+98h] [rbp-41h]
  __int64 v45; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v46[4]; // [rsp+A8h] [rbp-31h] BYREF
  HPALETTE v47; // [rsp+B8h] [rbp-21h]
  __int64 v48; // [rsp+C0h] [rbp-19h]
  HDEV v49; // [rsp+C8h] [rbp-11h] BYREF
  unsigned int v50; // [rsp+D0h] [rbp-9h]
  unsigned int v51; // [rsp+D4h] [rbp-5h]

  v16 = 0LL;
  v18 = a7;
  v19 = 67108865;
  v20 = a3;
  v42 = a15;
  v45 = a16;
  v46[2] = a6;
  v48 = 67108865LL;
  v46[3] = 0;
  v46[1] = a5;
  v47 = a4;
  v46[0] = a3;
  v22 = ((_DWORD)a2[10] & 0x8000) == 0;
  v49 = a2;
  if ( !v22 )
    v19 = 67371009;
  LODWORD(v48) = v19;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_55;
    v18 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v49);
    if ( !v18 )
      goto LABEL_55;
    v20 = v46[0];
  }
  if ( !a9 )
  {
    if ( a11 )
    {
      v29 = (__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))*((_QWORD *)a2 + 427);
      if ( v29 )
      {
        v30 = 6;
        if ( !a12 )
          v30 = 2;
        v31 = (HSURF)v29(*((_QWORD *)a2 + 221), a5 | ((unsigned __int64)a6 << 32), v20, v30, 0LL, a14, v42, &v45);
        v16 = v31;
        if ( v31 )
        {
          SURFREF::SURFREF((SURFREF *)v43, v31);
          if ( v44 )
          {
            *((_DWORD *)v44 + 29) |= 8u;
            *((_QWORD *)v44 + 71) = v45;
            *((_DWORD *)v44 + 30) = v30;
            if ( v44 )
              DEC_SHARE_REF_CNT(v44);
            goto LABEL_37;
          }
          SURFREF::SURFREF(a1);
LABEL_24:
          if ( v44 )
            DEC_SHARE_REF_CNT(v44);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v43);
          return a1;
        }
      }
LABEL_28:
      SURFREF::SURFREF(a1);
      return a1;
    }
    v32 = (__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD))*((_QWORD *)a2 + 343);
    if ( !v32 )
      goto LABEL_55;
    v16 = (HSURF)v32(*((_QWORD *)a2 + 221), a5 | ((unsigned __int64)a6 << 32), v20);
LABEL_41:
    if ( !v16 )
      goto LABEL_55;
    goto LABEL_42;
  }
  v18 = GreDwmUseDeviceBitmaps();
  if ( !v18 )
    goto LABEL_55;
  v23 = (__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, HDEV *))*((_QWORD *)a2 + 427);
  v24 = 87;
  if ( a14 )
    v24 = a14;
  if ( !v23 )
    goto LABEL_27;
  v25 = 5;
  if ( !a12 )
    v25 = 1;
  v49 = 0LL;
  v26 = v25 | 8;
  if ( !a13 )
    v26 = v25;
  v27 = (HSURF)v23(*((_QWORD *)a2 + 221), a5 | ((unsigned __int64)a6 << 32), v46[0], v26, 0LL, 0, v42, &v49);
  v16 = v27;
  if ( !v27 )
  {
LABEL_27:
    if ( a10 )
      goto LABEL_28;
    goto LABEL_41;
  }
  SURFREF::SURFREF((SURFREF *)v43, v27);
  v28 = v44;
  if ( !v44 )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    *((_QWORD *)a1 + 4) = 0LL;
    goto LABEL_24;
  }
  if ( a13 )
  {
    *((_DWORD *)v44 + 29) |= 0x400u;
    v28 = v44;
  }
  *((_DWORD *)v28 + 29) |= 1u;
  *((_QWORD *)v44 + 71) = v49;
  *((_DWORD *)v44 + 31) = v24;
  *((_DWORD *)v44 + 30) = v26;
  if ( v44 )
    DEC_SHARE_REF_CNT(v44);
LABEL_37:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v43);
LABEL_42:
  if ( (_DWORD)v16 != -1 )
  {
    SURFREF::SURFREF((SURFREF *)v43, v16);
    if ( v44 )
    {
      *((_DWORD *)v44 + 28) |= 0x800000u;
      *((_DWORD *)v44 + 28) |= 0x4000000u;
      *((_DWORD *)v44 + 28) |= 0x4000u;
      if ( v47 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v49, v47);
        if ( v49 )
          *((_QWORD *)v44 + 16) = v49;
      }
      if ( !a9 && (!a11 || !v45) )
      {
        v50 = a5;
        v51 = a6;
        v49 = 0LL;
        v33 = SURFACE::pfnBitBlt(v44);
        v35 = v34 + 24;
        if ( !v34 )
          v35 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, HDEV *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v33)(
          v35,
          0LL,
          0LL,
          0LL,
          0LL,
          &v49,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v16, 1LL, *((_QWORD *)v44 + 71), 1LL);
    }
    SURFREF::SURFREF(a1, v43);
    goto LABEL_24;
  }
LABEL_55:
  v39 = 0LL;
  v36 = 1;
  if ( !a9 )
    v36 = a8;
  v40 = 0;
  v41 = 0;
  LODWORD(v48) = (v36 != 0 ? 0x800 : 0) | v48;
  SURFMEM::bCreateDIB((SURFMEM *)&v39, (struct _DEVBITMAPINFO *)v46, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v39 )
  {
    v40 |= 1u;
    *((_DWORD *)v39 + 28) |= 0x800000u;
    SURFACE::hdev(v39, a2);
    if ( *((_QWORD *)v39 + 31) )
      *((_DWORD *)v39 + 28) |= 0x4000u;
    else
      *((_DWORD *)v39 + 28) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*((_QWORD *)v39 + 4), 0LL, 0LL, v18);
    v37 = v39;
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    if ( v37 )
    {
      *((_QWORD *)a1 + 4) = v37;
      INC_SHARE_REF_CNT(v37);
    }
  }
  else
  {
    SURFREF::SURFREF(a1);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v39);
  return a1;
}
