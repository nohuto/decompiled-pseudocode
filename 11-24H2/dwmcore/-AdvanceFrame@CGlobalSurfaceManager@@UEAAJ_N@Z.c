/*
 * XREFs of ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800F3810
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800F3B80 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18018B058 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::AdvanceFrame(CGlobalSurfaceManager *this, char a2)
{
  CLegacySurfaceManager *v2; // rdi
  __int64 v4; // rbp
  void **i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v9; // rcx
  HANDLE hEvent; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CGlobalSurfaceManager *)((char *)this + 152);
  if ( *((_QWORD *)this + 45) )
  {
    if ( ++*((_DWORD *)this + 92) <= 8u )
    {
      if ( !a2 )
        goto LABEL_2;
    }
    else
    {
      ++*((_DWORD *)this + 94);
    }
    CLegacySurfaceManager::ReleaseCaptureBitsResponse(v2);
  }
LABEL_2:
  v4 = 0LL;
  for ( i = (void **)((char *)this + 328); (unsigned int)v4 < *((_DWORD *)this + 88); v4 = (unsigned int)(v4 + 1) )
  {
    v9 = *i;
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(v9[v4], &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *((_DWORD *)this + 88) = 0;
  if ( *((_QWORD *)this + 41) != *((_QWORD *)this + 42) )
  {
    operator delete(*i);
    *((_QWORD *)this + 41) = *((_QWORD *)this + 42);
    *((_DWORD *)this + 87) = *((_DWORD *)this + 86);
  }
  v6 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  }
  return CLegacySurfaceManager::ProcessPostPresentResponseItems(v2);
}
