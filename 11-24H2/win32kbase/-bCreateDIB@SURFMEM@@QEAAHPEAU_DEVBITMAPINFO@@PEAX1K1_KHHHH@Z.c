/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140038400 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1400F86A0 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     SURFACE_Free @ 0x14001A7E0 (SURFACE_Free.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001DFD0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     EngAllocUserMemEx @ 0x1400873D8 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x140087D70 (EngFreeUserMem.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1400B820C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     SURFACE_Allocate @ 0x1400CE250 (SURFACE_Allocate.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EC06C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1401272A4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x140173FD0 (-AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C29B8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C2ACC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C2C8C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C2D34 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // eax
  __int16 v14; // r15
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  int v28; // eax
  int v29; // eax
  void *v30; // rsi
  unsigned __int64 v31; // rcx
  __int64 v32; // r15
  _DWORD *v33; // r12
  int v34; // eax
  int v35; // eax
  PVOID v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edi
  HPALETTE v42; // rdx
  __int64 v43; // rdx
  _WORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  _DWORD *v47; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  char *v54; // r8
  struct _GRETHREAD *v55; // rax
  int v56; // eax
  __int64 SessionState; // rax
  __int64 v58; // rdx
  struct OBJECT *v59; // rdx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rdi
  SURFACE *v63; // rdi
  unsigned __int64 CurrentProcessWin32Process; // rax
  _OWORD *v65; // rax
  int v66; // [rsp+30h] [rbp-C1h]
  void *v67; // [rsp+38h] [rbp-B9h] BYREF
  void *v68; // [rsp+40h] [rbp-B1h] BYREF
  int v69; // [rsp+48h] [rbp-A9h]
  struct _BASEOBJECT *v70; // [rsp+50h] [rbp-A1h] BYREF
  _DWORD *v71; // [rsp+58h] [rbp-99h]
  __int64 v72; // [rsp+60h] [rbp-91h] BYREF
  __int64 v73; // [rsp+68h] [rbp-89h]
  PVOID v74; // [rsp+70h] [rbp-81h]
  __int64 v75; // [rsp+78h] [rbp-79h]
  __int64 v76; // [rsp+80h] [rbp-71h]
  int v77; // [rsp+88h] [rbp-69h]
  __int128 v78; // [rsp+90h] [rbp-61h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-51h]
  __int128 v80; // [rsp+B0h] [rbp-41h]
  _OWORD v81[2]; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-11h]
  void *v83; // [rsp+140h] [rbp+4Fh] BYREF
  int v84; // [rsp+148h] [rbp+57h]
  PVOID pv; // [rsp+150h] [rbp+5Fh] BYREF
  void *v86; // [rsp+158h] [rbp+67h]

  v86 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v11 = *((_DWORD *)a2 + 1);
  v69 = 1;
  LOWORD(v66) = 0;
  v14 = 0;
  v15 = 0;
  if ( v11 > 0x7FFFFFFF )
    return 0LL;
  v16 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v16 > 0x7FFFFFFF )
    return 0LL;
  v17 = v11;
  v18 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 6u )
  {
    v28 = v18 - 7;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( (unsigned int)(v29 - 1) > 1 )
          return 0LL;
      }
    }
    LODWORD(v24) = 0;
    v15 = 1;
    goto LABEL_24;
  }
  if ( v18 == 6 )
  {
    v24 = 4 * v17;
  }
  else
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
              return 0LL;
            v23 = 3 * (v17 + 1);
          }
          else
          {
            v23 = 2 * v17 + 2;
          }
        }
        else
        {
          v23 = v17 + 3;
        }
        v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_18;
      }
      v25 = 0x7FFFFFFFFFFFFFFCLL;
      v26 = (unsigned __int64)(v17 + 7) >> 1;
    }
    else
    {
      v25 = 0x1FFFFFFFFFFFFFFCLL;
      v26 = (unsigned __int64)(v17 + 31) >> 3;
    }
    v24 = v25 & v26;
  }
LABEL_18:
  if ( v24 > 0x7FFFFFFF )
    return 0LL;
