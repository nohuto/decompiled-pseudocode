/*
 * XREFs of NtGdiGetPixel @ 0x1400C51B0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400C55A0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, LONG a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  struct REGION *v8; // rdx
  int v9; // ecx
  int v10; // esi
  Gre::Base *v11; // rcx
  __int64 v12; // rbx
  struct Gre::Base::SESSION_GLOBALS *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  char v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+74h] [rbp-8Ch]
  _DWORD v21[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  DC *v26[14]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v27; // [rsp+110h] [rbp+10h] BYREF
  __int64 v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  _QWORD v30[14]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v31; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v32[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v33; // [rsp+1B8h] [rbp+B8h]
  int v34; // [rsp+1BCh] [rbp+BCh]
  _BYTE v35[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v36; // [rsp+1C4h] [rbp+C4h]
  int v37; // [rsp+1C8h] [rbp+C8h]
  int v38; // [rsp+1CCh] [rbp+CCh]
  int v39; // [rsp+1D0h] [rbp+D0h]

  v17 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v26, a1);
  if ( v26[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v26, a2, a3, 1, 1);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v30);
    v28 = 0LL;
    v27 = 0LL;
    v29 = 0;
    v30[0] = 0LL;
    memset(&v30[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v27, (struct XDCOBJ *)v26, 0) )
    {
      v5 = *((_QWORD *)v26[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v26[0] + 62)) )
        {
          DC::QuickInitXform(v26[0], &v25, 516LL);
          *(_QWORD *)&v31 = __PAIR64__(a3, a2);
          if ( (*(_BYTE *)(v25 + 32) & 0x43) != 0x43 )
          {
            bCvtPts1(v25, &v31, 1LL, v6);
            a3 = DWORD1(v31);
            a2 = v31;
          }
          v33 = a2 + 1;
          v34 = a3 + 1;
          v7 = *((_DWORD *)v26[0] + 10) & 1LL;
          v32[0] = a2 + *((_DWORD *)v26[0] + 2 * v7 + 254);
          v33 = a2 + 1 + *((_DWORD *)v26[0] + 2 * v7 + 254);
          v32[1] = a3 + *((_DWORD *)v26[0] + 2 * v7 + 255);
          v34 = a3 + 1 + *((_DWORD *)v26[0] + 2 * v7 + 255);
          XDCOBJ::prgnEffRao(v26);
          XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v35);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v35, v8, (const struct ERECTL *)v32, 0);
          if ( v36 != v38 && v37 != v39 )
          {
            v9 = *((_DWORD *)v26[0] + 30);
            if ( (v9 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v26[0] + 122) + 248LL) || (v10 = 1, (v9 & 0x10000000) == 0) )
              v10 = 0;
            v17 = 0;
            v21[0] = *(_DWORD *)(v5 + 96);
            v22 = 1LL;
            v24 = 1LL;
            v21[1] = 1;
            v23 = 0LL;
            v31 = 0LL;
            if ( v21[0] == 1 )
            {
              LODWORD(v31) = 7;
              DWORD2(v31) = 8;
            }
            else if ( v21[0] == 2 )
            {
              LODWORD(v31) = 1;
              DWORD2(v31) = 2;
            }
            else
            {
              DWORD2(v31) = 1;
            }
            v18 = 0LL;
            v19 = 0;
            v20 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v18, (struct _DEVBITMAPINFO *)v21, &v17, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v12 = *(_QWORD *)(v5 + 48);
              DWORD1(v31) = 0;
              HIDWORD(v31) = 1;
              v13 = Gre::Base::Globals(v11);
              if ( (*(_DWORD *)(v5 + 112) & 0x400) != 0 )
                v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, _DWORD *))(v12 + 2832))(
                        (v18 + 24) & -(__int64)(v18 != 0),
                        v5 + 24,
                        0LL,
                        (__int64)v13 + 4552,
                        &v31,
                        v32);
              else
                v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, __int128 *, _DWORD *))EngCopyBits)(
                        (v18 + 24) & -(__int64)(v18 != 0),
                        v5 + 24,
                        0LL,
                        (char *)v13 + 4552,
                        &v31,
                        v32);
              if ( v14 && !v10 )
                v17 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v26[0] + 11), v17);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v18);
          }
        }
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v27);
  }
  v15 = v17;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v26);
  return v15;
}
