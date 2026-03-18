/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x140052700
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffDrawStream @ 0x140052560 (OffDrawStream.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x14005269C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140054E74 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140054F2C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x140170650 (EngDrawStream.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401E8F68 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1403228B4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  struct _SURFOBJ *v11; // r12
  unsigned int v13; // r15d
  int v14; // ebx
  struct _RECTL *v15; // r8
  struct _SURFOBJ *v16; // r10
  int Surface; // eax
  int v18; // r14d
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rdi
  __int64 v22; // rbx
  struct _SURFOBJ *v23; // r9
  struct _XLATEOBJ *v24; // r14
  struct _DISPSURF *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64); // r10
  HDEV hdev; // rcx
  HDEV v30; // rcx
  HDEV pulXlate; // r14
  __int64 v32; // rdi
  struct PALETTE *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  FLONG flXlate; // r12d
  int v38; // r8d
  ULONG iUniq; // r9d
  __int64 v40; // rax
  __int64 v41; // rcx
  ULONG *v42; // r10
  ULONG v43; // r11d
  FLONG v44; // eax
  int v45; // ecx
  ULONG v46; // edx
  __int64 *v47; // r12
  FLONG v48; // ecx
  int v49; // edx
  ULONG v50; // r8d
  int inited; // eax
  FLONG v52; // ecx
  int v53; // edx
  ULONG v54; // r8d
  int v55; // eax
  __int64 v56; // r8
  unsigned int v57; // eax
  int NearestIndexFromColorref; // eax
  struct Gre::Base::SESSION_GLOBALS *v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v68; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  _BYTE v76[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v77; // [rsp+118h] [rbp+18h]
  char v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+124h] [rbp+24h]
  int v80[6]; // [rsp+148h] [rbp+48h]
  _BYTE v81[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v82; // [rsp+198h] [rbp+98h]
  int v83[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v84; // [rsp+1A8h] [rbp+A8h]
  int v85[2]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v86[88]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v87; // [rsp+218h] [rbp+118h]

  v11 = a2;
  v71 = (__int64)a6;
  v70 = (__int64)a8;
  v74 = *((_QWORD *)a9 + 5);
  v73 = *((_QWORD *)a9 + 6);
  v75 = *((_QWORD *)a9 + 4);
  v63 = *((_DWORD *)a9 + 1);
  v72 = (__int64)a5;
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0LL || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
    v60 = 1;
    v13 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v81, v16, a3, v15);
    v69.right = v11->sizlBitmap.cx;
    v18 = Surface;
    v69.bottom = v11->sizlBitmap.cy;
    v77 = 0LL;
    v78 = 0;
    v79 = 0;
    *(_QWORD *)&v69.left = 0LL;
    MULTISURF::vInit((MULTISURF *)v76, v11, &v69);
    if ( v14 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v86, a1);
      v60 = EngDrawStream(v87, v80[0], (int)a3, (int)a4, v72, v71, a7, v70, (__int64)a9);
      v13 = v60;
      MULTISURF::~MULTISURF((MULTISURF *)v86);
    }
    v59 = Gre::Base::Globals(v19);
    v20 = v59;
    if ( !v18 )
    {
LABEL_5:
      MULTISURF::~MULTISURF((MULTISURF *)v76);
      return v13;
    }
    while ( 1 )
    {
      v68 = 0LL;
      v67 = 0LL;
      v66 = 0LL;
      v65 = 0LL;
      v22 = *((_QWORD *)v20 + 472);
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v76, (HDEV *)v82) )
        goto LABEL_64;
      v23 = *(struct _SURFOBJ **)v80;
      v24 = a4;
      v25 = v82;
      v26 = *(_QWORD *)v83 - 24LL;
      v27 = *(_QWORD *)v80 - 24LL;
      v61 = *(_QWORD *)v80 - 24LL;
      if ( !*((_DWORD *)v82 + 6) )
        goto LABEL_8;
      v30 = (HDEV)*((_QWORD *)v82 + 6);
      pulXlate = *(HDEV *)(v27 + 128);
      v32 = *((_QWORD *)v20 + 471);
      if ( ((_DWORD)v30[539] & 0x100) != 0 )
      {
        v33 = DrvRealizeHalftonePalette(v30, 0);
        v23 = *(struct _SURFOBJ **)v80;
        v32 = (__int64)v33;
        v27 = v61;
      }
      v34 = v26;
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_31;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v35 = 0;
LABEL_23:
          v36 = v59;
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            if ( v32 == *((_QWORD *)v59 + 471) )
              v35 = 0x2000;
            else
              v35 = 0x4000;
          }
          goto LABEL_36;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_31:
          v34 = v26;
          if ( v23 == v11 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v32 = *(_QWORD *)&a4[2].iSrcType;
          if ( !v32 )
            goto LABEL_63;
          if ( *(_DWORD *)(v27 + 96) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
          v34 = v26;
        }
      }
      v35 = 0;
      if ( pulXlate )
        goto LABEL_23;
      v36 = v59;