LABEL_24:
  v67 = 0LL;
  v84 = 0;
  v30 = 0LL;
  v68 = 0LL;
  LOBYTE(v83) = 0;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( !a3 )
  {
    if ( v15 )
      v31 = *((unsigned int *)a2 + 3);
    else
      v31 = (unsigned int)v24 * v16;
    v32 = v31 + 696;
    if ( v31 + 696 < v31 || (unsigned __int64)v32 > 0x7FFFFFFF )
      return 0LL;
    v33 = (_DWORD *)((char *)a2 + 24);
    v34 = *((_DWORD *)a2 + 6);
    if ( (v34 & 0x40000) != 0 && v32 > 4096 )
    {
      v34 |= 8u;
      *v33 = v34;
    }
    if ( (v34 & 8) != 0 )
    {
      if ( (v34 & 0x80u) == 0 )
      {
        v35 = EngAllocUserMemEx((int)v32, v16, &pv);
      }
      else
      {
        v35 = AllocateSharedSection(v32, &v67, &v68, &pv);
        v30 = v67;
      }
      if ( v35 < 0 )
        return 0LL;
      v36 = pv;
    }
    else
    {
      if ( (v34 & 0x810) == 0 )
        goto LABEL_50;
      if ( (v34 & 0x800) != 0 )
      {
        if ( !W32PIDLOCK::bInit((W32PIDLOCK *)&v78) )
          return 0LL;
        AllocateKernelSectionForUserMapping(v32 - 696, &v67);
        v30 = v67;
        if ( !v67 )
        {
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v78);
          return 0LL;
        }
      }
      else
      {
        AllocateKernelSection(v32, v16, &pv);
      }
      v36 = pv;
      if ( !pv && !v30 )
        goto LABEL_50;
      v66 = *v33 & 0x800 | 0x10;
    }
    if ( v36 || v30 )
    {
LABEL_54:
      v14 = v66;
      goto LABEL_63;
    }
LABEL_50:
    v37 = (unsigned int)(v32 - 696);
    if ( (*v33 & 2) != 0 )
      v38 = (void *)PALLOCNOZ(v37, 0x6D627047u);
    else
      v38 = (void *)PALLOCMEM(v37, 1835167815LL);
    pv = v38;
    LOBYTE(v83) = 1;
    if ( !v38 )
      return 0LL;
    goto LABEL_54;
  }
  if ( a9 )
  {
    v39 = v15 ? *((unsigned int *)a2 + 3) : (unsigned int)v24 * v16;
    if ( v39 > 0x7FFFFFFF )
      return 0LL;
  }
  v33 = (_DWORD *)((char *)a2 + 24);
  if ( (*((_DWORD *)a2 + 6) & 0x800) != 0 )
  {
    if ( !W32PIDLOCK::bInit((W32PIDLOCK *)&v78) )
      return 0LL;
    v14 = 2048;
    v84 = 1;
  }
