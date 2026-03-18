/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C007D354
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C007D2FC (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0264600 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C0264870 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001E4F0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001F36C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0026F2C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C007E150 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007E20C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     PALLOCMEM @ 0x1C013D770 (PALLOCMEM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     HT_CreateHalftoneBrush @ 0x1C024F4E8 (HT_CreateHalftoneBrush.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0264524 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026453C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHH@Z @ 0x1C02646C8 (-bDeleteSurface@SURFACE@@QEAAHH@Z.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C02646EC (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C026472C (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     EngDitherColor @ 0x1C02887F0 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DBA68 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02DBF60 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02DC074 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02DC114 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02DDDF8 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  __int64 (__fastcall *v3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // r15
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  __int64 v7; // rdi
  struct _SURFOBJ *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // r14d
  bool v11; // dl
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  struct XLATE *v15; // rbx
  unsigned int NearestIndexFromColorref; // r12d
  unsigned int v17; // r15d
  unsigned int v18; // eax
  struct _XLATEOBJ *v19; // r14
  HDEV v20; // rax
  __int64 v21; // rcx
  HDEV v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  ULONG *v25; // r9
  ULONG v26; // eax
  ULONG v27; // eax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  bool v29; // dl
  Gre::Base *v30; // rcx
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  int v32; // edx
  HPALETTE *v33; // r15
  HDEV v34; // rax
  int v35; // r8d
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  char v42; // cl
  __int128 *v43; // rax
  __int64 v44; // xmm1_8
  __int64 HalftoneBrush; // rcx
  SURFACE *v46; // rax
  int v47; // edx
  void *v48; // rbx
  __int64 v50; // rbx
  int v51; // eax
  int v52; // r15d
  HSURF v53; // r12
  void *v54; // rdx
  int v55; // eax
  HBITMAP IcmDIB; // rax
  bool v57; // zf
  __int64 v58; // rdx
  __int64 v59; // r10
  int v60; // eax
  __int64 v61; // r9
  int Xlate; // eax
  int v63; // r8d
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rax
  bool v67; // cf
  unsigned int v68; // ebx
  char v69; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v70[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+78h] [rbp-88h] BYREF
  struct XLATE *v74; // [rsp+80h] [rbp-80h] BYREF
  SURFACE *v75; // [rsp+88h] [rbp-78h] BYREF
  char v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+94h] [rbp-6Ch]
  __int64 v78; // [rsp+98h] [rbp-68h] BYREF
  int (*v79)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+A0h] [rbp-60h]
  unsigned int v80; // [rsp+A8h] [rbp-58h]
  char v81[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v82; // [rsp+B8h] [rbp-48h] BYREF
  int v83; // [rsp+BCh] [rbp-44h]
  int v84; // [rsp+C0h] [rbp-40h]
  int v85; // [rsp+C4h] [rbp-3Ch]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  int v87; // [rsp+D0h] [rbp-30h]
  int v88; // [rsp+D4h] [rbp-2Ch]
  _DWORD v89[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-20h]
  __int64 *v91; // [rsp+E8h] [rbp-18h]
  _BYTE v92[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v93; // [rsp+110h] [rbp+10h]
  __int128 v94; // [rsp+118h] [rbp+18h] BYREF
  __int64 v95; // [rsp+128h] [rbp+28h]

  v3 = a3;
  v79 = (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))a3;
  v6 = Gre::Base::Globals(a1);
  v80 = *((_DWORD *)a1 + 20);
  if ( v80 == 12 )
    return 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SURFREF::SURFREF((SURFREF *)v92);
  v9 = *((_QWORD *)a2 + 10);
  v10 = 1;
  v75 = 0LL;
  v76 = 0;
  v77 = 0;
  hdev = *(HDEV *)(v9 + 48);
  v74 = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v11 = 1, v3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v81, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 20);
  if ( v13 >= 6 )
  {
    if ( v13 < 0xC )
    {
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        goto LABEL_71;
      if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
        *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12));
      v20 = hdev;
      if ( ((_DWORD)hdev[448] & 0x200000) != 0 && v3 != EngRealizeBrush )
      {
        if ( (unsigned int)v3(
                             (struct _BRUSHOBJ *)a2,
                             (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                             0LL,
                             0LL,
                             0LL,
                             *((_DWORD *)a2 + 6) | 0x80000000) )
        {
LABEL_72:
          NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v81);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70);
          SURFMEM::~SURFMEM((SURFMEM *)&v75);
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v74);
          SURFREF::~SURFREF((SURFREF *)v92);
          return v10;
        }
        v20 = hdev;
      }
      v21 = *((_QWORD *)a2 + 10);
      v85 = 0;
      v88 = 0;
      v82 = *(_DWORD *)(v21 + 96) == 1 ? 1 : *((_DWORD *)v20 + 519);
      if ( !*((_WORD *)v20 + 1040) )
        goto LABEL_71;
      if ( !*((_WORD *)v20 + 1041) )
        goto LABEL_71;
      v83 = *((unsigned __int16 *)v20 + 1040);
      v84 = *((unsigned __int16 *)v20 + 1041);
      v86 = 0LL;
      v87 = 1;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_71;
      v22 = hdev;
      v23 = *((unsigned int *)a2 + 6);
      v24 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
      v25 = (ULONG *)*((_QWORD *)v75 + 9);
      if ( *((_QWORD *)hdev + 346) )
      {
        if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
          v22 = (HDEV)*((_QWORD *)hdev + 221);
        v26 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, ULONG *))hdev + 346))(v22, v24, v23, v25);
      }
      else
      {
        v26 = EngDitherColor(hdev, v24, v23, v25);
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v19 = (struct _XLATEOBJ *)((char *)v6 + 6896);
LABEL_124:
        v58 = v93;
        goto LABEL_125;
      }
      if ( v27 != 1 )
      {
LABEL_71:
        v10 = 0;
        goto LABEL_72;
      }
      if ( v3 != EngRealizeBrush
        || (IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v6 + 10)),
            v29 = 1,
            IsSemaphoreOwnedOrSharedByCurrentThread) )
      {
        v29 = 0;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v69, v29);
      if ( v3 == EngRealizeBrush )
      {
        v73 = 1;
        v31 = Gre::Base::Globals(v30);
        GreAcquireSemaphore(*((_QWORD *)v31 + 17));
      }
      else
      {
        v73 = 0;
      }
      if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
      {
        v33 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
        LODWORD(v78) = *((_DWORD *)a2 + 6);
        v91 = &v78;
        v34 = hdev;
        LODWORD(v71) = 0;
        v90 = 1LL;
        v89[0] = 262400;
        v35 = (_DWORD)hdev[587] & 0x100;
        v89[1] = 255;
        v36 = *((_DWORD *)a2 + 18);
        LODWORD(v71) = v35 == 0 ? 2 : 0;
        if ( (v36 & 4) != 0 || (v36 & 0x20) == 0 && (v36 & 3) != 0 )
          LOBYTE(v71) = v35 != 0 ? 16 : 18;
        if ( *((unsigned __int16 *)v33 + 4) != v83 || *((unsigned __int16 *)v33 + 5) != v84 )
        {
          LOBYTE(v32) = v35 == 0 ? 2 : 0;
          SURFACE::bDeleteSurface(v75, v32);
          v83 = *((unsigned __int16 *)v33 + 4);
          v84 = *((unsigned __int16 *)v33 + 5);
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_70;
          v34 = hdev;
        }
        v37 = *((_DWORD *)v34 + 586);
        if ( v37 )
        {
          v38 = v37 - 2;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  if ( v41 != 2 )
                    goto LABEL_70;
                  BYTE1(v71) = 6;
                }
                else
                {
                  BYTE1(v71) = -3;
                }
              }
              else
              {
                BYTE1(v71) = -2;
              }
            }
            else
            {
              BYTE1(v71) = -1;
            }
          }
          else
          {
            BYTE1(v71) = 2;
          }
        }
        else
        {
          BYTE1(v71) = 1;
        }
        v42 = *((_BYTE *)v34 + 2336);
        v43 = (__int128 *)*((_QWORD *)a2 + 7);
        BYTE3(v71) = v42;
        BYTE2(v71) = 4;
        v94 = *v43;
        v44 = *((_QWORD *)v43 + 2);
        WORD5(v94) = 10000;
        v95 = v44;
        *(_DWORD *)((char *)&v94 + 6) = 655370000;
        HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush(
                                        (_DWORD)v33,
                                        (unsigned int)&v94,
                                        (unsigned int)v89,
                                        v71,
                                        0LL);
        v46 = v75;
        if ( (int)HalftoneBrush <= *((_DWORD *)v75 + 16) )
        {
LABEL_74:
          if ( (int)HT_CreateHalftoneBrush(
                      (_DWORD)v33,
                      (unsigned int)&v94,
                      (unsigned int)v89,
                      v71,
                      *((_QWORD *)v46 + 9)) <= 0 )
            goto LABEL_70;
          if ( ((_DWORD)hdev[10] & 0x200) != 0 )
          {
            v19 = (struct _XLATEOBJ *)((char *)v6 + 6896);
          }
          else
          {
            EPALOBJ::EPALOBJ((EPALOBJ *)&v71, *v33);
            v50 = v71;
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v74,
                                  *((_QWORD *)a2 + 8),
                                  *((unsigned int *)a2 + 18),
                                  v71,
                                  *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                                  *((_QWORD *)a2 + 12),
                                  *((_QWORD *)a2 + 12),
                                  *((_DWORD *)a2 + 12),
                                  *((_DWORD *)a2 + 13),
                                  0xFFFFFF,
                                  0) )
            {
              if ( v50 )
                DEC_SHARE_REF_CNT(v50);
              goto LABEL_70;
            }
            v19 = (struct _XLATEOBJ *)v74;
            if ( v50 )
              DEC_SHARE_REF_CNT(v50);
          }
          HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v73);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v69);
