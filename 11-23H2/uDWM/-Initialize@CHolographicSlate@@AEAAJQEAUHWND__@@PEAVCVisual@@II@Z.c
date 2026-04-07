/*
 * XREFs of ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C18BC
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800C17A0 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800AE00C (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x1800C1C60 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicSlate::Initialize(
        CHolographicSlate *this,
        HWND a2,
        struct CVisual *a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, _QWORD *); // rbx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int ProxyFromShared; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  hObject = 0LL;
  v5 = (_QWORD *)((char *)this + 24);
  v10 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v11 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 216LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  v12 = v11(v10, &GUID_adbab0af_769d_40da_a180_540472cbcc34, v5);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a4);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v15 = a5;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, a5);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, (unsigned int)a2);
        v13 = v17;
        if ( v17 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 32LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL));
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 6)
                                                                                  + 32LL)
                                                                    + 224LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
                  *v5,
                  &hObject);
          v13 = v18;
          if ( v18 >= 0 )
          {
            ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CHolographicInteropTextureProxy>(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                (__int64)hObject,
                                (CBaseObject **)this + 4);
            v13 = ProxyFromShared;
            if ( ProxyFromShared >= 0 )
            {
              v20 = *((_QWORD *)a3 + 2);
              if ( v20 )
                v21 = *(unsigned int *)(*(_QWORD *)(v20 + 16) + 24LL);
              else
                v21 = 0LL;
              v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                       + 960LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 16LL),
                      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 24LL),
                      v21);
              v13 = v22;
              if ( v22 >= 0 )
              {
                *((_QWORD *)this + 5) = a3;
                _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
                *((_QWORD *)this + 2) = a2;
                *((_QWORD *)this + 6) = 0LL;
                *((_DWORD *)this + 14) = a4;
                *((_DWORD *)this + 15) = v15;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x4Du);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x48u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x46u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x42u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x41u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x40u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3Fu);
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v13 < 0 )
    CHolographicSlate::UnbindWindow(this);
  return (unsigned int)v13;
}
