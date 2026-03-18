/*
 * XREFs of GreDrawStream @ 0x14025D364
 * Callers:
 *     NtGdiDrawStream @ 0x140186D60 (NtGdiDrawStream.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140015184 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1400DCFA0 (-vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400DD084 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140154530 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14016DCD0 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1SURFREFDC@@QEAA@XZ @ 0x14025D338 (--1SURFREFDC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreDrawStream(Gre::Base *a1, unsigned int a2, int *a3)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // r13
  unsigned int v15; // edx
  int v16; // r11d
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  LONG *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v34; // [rsp+60h] [rbp-A0h]
  Gre::Base *v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  Gre::Base *v37; // [rsp+78h] [rbp-88h] BYREF
  Gre::Base *v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+8Ch] [rbp-74h]
  char *v40; // [rsp+90h] [rbp-70h]
  struct SURFACE *v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  struct _XLATEOBJ *v45; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v46; // [rsp+C0h] [rbp-40h]
  struct _RECTL v47; // [rsp+C8h] [rbp-38h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v48; // [rsp+D8h] [rbp-28h]
  Gre::Base *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v51[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct SURFACE *v52; // [rsp+110h] [rbp+10h]
  DC *v53[14]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v54; // [rsp+190h] [rbp+90h] BYREF
  __int64 v55; // [rsp+1A0h] [rbp+A0h]
  int v56; // [rsp+1A8h] [rbp+A8h]
  __int64 v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+200h] [rbp+100h]
  __int64 v59; // [rsp+208h] [rbp+108h]
  __int64 v60; // [rsp+210h] [rbp+110h]
  _QWORD v61[4]; // [rsp+220h] [rbp+120h] BYREF
  Gre::Base *v62; // [rsp+240h] [rbp+140h]
  Gre::Base *v63; // [rsp+248h] [rbp+148h]
  Gre::Base *v64; // [rsp+250h] [rbp+150h]
  struct _RECTL v65; // [rsp+270h] [rbp+170h] BYREF

  v49 = a1;
  v48 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v53, (HDC)a1);
  v5 = 0;
  memset(v51, 0, sizeof(v51));
  PushThreadGuardedObject(v51, v51, UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic);
  v52 = 0LL;
  v44 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v54);
  v6 = *((_QWORD *)v48 + 472);
  v43 = 0LL;
  v41 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0LL;
  v42 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v10 = 0LL;
  v36 = 0;
  v40 = 0LL;
  memset_0(v61, 0, 0x48uLL);
  v39 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v12, v11) + 96) + 140LL) )
  {
    if ( a2 >= 4 )
    {
      v13 = *a3;
      v14 = a3 + 1;
      if ( v13 == 1148352339 )
      {
        v15 = a2 - 4;
        v34 = a2 - 4;
        while ( 1 )
        {
          if ( v15 < 4 )
          {
            v5 = 1;
            goto LABEL_76;
          }
          if ( !*v14 )
            break;
          if ( *v14 != 1 )
          {
            if ( *v14 != 9 )
              goto LABEL_76;
            LODWORD(v35) = 60;
            if ( v15 < 0x3C )
              goto LABEL_76;
            v16 = v14[9];
            if ( (v16 & 0xFFFFFF80) != 0 )
              goto LABEL_76;
            if ( !v41 )
              goto LABEL_76;
            v17 = v14[5];
            if ( v17 < 0 )
              goto LABEL_76;
            v18 = v14[6];
            if ( v18 < 0 )
              goto LABEL_76;
            v19 = v14[7];
            if ( v19 > *((_DWORD *)v41 + 14) )
              goto LABEL_76;
            v20 = v14[8];
            if ( v20 > *((_DWORD *)v41 + 15) )
              goto LABEL_76;
            v21 = v19 - v17;
            v22 = v20 - v18;
            if ( v21 <= 0 )
              goto LABEL_76;
            if ( v22 <= 0 )
              goto LABEL_76;
            if ( (v16 & 0x20) == 0 )
            {
              v23 = v14[10];
              if ( v23 < 0 )
                goto LABEL_76;
              v24 = v14[11];
              if ( v24 < 0 )
                goto LABEL_76;
              v25 = v14[12];
              if ( v25 < 0 )
                goto LABEL_76;
              v26 = v14[13];
              if ( v26 < 0 || v23 > v21 || v24 > v21 || v25 > v22 || v26 > v22 || v23 + v24 > v21 || v26 + v25 > v22 )
                goto LABEL_76;
            }
            if ( (v16 & 0xC) == 0xC )
              goto LABEL_76;
            if ( (v16 & 8) != 0 )
            {
              v14[14] = ulGetNearestIndexFromColorref(v10, v7, (unsigned int)v14[14], 1LL);
            }
            else
            {
              v27 = v36;
              if ( (v16 & 4) != 0 )
                v27 = 1;
              v36 = v27;
            }
            v28 = v14 + 1;
            if ( v40 )
            {
              ERECTL::operator+=((__int64)&v47, (__int64)v28);
            }
            else
            {
              v47.left = *v28;
              v47.top = v14[2];
              v47.right = v14[3];
              v47.bottom = v14[4];
              v40 = (char *)v14;
            }
            goto LABEL_61;
          }
          if ( v40 )
          {
LABEL_63:
            if ( v53[0] && v41 )
            {
              v38 = 0LL;
              v37 = 0LL;
              v35 = 0LL;
              v61[0] = 72LL;
              v61[1] = 33488896LL;
              v61[2] = 0LL;
              if ( v36 )
              {
                if ( (unsigned int)(*(_DWORD *)(v43 + 96) - 1) <= 2
                  || !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v38, 0LL, 0, v10, v6, v7, v7, 0, 0, 0, 0)
                  || (v62 = v38,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v37, 0LL, 0, v8, v6, v9, v9, 0, 0, 0, 0))
                  || (v63 = v37,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v35, 0LL, 0, v6, v8, v9, v9, 0, 0, 0, 0)) )
                {
LABEL_74:
                  EXLATEOBJ::vAltUnlock(&v35);
                  EXLATEOBJ::vAltUnlock(&v37);
                  EXLATEOBJ::vAltUnlock(&v38);
                  goto LABEL_76;
                }
                v64 = v35;
              }
              else
              {
                v64 = 0LL;
                v63 = 0LL;
                v62 = 0LL;
              }
              if ( !(unsigned int)NtGdiDrawStreamInternal(
                                    v53,
                                    (struct EXFORMOBJ *)&v44,
                                    v41,
                                    v46,
                                    &v65,
                                    &v47,
                                    (int)v14 - (int)v40,
                                    v40,
                                    (struct _DRAWSTREAMINFO *)v61) )
                goto LABEL_74;
              v40 = 0LL;
              v36 = 0;
              EXLATEOBJ::vAltUnlock(&v35);
              EXLATEOBJ::vAltUnlock(&v37);
              EXLATEOBJ::vAltUnlock(&v38);
              v15 = v34;
            }
          }
          else
          {
            SURFREFDC::vUnlock((SURFREFDC *)v51);
            LODWORD(v35) = 8;
            if ( v34 < 8 )
              goto LABEL_76;
            if ( !v39 )
              goto LABEL_76;
            SURFREFDC::vLock((SURFREFDC *)v51, (HSURF)(int)v14[1]);
            v41 = v52;
            if ( !v52 )
              goto LABEL_76;
            v10 = *((_QWORD *)v52 + 16);
            v42 = v10;
            v7 = *((_QWORD *)v48 + 471);
            if ( !v10
              || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v42)
              || v29 == v43
              || *(_DWORD *)(v29 + 96) != 6
              || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  (Gre::Base *)&v45,
                                  0LL,
                                  *((_DWORD *)v53[0] + 30),
                                  v10,
                                  v8,
                                  v7,
                                  v9,
                                  *(_DWORD *)(*((_QWORD *)v53[0] + 122) + 184LL),
                                  *(_DWORD *)(*((_QWORD *)v53[0] + 122) + 176LL),
                                  0,
                                  0) )
            {
              goto LABEL_76;
            }
            v46 = v45;
LABEL_61:
            v15 = v34 - (_DWORD)v35;
            v34 = v15;
            v14 += (unsigned __int64)(unsigned int)v35 >> 2;
            if ( !v15 && v40 )
              goto LABEL_63;
          }
        }
        if ( !v40 )
        {
          LODWORD(v35) = 24;
          if ( v15 < 0x18
            || (Gre::Base *)(int)v14[1] != v49
            || !v53[0]
            || (*((_DWORD *)v53[0] + 9) & 0x10000) != 0
            || !v39 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v54, (struct XDCOBJ *)v53, 0) )
          {
            goto LABEL_76;
          }
          DC::QuickInitXform(v53[0], &v50, 516LL);
          v44 = v50;
          if ( (*(_BYTE *)(v50 + 32) & 1) == 0 )
            goto LABEL_76;
          v65 = *(struct _RECTL *)(v14 + 2);
          DC::bXform(v53[0], (const struct EXFORMOBJ *)&v44, (struct ERECTL *)&v65, v30);
          ERECTL::vOrder((ERECTL *)&v65);
          if ( (*((_DWORD *)v53[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v53, (struct ERECTL *)&v65);
          v31 = *((_QWORD *)v53[0] + 62);
          v43 = v31;
          if ( !v31 )
            goto LABEL_76;
          v8 = *(_QWORD *)(v31 + 128);
          v9 = *((_QWORD *)v53[0] + 11);
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v42) )
            goto LABEL_76;
          v39 = 1;
          goto LABEL_61;
        }
        goto LABEL_63;
      }
    }
  }
LABEL_76:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v45);
  DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v54);
  SURFREFDC::~SURFREFDC((SURFREFDC *)v51);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v53);
  return v5;
}
