/*
 * XREFs of ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800FFDB8
 * Callers:
 *     ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x1800FFC48 (--$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@-$_Default_allocator_traits@V-$allo.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180226A48 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1802A178C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1802A1DC0 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CDeviceManager::GetExistingDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  unsigned int v3; // edi
  DWORD LowPart; // ebx
  __int64 i; // rcx
  _DWORD *v7; // rcx
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = 0;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  EnterCriticalSection(&CriticalSection);
  *a3 = 0LL;
  for ( i = qword_180406B38; ; i += 16LL )
  {
    if ( i == (_QWORD)xmmword_180406B40 )
      goto LABEL_5;
    if ( __PAIR64__(HighPart, LowPart) == *(_QWORD *)(*(_QWORD *)i + 936LL) )
      break;
  }
  v7 = *(_DWORD **)i;
  if ( v7[278] )
  {
LABEL_5:
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x11Du, 0LL);
    goto LABEL_6;
  }
  *a3 = (struct CD3DDevice *)v7;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
LABEL_6:
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
