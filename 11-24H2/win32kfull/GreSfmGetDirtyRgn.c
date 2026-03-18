/*
 * XREFs of GreSfmGetDirtyRgn @ 0x140022B9C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14017B400 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x140024C24 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        Gre::Base *a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  HSEMAPHORE v13; // rdi
  unsigned int DirtyRgn; // ebx
  struct _GRETHREAD *v15; // rax
  _BYTE v18[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v19; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v13 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 520LL);
  GreAcquireSemaphoreSharedInternal(v13);
  GrepAcquireLockValidate<7>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v18, (HLSURF)a1);
      if ( v19 )
        DirtyRgn = GrepSfmGetDirtyRgn(v19, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        DirtyRgn = -1073741816;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v18);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"DwmState", v13);
  v15 = GreGetCurrentThreadCrossSessionCheck();
  if ( v15 )
  {
    if ( (*((_BYTE *)v15 + 15))-- == 1 )
      *(_QWORD *)v15 &= ~0x80uLL;
    if ( !*(_QWORD *)v15 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v13);
  return DirtyRgn;
}
