/*
 * XREFs of NtGdiSetPixel @ 0x140019850
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, signed int a2, unsigned int a3, int a4)
{
  unsigned int v7; // esi
  __int64 v8; // r9
  DC *v9; // rcx
  int v10; // eax
  DC *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r10
  __int64 v14; // rbx
  ULONG v15; // ecx
  DC *v17; // rcx
  __int64 v18; // rdi
  LONG left; // r8d
  int v20; // r9d
  int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // r10
  XCLIPOBJ *v24; // rbx
  struct REGION *v25; // r10
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // rbx
  Gre::Base *v31; // rcx
  int v32; // r15d
  struct Gre::Base::SESSION_GLOBALS *v33; // r14
  int v34; // eax
  __int64 v35; // rax
  LONG v36; // r8d
  int right; // r9d
  int top; // r10d
  struct _RECTL *v39; // rcx
  LONG v40; // r11d
  int (*v41)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v42; // rdx
  int v43; // r8d
  struct Gre::Base::SESSION_GLOBALS *v44; // rax
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  DC *v50[14]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int NearestIndexFromColorref; // [rsp+100h] [rbp+0h] BYREF
  __int64 v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int128 v59; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+178h] [rbp+78h]
  __int128 v61; // [rsp+190h] [rbp+90h] BYREF
  __int64 v62; // [rsp+1A0h] [rbp+A0h]
  int v63; // [rsp+1A8h] [rbp+A8h]
  _QWORD v64[14]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v65; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v66; // [rsp+230h] [rbp+130h] BYREF

  v47 = a4;
  v7 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v50, a1);
  if ( v50[0] && (*((_DWORD *)v50[0] + 9) & 0x10000) == 0 )
  {
    v45 = __PAIR64__(a3, a2);
    DC::QuickInitXform(v50[0], &v49, 516LL);
    if ( (*(_BYTE *)(v49 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v49, &v45, 1LL, v8);
      a3 = HIDWORD(v45);
      a2 = v45;
    }
    v9 = v50[0];
    v65.right = a2 + 1;
    v65.bottom = a3 + 1;
    *(_QWORD *)&v65.left = __PAIR64__(a3, a2);
    v10 = *((_DWORD *)v50[0] + 9);
    if ( (v10 & 0xE0) != 0 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        if ( a2 < *((_DWORD *)v50[0] + 266) )
          *((_DWORD *)v50[0] + 266) = a2;
        if ( v65.top < *((_DWORD *)v9 + 267) )
          *((_DWORD *)v9 + 267) = v65.top;
        if ( v65.right > *((_DWORD *)v9 + 268) )
          *((_DWORD *)v9 + 268) = v65.right;
        if ( v65.bottom > *((_DWORD *)v9 + 269) )
          *((_DWORD *)v9 + 269) = v65.bottom;
      }
      v17 = v50[0];
      if ( (*((_DWORD *)v50[0] + 9) & 0x80u) != 0 )
      {
        if ( v65.left < *((_DWORD *)v50[0] + 274) )
          *((_DWORD *)v50[0] + 274) = v65.left;
        if ( v65.top < *((_DWORD *)v17 + 275) )
          *((_DWORD *)v17 + 275) = v65.top;
        if ( v65.right > *((_DWORD *)v17 + 276) )
          *((_DWORD *)v17 + 276) = v65.right;
        if ( v65.bottom > *((_DWORD *)v17 + 277) )
          *((_DWORD *)v17 + 277) = v65.bottom;
      }
    }
    if ( *((_QWORD *)v50[0] + 62) )
    {
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v64);
      v62 = 0LL;
      v61 = 0LL;
      v63 = 0;
      v64[0] = 0LL;
      memset(&v64[10], 0, 24);
      if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v61, (struct XDCOBJ *)v50, 0) )
      {
LABEL_11:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v61);
        goto LABEL_12;
      }
      v11 = v50[0];
      v12 = *((_QWORD *)v50[0] + 62);
      v13 = *((_DWORD *)v50[0] + 10) & 1;
      v14 = *((int *)v50[0] + 2 * v13 + 254);
      if ( (unsigned __int64)(v14 + v65.left + 0x80000000LL) > 0xFFFFFFFF )
        goto LABEL_9;
      if ( (unsigned __int64)(v14 + v65.right + 0x80000000LL) > 0xFFFFFFFF )
        goto LABEL_9;
      v18 = *((int *)v50[0] + 2 * v13 + 255);
      if ( (unsigned __int64)(v18 + v65.top + 0x80000000LL) > 0xFFFFFFFF
        || (unsigned __int64)(v18 + v65.bottom + 0x80000000LL) > 0xFFFFFFFF
        || (left = v14 + v65.left,
            v65.left = left,
            v20 = *((_DWORD *)v50[0] + 2 * v13 + 254) + v65.right,
            v21 = *((_DWORD *)v50[0] + 2 * v13 + 255) + v65.top,
            *(_QWORD *)&v65.top = __PAIR64__(v20, v21),
            v22 = (unsigned int)(*((_DWORD *)v50[0] + 2 * v13 + 255) + v65.bottom),
            v65.bottom += *((_DWORD *)v50[0] + 2 * v13 + 255),
            (unsigned int)(left + 134217726) > 0xFFFFFFC)
        || (unsigned int)(v20 + 134217726) > 0xFFFFFFC
        || (unsigned int)(v21 + 134217726) > 0xFFFFFFC
        || (unsigned int)(v22 + 134217726) > 0xFFFFFFC )
      {
LABEL_9:
        v15 = 87;
LABEL_10:
        EngSetLastError(v15);
        goto LABEL_11;
      }
      if ( left >= *((_DWORD *)v50[0] + 250)
        && v20 <= *((_DWORD *)v50[0] + 252)
        && v21 >= *((_DWORD *)v50[0] + 251)
        && (int)v22 <= *((_DWORD *)v50[0] + 253) )
      {
LABEL_49:
        if ( ((*(_DWORD *)(v12 + 116) & 8) != 0 || *(_QWORD *)(v12 + 224))
          && _bittest16((const signed __int16 *)(v12 + 102), 9u) )
        {
          goto LABEL_91;
        }
        v26 = *(_DWORD *)(v12 + 112);
        if ( (v26 & 0x800) != 0 )
        {
          v27 = UserSurfaceAccessCheck(*(_QWORD *)(v12 + 648));
        }
        else
        {
          if ( (v26 & 0x10000000) == 0 )
            goto LABEL_56;
          v27 = UserScreenAccessCheck(v22, v11);
        }
        if ( !v27 )
        {
LABEL_91:
          v15 = 5;
          goto LABEL_10;
        }
        v11 = v50[0];
        left = v65.left;
LABEL_56:
        v28 = *((_DWORD *)v11 + 9);
        if ( (v28 & 0xE0) == 0 )
          goto LABEL_57;
        v66 = v65;
        v35 = *((_DWORD *)v11 + 10) & 1;
        v36 = left - *((_DWORD *)v11 + 2 * v35 + 254);
        v66.left = v36;
        right = v65.right - *((_DWORD *)v11 + 2 * v35 + 254);
        v66.right = right;
        top = v65.top - *((_DWORD *)v11 + 2 * v35 + 255);
        v66.top = top;
        v66.bottom = v65.bottom - *((_DWORD *)v11 + 2 * v35 + 255);
        if ( (v28 & 0x40) == 0 )
        {
LABEL_57:
          v29 = *((_QWORD *)v11 + 11);
          v30 = *(_QWORD *)(v12 + 128);
          v59 = 0LL;
          v58 = 0LL;
          v52 = 0LL;
          v53 = 0;
          v55 = -1;
          v56 = 0LL;
          v57 = 0LL;
          v60 = 0;
          v31 = (Gre::Base *)*((unsigned int *)v11 + 30);
          if ( ((unsigned __int8)v31 & 1) != 0
            && *(_QWORD *)(*((_QWORD *)v11 + 122) + 248LL)
            && ((unsigned int)v31 & 0x10000000) != 0 )
          {
            v44 = Gre::Base::Globals(v31);
            NearestIndexFromColorref = a4;
            v53 = 6;
            if ( *((_DWORD *)v44 + 768) )
            {
              v54 = a4;
              v55 = a4;
            }
            v32 = 1;
          }
          else
          {
            v32 = 0;
            v33 = Gre::Base::Globals(v31);
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v30, v29, v47, 1LL);
            v34 = *((_DWORD *)v50[0] + 30);
            if ( (v34 & 5) != 0 )
            {
              v53 = 2;
            }
            else if ( (v34 & 2) != 0 )
            {
              v53 = 1;
            }
            if ( *((_DWORD *)v33 + 768) )
            {
              v54 = v47;
              v55 = rgbFromColorref(v30, v29, v47);
            }
          }
          ++*(_DWORD *)(v12 + 92);
          v41 = SURFACE::pfnBitBlt((SURFACE *)v12);
          if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, struct _RECTL *, _QWORD, _QWORD, unsigned int *, __int64, int))v41)(
                 v12 + 24,
                 0LL,
                 0LL,
                 0LL,
                 0LL,
                 &v65,
                 0LL,
                 0LL,
                 &NearestIndexFromColorref,
                 v42 + 1192,
                 v43) )
          {
            if ( v32 )
              v7 = NearestIndexFromColorref;
            else
              v7 = ulIndexToRGB(v30, v29, NearestIndexFromColorref);
          }
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
          goto LABEL_11;
        }
        v39 = (struct _RECTL *)((char *)v11 + 1080);
        v40 = *((_DWORD *)v11 + 270);
        if ( v40 == *((_DWORD *)v11 + 272) || *((_DWORD *)v11 + 271) == *((_DWORD *)v11 + 273) )
        {
          *v39 = v66;
        }
        else
        {
          if ( v36 < v40 )
          {
            v39->left = v36;
            v11 = v50[0];
            right = v66.right;
            top = v66.top;
          }
          if ( top < v39->top )
          {
            v39->top = top;
            v11 = v50[0];
            right = v66.right;
          }
          if ( right > v39->right )
          {
            v39->right = right;
            v11 = v50[0];
          }
          if ( v66.bottom <= v39->bottom )
            goto LABEL_72;
          v39->bottom = v66.bottom;
        }
        v11 = v50[0];
LABEL_72:
        v48 = *((_QWORD *)v11 + 148);
        if ( v48 )
        {
          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v45);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v45, 0x70u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v46);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v46, 0x70u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v46);
          if ( v45 )
          {
            if ( v46 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v46, &v66);
              if ( RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v46, 0xEu) )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v48, (struct RGNOBJ *)&v45);
                *((_QWORD *)v50[0] + 148) = v48;
              }
            }
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v46);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v45);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
          v11 = v50[0];
        }
        goto LABEL_57;
      }
      v23 = *((_QWORD *)v50[0] + 146);
      v24 = (DC *)((char *)v50[0] + 1768);
      if ( !v23 || (*((_DWORD *)v50[0] + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v50[0]) )
      {
        if ( !*((_QWORD *)v11 + 144) )
        {
          if ( !*((_QWORD *)v11 + 145) || (*((_DWORD *)v11 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v11) )
            v25 = (struct REGION *)*((_QWORD *)v11 + 143);
          goto LABEL_46;
        }
        if ( !v23 )
          goto LABEL_87;
      }
      if ( (*((_DWORD *)v11 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v11) )
LABEL_87:
        v25 = (struct REGION *)*((_QWORD *)v11 + 144);
LABEL_46:
      XCLIPOBJ::vSetup(v24, v25, (const struct ERECTL *)&v65, 2);
      if ( *((_DWORD *)v24 + 1) == *((_DWORD *)v24 + 3) || *((_DWORD *)v24 + 2) == *((_DWORD *)v24 + 4) )
        goto LABEL_11;
      v11 = v50[0];
      left = v65.left;
      goto LABEL_49;
    }
  }
LABEL_12:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v50);
  return v7;
}
