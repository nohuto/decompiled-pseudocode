/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C00C786C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00C7670 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C00C7A08 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
  struct Gre::Base::SESSION_GLOBALS *v13; // rdi
  Gre::Base *v14; // rcx
  __int64 v15; // rdx
  struct SFMLOGICALSURFACE *v16; // rax
  unsigned int DirtyRgn; // ebx
  _BYTE v19[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v20; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v13 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v13 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9));
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v14) )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
      v16 = 0LL;
      v20 = 0LL;
      if ( a1 && (LOBYTE(v15) = 18, v16 = (struct SFMLOGICALSURFACE *)HmgShareLockCheck(a1, v15), (v20 = v16) != 0LL) )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v16, a2, a3, a4, a5, a6, a7, a8, a9);
        v16 = v20;
      }
      else
      {
        DirtyRgn = -1073741816;
      }
      if ( v16 )
        DEC_SHARE_REF_CNT(v16);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
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
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  return DirtyRgn;
}
