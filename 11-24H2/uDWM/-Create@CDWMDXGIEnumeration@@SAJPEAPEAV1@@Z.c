/*
 * XREFs of ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180056B78
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180056C4C (--0CDWMDXGIEnumeration@@AEAA@XZ.c)
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180057000 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::Create(struct CDWMDXGIEnumeration **a1)
{
  CDWMDXGIEnumeration *v2; // rax
  unsigned int v3; // edi
  CDWMDXGIEnumeration *v5; // rax
  CDWMDXGIEnumeration *v6; // rbx
  int inited; // eax

  v2 = (CDWMDXGIEnumeration *)DefaultHeap::AllocClear(0x58uLL);
  if ( v2 && (v5 = CDWMDXGIEnumeration::CDWMDXGIEnumeration(v2), (v6 = v5) != 0LL) )
  {
    (**(void (__fastcall ***)(CDWMDXGIEnumeration *))v5)(v5);
    inited = CDWMDXGIEnumeration::InitDXGI(v6);
    v3 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801068A0, 1LL, inited, 0x3Bu, 0LL);
      (*(void (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a1 = v6;
    }
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801068A0, 1LL, -2147024882, 0x37u, 0LL);
  }
  return v3;
}
