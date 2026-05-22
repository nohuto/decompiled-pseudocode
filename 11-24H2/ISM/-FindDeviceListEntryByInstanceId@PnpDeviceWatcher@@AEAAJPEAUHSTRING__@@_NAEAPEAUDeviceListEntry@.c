/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180035A7C
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180034410 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006065C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x180035F7C (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4478 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E55AC (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v8; // rsi
  char *i; // rbx
  int v10; // ebx
  InputContext *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char v14; // bp
  bool v15; // r14
  bool v16; // di
  void *v18; // rax
  InputContext *v19; // rdi
  char **v20; // rcx
  InputContext *v21[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (char *)this + 64;
  for ( i = (char *)*((_QWORD *)this + 8); i != v8; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v21[0] = 0LL;
  v10 = PnpDevice::MakeAndInitialize(a2, this, v21);
  if ( v10 < 0 )
  {
    if ( v21[0] )
      InputContext::Release(v21[0]);
    return (unsigned int)v10;
  }
  v11 = v21[0];
  v12 = *((_QWORD *)v21[0] + 7) - 0x11D074D3745A17A0LL;
  if ( *((_QWORD *)v21[0] + 7) == 0x11D074D3745A17A0LL )
    v12 = _mm_srli_si128(*(__m128i *)((char *)v21[0] + 56), 8).m128i_u64[0] + 0x25A8F0365FFF014ALL;
  if ( !v12 )
    goto LABEL_18;
  v13 = *((_QWORD *)v21[0] + 7) - 0x4647CD8BE0CBF06CLL;
  if ( *((_QWORD *)v21[0] + 7) == 0x4647CD8BE0CBF06CLL )
    v13 = _mm_srli_si128(*(__m128i *)((char *)v21[0] + 56), 8).m128i_u64[0] - 0x74F9F0433B268ABBLL;
  if ( v13 )
    v14 = 0;
  else
LABEL_18:
    v14 = 1;
  v15 = *((_WORD *)v21[0] + 60) == 89 && *((_WORD *)v21[0] + 61) == 1;
  v16 = 0;
  if ( IsEdition(0x1820uLL) && *((_WORD *)v11 + 60) == 12 )
    v16 = *((_WORD *)v11 + 61) == 1;
  if ( !v14 || !v15 && !v16 )
  {
    InputContext::Release(v11);
    return 1LL;
  }
  v18 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    *((_QWORD *)v18 + 3) = 0LL;
    *((_QWORD *)v18 + 2) = 0LL;
    v19 = (InputContext *)*((_QWORD *)v18 + 2);
    *((_QWORD *)v18 + 2) = v11;
    *((_BYTE *)v18 + 24) = 0;
    v20 = (char **)*((_QWORD *)v8 + 1);
    if ( *v20 != v8 )
      __fastfail(3u);
    *(_QWORD *)v18 = v8;
    *((_QWORD *)v18 + 1) = v20;
    *v20 = (char *)v18;
    *((_QWORD *)v8 + 1) = v18;
    ++*((_DWORD *)v8 + 4);
    v21[0] = 0LL;
    *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v18;
    std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(v21);
    if ( v19 )
      InputContext::Release(v19);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)0x8007000ELL,
      0);
    std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(v21);
    InputContext::Release(v11);
    return 2147942414LL;
  }
}
