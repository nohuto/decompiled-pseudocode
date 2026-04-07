/*
 * XREFs of ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180057428
 * Callers:
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180057000 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x18005750C (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18005758C (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDXGIAdapter::Create(
        struct IDXGIAdapter *a1,
        const struct std::nothrow_t *a2,
        struct CDWMDXGIAdapter **a3)
{
  unsigned int v4; // ebx
  CDWMDXGIAdapter *v6; // rax
  CDWMDXGIAdapter *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v4 = (unsigned int)a2;
  v6 = (CDWMDXGIAdapter *)operator new[](0x180uLL, a2);
  if ( v6 )
    v7 = CDWMDXGIAdapter::CDWMDXGIAdapter(v6, v4, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    v8 = CDWMDXGIAdapter::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x58u, 0LL);
    }
    else
    {
      *a3 = v7;
      (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    }
    (*(void (__fastcall **)(CDWMDXGIAdapter *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x54u, 0LL);
  }
  return v9;
}
