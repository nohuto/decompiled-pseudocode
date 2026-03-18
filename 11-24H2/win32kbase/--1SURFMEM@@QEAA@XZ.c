/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x140038F80
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140038400 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1400F8510 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1400F8634 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1400F86A0 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     SURFACE_Free @ 0x14001A7E0 (SURFACE_Free.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngFreeUserMem @ 0x140087D70 (EngFreeUserMem.c)
 *     ??0?$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400B7E88 (--0-$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400B7FD4 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1400B820C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1401272A4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C2D34 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v2; // rcx
  struct _BASEOBJECT *v3; // rax
  __int64 v4; // rcx
  void *v5; // rsi
  struct _BASEOBJECT *v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned __int64 v10; // rax
  __int64 SessionState; // rax
  struct _W32PROCESS *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // r8d
  __int128 v19; // [rsp+40h] [rbp-19h]
  __int128 v20; // [rsp+58h] [rbp-1h] BYREF
  __int128 v21; // [rsp+68h] [rbp+Fh]
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  struct _BASEOBJECT *v23; // [rsp+C0h] [rbp+67h] BYREF
  struct _ERESOURCE *v24; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( ((_BYTE)this[1] & 1) != 0 )
    {
LABEL_3:
      HmgDecrementShareReferenceCountEx(v2, 0LL);
      return;
    }
    if ( !HmgRemoveObject(*(_QWORD *)v2, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL) )
    {
      *((_WORD *)*this + 7) |= 0x40u;
      if ( *((_DWORD *)this + 3) )
        OBJECT::InterlockedDecrementExclusiveLockCount(*this);
      v2 = *this;
      goto LABEL_3;
    }
    if ( ((_BYTE)this[1] & 8) != 0 && *((_QWORD *)*this + 16) )
    {
      v23 = (struct _BASEOBJECT *)*((_QWORD *)*this + 16);
      XEPALOBJ::vUnrefPalette(&v23);
      *((_QWORD *)*this + 16) = 0LL;
    }
    if ( *((_DWORD *)this + 3) )
      OBJECT::InterlockedDecrementExclusiveLockCount(*this);
    v3 = *this;
    v4 = *((unsigned __int16 *)*this + 51);
    v5 = (void *)*((_QWORD *)*this + 9);
    v6 = (struct _BASEOBJECT *)*((_QWORD *)*this + 31);
    v7 = *((_OWORD *)*this + 18);
    v20 = *((_OWORD *)*this + 17);
    v8 = *((_OWORD *)v3 + 19);
    v21 = v7;
    v9 = *(_OWORD *)((char *)v3 + 584);
    v22 = v8;
    v19 = *(_OWORD *)((char *)v3 + 600);
    if ( (v4 & 8) != 0 )
    {
      if ( (*((_DWORD *)v3 + 28) & 0x40000) != 0 && v5 )
      {
        if ( (v4 & 0x80u) == 0LL )
        {
          EngFreeUserMem(v5);
        }
        else
        {
          if ( *((_QWORD *)GreGetCurrentThread() + 8) )
          {
            v10 = *((_QWORD *)&v9 + 1);
            if ( DWORD2(v19) )
              v10 = (unsigned __int64)v5;
            v20 = 0uLL;
            v21 = v10;
            *(_QWORD *)&v22 = 0LL;
            DWORD2(v22) = 1;
            Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v20);
            *(_QWORD *)&v20 = 0LL;
            *((_QWORD *)&v21 + 1) = 0LL;
            if ( DWORD2(v19) )
              v5 = (void *)*((_QWORD *)&v9 + 1);
            *((_QWORD *)&v20 + 1) = 0LL;
            *(_QWORD *)&v21 = v5;
            *(_QWORD *)&v22 = 0LL;
            DWORD2(v22) = 2;
            Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v20);
          }
          if ( (_QWORD)v9 )
          {
            v23 = (struct _BASEOBJECT *)v9;
            Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v23);
          }
          else
          {
            GrepCaptureLiveMemoryDump(0x190u, 68LL, 2LL, 0LL, 0LL, 0);
          }
        }
      }
    }
    else if ( (v4 & 0x800) != 0 )
    {
      SessionState = W32GetSessionState(v4);
      SEMOBJ<36>::SEMOBJ<36>(&v24, *(_QWORD *)(SessionState + 88));
      v12 = (struct _W32PROCESS *)*((_QWORD *)*this + 33);
      if ( v12 )
      {
        PsGetCurrentProcessWin32Process();
        v13 = (_QWORD *)((char *)*this + 528);
        v14 = (_QWORD *)*v13;
        if ( (_QWORD *)*v13 != v13 )
        {
          if ( (_QWORD *)v14[1] != v13 || (v15 = (_QWORD *)*((_QWORD *)*this + 67), (_QWORD *)*v15 != v13) )
            __fastfail(3u);
          *v15 = v14;
          v14[1] = v15;
        }
        if ( v5 && v6 )
        {
          v16 = GrepW32PidFromW32Process(v12);
          Gre::MapViewOfSectionObj::Unmap(v16, v5);
        }
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v20);
      if ( v6 )
      {
        v23 = v6;
        Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v23);
      }
      SEMOBJ<36>::vUnlock(&v24, v17, v18);
    }
    else if ( (v4 & 0x10) != 0 )
    {
      vFreeKernelSection(v5);
    }
    SURFACE_Free(*this);
  }
}
