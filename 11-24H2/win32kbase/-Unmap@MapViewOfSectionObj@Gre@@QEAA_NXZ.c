/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1400B820C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C2D34 (-vFreeKernelSection@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x1400B832C (UmfdHostLifeTimeManager_MmUnmapViewOfSection.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

bool __fastcall Gre::MapViewOfSectionObj::Unmap(Gre::MapViewOfSectionObj *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool result; // al
  int (*v9)(void); // rax
  NTSTATUS v10; // eax
  struct _GRETHREAD *CurrentThread; // rax
  void *v12; // rbx
  int v13; // eax
  __int64 CurrentProcess; // rax

  v5 = *((unsigned int *)this + 10);
  if ( (_DWORD)v5 && (v5 = (unsigned int)(v5 - 1), (_DWORD)v5) )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( !(_DWORD)v6 )
    {
      CurrentThread = GreGetCurrentThread(v6);
      v12 = (void *)*((_QWORD *)this + 2);
      v13 = UMPDGetThreadClientPID(CurrentThread);
      Gre::MapViewOfSectionObj::Unmap(v13, v12);
      return 0;
    }
    v7 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
        return 0;
      v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, a2) + 24) + 1464LL);
      if ( !v9 || v9() < 0 )
        return 0;
      v10 = UmfdHostLifeTimeManager_MmUnmapViewOfSection(*((_QWORD *)this + 2), *(_QWORD *)this);
    }
    else
    {
      v10 = MmUnmapViewInSessionSpace(*((PVOID *)this + 2));
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5, a2, a3, a4);
    v10 = MmUnmapViewOfSection(CurrentProcess);
  }
  if ( v10 < 0 )
    return 0;
  *((_QWORD *)this + 2) = 0LL;
  result = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 5;
  return result;
}
