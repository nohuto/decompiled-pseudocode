/*
 * XREFs of ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180056CBC
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180056D54 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x1800582D0 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x1800583EC (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDisplaySet::Init(CDWMDisplaySet *this, const struct CDWMDXGIEnumeration *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax

  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(const struct CDWMDXGIEnumeration *))a2)(a2);
  v3 = CDWMDisplaySet::EnumerateOutputs(this);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = CDWMDisplaySet::ArrangeCloneDisplays(this);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801068A0, 1LL, v6, 0x76u, 0LL);
    else
      CDWMDisplaySet::ComputeDisplayBounds(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801068A0, 1LL, v3, 0x74u, 0LL);
  }
  return v4;
}
