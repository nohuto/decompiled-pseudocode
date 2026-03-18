/*
 * XREFs of EngFreeMem @ 0x1C0077DB0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0077CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0090D20 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C009D910 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C015E4B0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C015E660 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C016AE00 (EngDeleteClip.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct _ERESOURCE *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx

  if ( pv )
  {
    v1 = (char *)pv - 32;
    v4 = *(_QWORD *)(SGDGetSessionState(pv) + 24);
    v5 = *(struct _ERESOURCE **)(v4 + 3216);
    if ( v5 )
    {
      PsEnterPriorityRegion(v3, v2);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    }
    v6 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v7 = (_QWORD *)v1[1], (_QWORD *)*v7 != v1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(v4 + 3216);
    if ( v8 )
    {
      v9 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
      if ( *(_DWORD *)(v9 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v9,
          (unsigned int)&LockRelease,
          v10,
          v8,
          (__int64)L"GreBaseGlobals.MultiUserEngAllocListLock");
      v11 = *(struct _ERESOURCE **)(v4 + 3216);
      if ( v11 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v11);
        PsLeavePriorityRegion();
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  }
}
