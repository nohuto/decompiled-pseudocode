/*
 * XREFs of ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C4798
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800C46A8 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800B61D4 (-CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicI.c)
 *     ?SetRoot@CHolographicInteropTextureProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800C45DC (-SetRoot@CHolographicInteropTextureProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAXXZ @ 0x1800C4AB0 (-UnbindWindow@CHolographicSlate@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicSlate::Initialize(
        CHolographicSlate *this,
        HWND a2,
        struct CVisualProxy **a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int HolographicInteropTextureProxyFromSharedHandle; // eax
  int v21; // eax
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  hObject = 0LL;
  v5 = (_QWORD *)((char *)this + 24);
  v10 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v11 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 216LL);
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)this + 3);
  v13 = v11(v10, &GUID_adbab0af_769d_40da_a180_540472cbcc34, v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3Fu, 0LL);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a4);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x40u, 0LL);
    }
    else
    {
      v16 = a5;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, a5);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x41u, 0LL);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, (unsigned int)a2);
        v14 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x42u, 0LL);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 32LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL));
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 6)
                                                                                  + 32LL)
                                                                    + 224LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
                  *v5,
                  &hObject);
          v14 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x46u, 0LL);
          }
          else
          {
            HolographicInteropTextureProxyFromSharedHandle = CCompositor::CreateHolographicInteropTextureProxyFromSharedHandle(
                                                               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                                               hObject,
                                                               (CBaseObject **)this + 4);
            v14 = HolographicInteropTextureProxyFromSharedHandle;
            if ( HolographicInteropTextureProxyFromSharedHandle < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                0LL,
                0LL,
                HolographicInteropTextureProxyFromSharedHandle,
                0x48u,
                0LL);
            }
            else
            {
              v21 = CHolographicInteropTextureProxy::SetRoot(*((CHolographicInteropTextureProxy **)this + 4), a3[2]);
              v14 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x4Du, 0LL);
              }
              else
              {
                *((_QWORD *)this + 5) = a3;
                CMILRefCountBase::AddRef((CMILRefCountBase *)a3);
                *((_QWORD *)this + 2) = a2;
                *((_QWORD *)this + 6) = 0LL;
                *((_DWORD *)this + 14) = a4;
                *((_DWORD *)this + 15) = v16;
              }
            }
          }
        }
      }
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v14 < 0 )
    CHolographicSlate::UnbindWindow(this);
  return (unsigned int)v14;
}
