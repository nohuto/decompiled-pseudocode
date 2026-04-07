/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAJPEFBQEAUHMONITOR__@@I@Z @ 0x1800212B4 (-AddMultipleAndSet@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAJPEFBQEAUHMONITOR__@@I@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180028A88 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180028DD8 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800290F4 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ??0CDWMDisplaySet@@QEAA@XZ @ 0x180029148 (--0CDWMDisplaySet@@QEAA@XZ.c)
 *     ?IsUpToDate@CDWMDXGIEnumeration@@QEBA_NXZ @ 0x18002AC58 (-IsUpToDate@CDWMDXGIEnumeration@@QEBA_NXZ.c)
 *     ?Release@CDWMDXGIEnumeration@@QEBAKXZ @ 0x18002B448 (-Release@CDWMDXGIEnumeration@@QEBAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@QEAA_NXZ @ 0x18005F0A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800CCA2C (ModuleFailFastForHRESULT.c)
 *     ??2@YAPEAX_K@Z @ 0x18010D7B0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  volatile signed __int32 *v3; // rax
  unsigned int v4; // ebx
  CDWMDXGIEnumeration **v5; // rsi
  CDWMDisplaySet *v6; // rcx
  CDWMDisplaySet *v7; // rax
  CDWMDisplaySet *v8; // rax
  CDWMDisplaySet *v9; // rcx
  int v10; // eax
  CDWMDisplaySet *v11; // rax
  CDWMDisplaySet *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int v16; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  CDWMDisplaySet *v19; // [rsp+58h] [rbp+10h]

  *a2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 18);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  v4 = 0;
  if ( v3 )
    _InterlockedIncrement(v3);
  v5 = (CDWMDXGIEnumeration **)((char *)this + 136);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::GetImpl'::`2'::impl) )
  {
    while ( 1 )
    {
      if ( *v5 )
      {
        CDWMDXGIEnumeration::Release(*v5);
        *v5 = 0LL;
      }
      v6 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
      if ( v6 )
      {
        CDWMDisplaySet::Release(v6);
        *((_QWORD *)this + 18) = 0LL;
      }
      if ( (int)CDWMDXGIEnumeration::Create((struct CDWMDXGIEnumeration **)this + 17) >= 0 )
      {
        v7 = (CDWMDisplaySet *)operator new(0x70uLL);
        v19 = v7;
        if ( !v7 )
        {
          *((_QWORD *)this + 18) = 0LL;
LABEL_16:
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x478u, 0LL);
LABEL_37:
          ModuleFailFastForHRESULT(v4, retaddr);
        }
        v8 = CDWMDisplaySet::CDWMDisplaySet(v7);
        *((_QWORD *)this + 18) = v8;
        if ( !v8 )
          goto LABEL_16;
        v4 = CDWMDisplaySet::Init(v8, *v5);
      }
      if ( *v5 && CDWMDXGIEnumeration::IsUpToDate(*v5) )
        goto LABEL_25;
    }
  }
  do
  {
    if ( *v5 )
    {
      CDWMDXGIEnumeration::Release(*v5);
      *v5 = 0LL;
    }
    v9 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( v9 )
    {
      CDWMDisplaySet::Release(v9);
      *((_QWORD *)this + 18) = 0LL;
    }
    v10 = CDWMDXGIEnumeration::Create((struct CDWMDXGIEnumeration **)this + 17);
    v4 = v10;
    if ( v10 < 0 )
    {
      v16 = 1157;
LABEL_36:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v16, 0LL);
      goto LABEL_37;
    }
    v11 = (CDWMDisplaySet *)operator new(0x70uLL);
    v19 = v11;
    if ( !v11 )
    {
      *((_QWORD *)this + 18) = 0LL;
LABEL_34:
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x488u, 0LL);
      goto LABEL_37;
    }
    v12 = CDWMDisplaySet::CDWMDisplaySet(v11);
    *((_QWORD *)this + 18) = v12;
    if ( !v12 )
      goto LABEL_34;
    v4 = CDWMDisplaySet::Init(v12, *v5);
  }
  while ( !CDWMDXGIEnumeration::IsUpToDate(*v5) );
LABEL_25:
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x49Au, 0LL);
    goto LABEL_37;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 8u);
  v13 = *((_QWORD *)this + 18);
  v14 = 0;
  if ( *(_DWORD *)(v13 + 64) )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 8LL * v14) + 88LL) + 16LL);
      v10 = DynArray<HMONITOR__ *,0>::AddMultipleAndSet((__int64)this + 104, &v18);
      v4 = v10;
      if ( v10 < 0 )
        break;
      v13 = *((_QWORD *)this + 18);
      if ( ++v14 >= *(_DWORD *)(v13 + 64) )
        return v4;
    }
    v16 = 1184;
    goto LABEL_36;
  }
  return v4;
}