LABEL_63:
  v40 = SURFACE_Allocate();
  *(_QWORD *)this = v40;
  if ( v40 )
  {
    *(_QWORD *)(v40 + 56) = *(_QWORD *)((char *)a2 + 4);
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
    v42 = (HPALETTE)*((_QWORD *)a2 + 2);
    if ( v42 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v70, v42);
      v43 = *(_QWORD *)this;
      if ( v70 )
      {
        *(_QWORD *)(v43 + 128) = v70;
        v70 = 0LL;
      }
      else
      {
        *(_QWORD *)(v43 + 128) = 0LL;
      }
      EPALOBJ::~EPALOBJ(&v70);
      v44 = (_WORD *)((char *)a2 + 24);
    }
    else
    {
      v44 = v33;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    }
    v45 = *(_QWORD *)this;
    v71 = v44;
    *(_QWORD *)(v45 + 72) = pv;
    v46 = *(_QWORD *)this;
    pv = 0LL;
    *(_BYTE *)(v46 + 688) = (_BYTE)v83;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
    *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *v44 & 0x89;
    *(_DWORD *)(*(_QWORD *)this + 208LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v86;
    *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = a6;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
    v47 = v71;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 112LL) = *v47 & 0x40000;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    CurrentThread = GreGetCurrentThread();
    if ( CurrentThread )
      *((_QWORD *)CurrentThread + 36) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
    v49 = (_QWORD *)(*(_QWORD *)this + 232LL);
    v49[1] = v49;
    *v49 = v49;
    *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    v50 = (_QWORD *)(*(_QWORD *)this + 528LL);
    v50[1] = v50;
    *v50 = v50;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    if ( v84 )
      *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
    if ( a6 && !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
    v51 = *(_QWORD *)this;
    if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
    {
      *(_WORD *)(v51 + 102) &= ~0x800u;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      else
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    }
    else
    {
      *(_DWORD *)(v51 + 64) = *((_DWORD *)a2 + 2) * v24;
      v52 = *(_QWORD *)this;
      if ( (*v71 & 1) != 0 )
      {
        *(_DWORD *)(v52 + 88) = v24;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      }
      else
      {
        *(_DWORD *)(v52 + 88) = -(int)v24;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                            + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v24);
      }
    }
    v53 = *(_QWORD *)this;
    if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
    {
      v54 = (char *)v68;
      *(_QWORD *)(v53 + 584) = v30;
      *(_QWORD *)(*(_QWORD *)this + 592LL) = v54;
      *(_QWORD *)(*(_QWORD *)this + 600LL) = &v54[*(_QWORD *)(*(_QWORD *)this + 80LL)
                                                - *(_QWORD *)(*(_QWORD *)this + 72LL)];
      *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
      v55 = GreGetCurrentThread();
      if ( v55 && *((_QWORD *)v55 + 8) )
      {
        v56 = UMPDGetThreadClientPID(v55);
        v53 = *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)this + 612LL) = v56;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
      }
    }
    SessionState = W32GetSessionState(v53);
    v58 = *(_QWORD *)this;
    *(_DWORD *)(v58 + 92) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SessionState + 88) + 4252LL));
    memset(v81, 0, sizeof(v81));
    PushThreadGuardedObject(
      v81,
      v81,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v59 = *(struct OBJECT **)this;
    LOBYTE(v60) = 1;
    v82 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v81, v59, v60, a8 != 0, 5) )
    {
      v61 = a11;
      *((_DWORD *)this + 3) = a11;
      if ( v61 )
      {
        v62 = *(_QWORD *)this;
        if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 0xFFFF )
          OBJECT::ReportOverflow(*(OBJECT **)this, 2u);
        _InterlockedIncrement((volatile signed __int32 *)(v62 + 12));
      }
      *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
      v63 = *(SURFACE **)this;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      SURFACE::vAppContainerOwner(v63, (struct _W32PROCESS *)CurrentProcessWin32Process);
      v41 = v69;
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        v68 = *(void **)(*(_QWORD *)this + 128LL);
        XEPALOBJ::vUnrefPalette((struct _BASEOBJECT **)&v68);
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      SURFACE_Free(*(_QWORD **)this);
      *(_QWORD *)this = 0LL;
      v41 = 0;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v81);
    if ( v41 )
    {
      if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v80 + 1) )
      {
        *(_QWORD *)(*(_QWORD *)this + 248LL) = v67;
        v65 = *(_OWORD **)this;
        v65[17] = v78;
        v65[18] = v79;
        v65[19] = v80;
        *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
      }
      return v41;
    }
    v30 = v67;
  }
  else
  {
    v41 = 0;
  }
  if ( pv || v30 )
  {
    if ( (*v33 & 8) != 0 )
    {
      if ( (*v33 & 0x80u) == 0 )
      {
        EngFreeUserMem(pv);
        return v41;
      }
      if ( *((_QWORD *)GreGetCurrentThread() + 8) )
      {
        v72 = 0LL;
        v73 = 0LL;
        v74 = pv;
        v75 = 0LL;
        v76 = 0LL;
        v77 = 1;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v72);
        v72 = 0LL;
        v73 = 0LL;
        v74 = pv;
        v75 = 0LL;
        v76 = 0LL;
        v77 = 2;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v72);
        if ( !v30 )
        {
LABEL_112:
          GrepCaptureLiveMemoryDump(0x190u, 68LL, 2LL, 0LL, 0LL, 0);
          return v41;
        }
LABEL_117:
        v83 = v30;
        Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v83);
      }
    }
    else
    {
      if ( (v14 & 0x800) == 0 )
      {
        if ( (v14 & 0x10) != 0 )
        {
          vFreeKernelSection(pv);
        }
        else if ( (_BYTE)v83 )
        {
          if ( pv )
            GreDeleteFastMutex((char *)pv);
        }
        return v41;
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v78);
      if ( !v84 )
      {
        if ( !v30 )
          goto LABEL_112;
        goto LABEL_117;
      }
    }
  }
  return v41;
}