LABEL_123:
          v3 = (__int64 (__fastcall *)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))v79;
          goto LABEL_124;
        }
        v48 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
        if ( v48 )
        {
          SURFACE::bDeleteSurface(v75, v47);
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)&v82, v48, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            Win32FreePool(v48);
            goto LABEL_70;
          }
          *((_BYTE *)v75 + 688) = 1;
          v46 = v75;
          goto LABEL_74;
        }
      }
LABEL_70:
      HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v73);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v69);
      goto LABEL_71;
    }
    v51 = *((_DWORD *)a2 + 18);
    v52 = 0;
    v53 = (HSURF)*((_QWORD *)a1 + 3);
    if ( (v51 & 1) != 0 )
    {
      v54 = (void *)*((_QWORD *)a2 + 8);
      if ( !v54 )
      {
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
          goto LABEL_97;
        goto LABEL_96;
      }
      v55 = *((_DWORD *)a1 + 10);
      if ( (v55 & 0x80u) != 0 )
      {
        if ( *((_DWORD *)a1 + 21) || (IcmDIB = BRUSH::hFindIcmDIB(a1, v54)) == 0LL )
        {
LABEL_97:
          SURFREF::vAltLock((SURFREF *)v92, v53);
          v58 = v93;
          if ( !v93 )
            goto LABEL_132;
          v59 = *((_QWORD *)a2 + 10);
          v60 = *((_DWORD *)a1 + 10);
          v61 = *(_QWORD *)(v93 + 128);
          if ( (v60 & 0x1000) != 0 )
          {
            Xlate = EXLATEOBJ::bMakeXlate(
                      &v74,
                      *(_QWORD *)(v61 + 112),
                      *((_QWORD *)a2 + 12),
                      *((_QWORD *)a2 + 10),
                      *(_DWORD *)(v61 + 60),
                      *(_DWORD *)(v61 + 28));
LABEL_121:
            if ( !Xlate )
              goto LABEL_132;
            v19 = (struct _XLATEOBJ *)v74;
            v8 = 0LL;
            goto LABEL_123;
          }
          if ( (v60 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v93 + 96) == *(_DWORD *)(v59 + 96) )
            {
              v3 = (__int64 (__fastcall *)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))v79;
              v19 = (struct _XLATEOBJ *)((char *)v6 + 6896);
              v8 = 0LL;
LABEL_125:
              if ( v58 )
              {
                v66 = v58 + 24;
                v67 = v58 != 0;
LABEL_129:
                v7 = v66 & -(__int64)v67;
LABEL_131:
                v68 = v3(
                        (struct _BRUSHOBJ *)a2,
                        (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                        (struct _SURFOBJ *)v7,
                        v8,
                        v19,
                        v80);
                NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v81);
                NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70);
                SURFMEM::~SURFMEM((SURFMEM *)&v75);
                EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v74);
                SURFREF::~SURFREF((SURFREF *)v92);
                return v68;
              }
              if ( v75 )
              {
                v66 = (__int64)v75 + 24;
                v67 = v75 != 0LL;
                goto LABEL_129;
              }
              if ( v3 != EngRealizeBrush )
                goto LABEL_131;
              goto LABEL_132;
            }
            goto LABEL_132;
          }
          if ( (*(_WORD *)(v93 + 100) || *(_QWORD *)(v93 + 24)) && *(HDEV *)(v93 + 48) != hdev )
            goto LABEL_132;
          if ( !v61 )
          {
            v63 = *(_DWORD *)(v93 + 96);
            if ( v63 == *((_DWORD *)hdev + 519) )
            {
              if ( ((_DWORD)hdev[535] & 0x100) == 0 )
              {
                v61 = *((_QWORD *)hdev + 222);
                goto LABEL_117;
              }
            }
            else
            {
              if ( v63 == *((_DWORD *)a2 + 19) )
              {
                v61 = *((_QWORD *)a2 + 13);
                goto LABEL_117;
              }
              if ( v63 == 3 )
              {
                if ( ((_DWORD)hdev[535] & 0x100) == 0 )
                {
                  v61 = *((_QWORD *)v6 + 752);
                  goto LABEL_117;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_132;
              }
            }
            v61 = 0LL;
          }
LABEL_117:
          if ( v52 )
          {
            v64 = *((unsigned int *)a2 + 18);
            v65 = *((_QWORD *)a2 + 8);
          }
          else
          {
            v64 = 0LL;
            v65 = 0LL;
          }
          Xlate = EXLATEOBJ::bInitXlateObj(
                    &v74,
                    v65,
                    v64,
                    v61,
                    *(_QWORD *)(v59 + 128),
                    *((_QWORD *)a2 + 12),
                    *((_QWORD *)a2 + 12),
                    *((_DWORD *)a2 + 12),
                    *((_DWORD *)a2 + 13),
                    0xFFFFFF,
                    0);
          goto LABEL_121;
        }
        v53 = (HSURF)IcmDIB;
