/*
 * XREFs of ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x180297D40
 * Callers:
 *     ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x180297900 (-OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180157638 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801CCE2C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180277378 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::UpdateMipmapSurface(CCompositionMipmapSurface *this)
{
  unsigned int v2; // r14d
  CDeviceManager *v3; // rcx
  int ExistingDevice; // eax
  unsigned int i; // r15d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+64h] [rbp-Ch]
  struct CD3DDevice *v22; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 160) )
  {
    *((_BYTE *)this + 160) = 0;
    if ( *((_QWORD *)this + 21) )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v22);
      ExistingDevice = CDeviceManager::GetExistingDevice(v3, *(struct _LUID *)((char *)this + 120), &v22);
      v2 = ExistingDevice;
      if ( ExistingDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x144u, 0LL);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 34); ++i )
        {
          v6 = *((_QWORD *)this + 12);
          v7 = 32LL * i;
          v8 = *(_QWORD *)(v7 + v6);
          if ( v8 && *(_BYTE *)(v7 + v6 + 24) )
          {
            v23 = 0LL;
            v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v8 + 72) + 64LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
            v10 = v9(v8 + 72, &v23);
            v2 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x14Bu, 0LL);
              goto LABEL_13;
            }
            v11 = v23;
            v19 = -1;
            v20 = 0LL;
            v21 = 0;
            v18 = *((_QWORD *)this + 15);
            v24 = 0LL;
            v12 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v23 + 104LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
            v13 = v12(v11, &v18, &v24);
            v2 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x152u, 0LL);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
LABEL_13:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
              goto LABEL_17;
            }
            v14 = *((_QWORD *)this + 12);
            v15 = *(_QWORD *)(*((_QWORD *)this + 21) + 128LL);
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL))(v24);
            CD3DDevice::CopySubresourceRegion((__int64)v22, v16, 0, (int *)(v7 + v14 + 8), v15, i, 0, 0, 0);
            *(_BYTE *)(*((_QWORD *)this + 12) + v7 + 24) = 0;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          }
        }
        (*(void (__fastcall **)(CCompositionMipmapSurface *, _QWORD, CCompositionMipmapSurface *))(*(_QWORD *)this + 80LL))(
          this,
          0LL,
          this);
      }
LABEL_17:
      Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v22);
    }
  }
  return v2;
}