LABEL_36:
      v26 = v34;
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        v38 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v38 = 0;
        iUniq = 0;
      }
      v40 = *((_QWORD *)v36 + 471);
      *(_QWORD *)&v69.left = v34 + 128;
      v41 = *(_QWORD *)(v34 + 128);
      if ( a4 )
      {
        v42 = a4[2].pulXlate;
        v43 = a4[3].iUniq;
      }
      else
      {
        v42 = 0LL;
        v43 = 0;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v68,
                            (__int64)v42,
                            v43,
                            (__int64)pulXlate,
                            v41,
                            v40,
                            v32,
                            flXlate,
                            v38,
                            iUniq,
                            v35)
        || ((v24 = v68, !a4)
          ? (v44 = 0, v45 = 0, v46 = 0)
          : (v44 = a4[1].flXlate, v45 = *(_DWORD *)&a4[1].iSrcType, v46 = a4[1].iUniq),
            v47 = *(__int64 **)&v69.left,
            !(unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v67,
                             0LL,
                             0,
                             **(_QWORD **)&v69.left,
                             v22,
                             v32,
                             v32,
                             v44,
                             v45,
                             v46,
                             0)) )
      {
        v11 = a2;
LABEL_63:
        v20 = v59;
        goto LABEL_64;
      }
      *((_QWORD *)a9 + 5) = v67;
      if ( a4 )
      {
        v48 = a4[1].flXlate;
        v49 = *(_DWORD *)&a4[1].iSrcType;
        v50 = a4[1].iUniq;
      }
      else
      {
        v48 = 0;
        v49 = 0;
        v50 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj((Gre::Base *)&v66, 0LL, 0, v22, *v47, v32, v32, v48, v49, v50, 0);
      v11 = a2;
      if ( !inited )
        goto LABEL_63;
      v23 = *(struct _SURFOBJ **)v80;
      *((_QWORD *)a9 + 6) = v66;
      if ( v23 == a2 )
      {
        v20 = v59;
        goto LABEL_58;
      }
      if ( a4 )
      {
        v52 = a4[1].flXlate;
        v53 = *(_DWORD *)&a4[1].iSrcType;
        v54 = a4[1].iUniq;
      }
      else
      {
        v52 = 0;
        v53 = 0;
        v54 = 0;
      }
      v55 = EXLATEOBJ::bInitXlateObj(
              (Gre::Base *)&v65,
              0LL,
              0,
              *(_QWORD *)(v61 + 128),
              v22,
              *((_QWORD *)v59 + 471),
              v32,
              v52,
              v53,
              v54,
              0);
      v20 = v59;
      if ( v55 )
      {
        v56 = *((unsigned int *)a9 + 1);
        *((_QWORD *)a9 + 4) = v65;
        v57 = ulIndexToRGB(a2[1].hdev, *((_QWORD *)v59 + 471), v56);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *(_QWORD *)(v61 + 128),
                                     *((_QWORD *)v59 + 471),
                                     v57,
                                     1LL);
        v23 = *(struct _SURFOBJ **)v80;
        *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_58:
        v27 = v61;
        v25 = v82;
LABEL_8:
        v28 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
        if ( *(_QWORD *)(*((_QWORD *)v25 + 7) + 3400LL) )
          v28 = *(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))(*((_QWORD *)v25 + 7) + 3400LL);
        if ( v23->iType == 1 && *(_QWORD *)(v27 + 48) != *(_QWORD *)(v26 + 48) )
          v28 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
        v13 = OffDrawStream(
                v28,
                *(int **)v85,
                *(__int64 *)v83,
                (__int64)v23,
                v84,
                (__int64)v24,
                (__int128 *)v72,
                (__int64 *)v71,
                a7,
                v70,
                (__int64)a9) & v60;
        goto LABEL_12;
      }
LABEL_64:
      v13 = 0;
LABEL_12:
      *((_QWORD *)a9 + 6) = v73;
      *((_QWORD *)a9 + 5) = v74;
      *((_QWORD *)a9 + 4) = v75;
      *((_DWORD *)a9 + 1) = v63;
      v60 = v13;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v81) )
        goto LABEL_5;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return 1LL;
}