LABEL_96:
        v52 = 1;
        goto LABEL_97;
      }
      v57 = (v55 & 0x20000) == 0;
    }
    else
    {
      if ( (v51 & 4) != 0 )
        goto LABEL_96;
      v57 = (v51 & 2) == 0;
    }
    if ( v57 )
      goto LABEL_97;
    goto LABEL_96;
  }
  LOBYTE(v12) = 5;
  v14 = HmgShareLockCheck(*((_QWORD *)hdev + v13 + 181), v12);
  v93 = v14;
  if ( v14 )
  {
    v78 = (v14 + 24) & -(__int64)(v14 != 0);
    v74 = pCreateXlate(2u);
    v15 = v74;
    if ( v74 )
    {
      NearestIndexFromColorref = *((_DWORD *)a2 + 13);
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      {
        v17 = *((_DWORD *)a2 + 6);
        *((_DWORD *)v15 + 21) = NearestIndexFromColorref;
        *((_DWORD *)v15 + 22) = v17;
        XLATE::vCheckForICM(v15, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      }
      else
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *((_QWORD *)a2 + 11),
                                     *((_QWORD *)a2 + 12),
                                     NearestIndexFromColorref,
                                     1LL);
        v18 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
        v17 = v18;
        if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
          && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
          && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
          && NearestIndexFromColorref == v18 )
        {
          v17 = 1 - NearestIndexFromColorref;
        }
        *((_DWORD *)v15 + 21) = NearestIndexFromColorref;
        *((_DWORD *)v15 + 22) = v17;
        XLATE::vCheckForICM(v15, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        XLATE::vCheckForTrivial(v15);
      }
      *((_QWORD *)v15 + 5) = *((_QWORD *)v6 + 754);
      v19 = (struct _XLATEOBJ *)v15;
      *((_QWORD *)v15 + 6) = *((_QWORD *)a2 + 11);
      *((_QWORD *)v15 + 7) = *((_QWORD *)a2 + 12);
      *((_DWORD *)v15 + 19) |= 0x100u;
      *((_DWORD *)v15 + 7) = NearestIndexFromColorref;
      v8 = (struct _SURFOBJ *)v78;
      *((_DWORD *)v15 + 8) = v17;
      goto LABEL_123;
    }
  }
LABEL_132:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v81);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70);
  SURFMEM::~SURFMEM((SURFMEM *)&v75);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v74);
  SURFREF::~SURFREF((SURFREF *)v92);
  return 0LL;
}
