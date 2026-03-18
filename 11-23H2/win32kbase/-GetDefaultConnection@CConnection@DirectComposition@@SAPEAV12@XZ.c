/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0032288
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0003190 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C0003450 (NtDCompositionGetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0008BC0 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetFrameId @ 0x1C0009310 (NtDCompositionGetFrameId.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0023020 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C00252E4 (DCompositionIsShellProcess.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C00321D0 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00335E4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0086830 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x1C0087290 (DCompositionDwmInitialize.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00BA000 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00CA5F4 (DCompositionForceRender.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1C0208FA0 (DCompositionBoostCompositionClockForInput.c)
 *     DCompositionDDAChange @ 0x1C0209100 (DCompositionDDAChange.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C02092F0 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02093D0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0209510 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0209A30 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C0209D20 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rdi

  v1 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  if ( !*CurrentProcessWin32Process )
    goto LABEL_7;
  v3 = CurrentProcessWin32Process[32];
  if ( !v3 )
    goto LABEL_7;
  v4 = *(struct _ERESOURCE **)(v3 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v4, 1u);
  v1 = *(volatile signed __int32 **)(v3 + 24);
  if ( v1 )
    _InterlockedIncrement(v1);
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 32));
  KeLeaveCriticalRegion();
  if ( !v1 )
  {
LABEL_7:
    v5 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v1 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v1;
}
