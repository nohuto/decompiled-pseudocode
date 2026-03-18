/*
 * XREFs of ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x18015A3D0
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4)
{
  __int64 *v5; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct ID3D11Fence *v11; // rcx
  struct ID3D11Fence *v13; // rdx
  struct ID3D11Fence *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  *a4 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 69);
  v7 = ~(unsigned __int8)*((_DWORD *)this + 236) & 8;
  v8 = *v5;
  v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, struct ID3D11Fence **))(v8 + 544))(
         v5,
         0LL,
         v7,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v14->lpVtbl->SetPrivateData)(
      v14,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 2),
      *(_QWORD *)a2);
    v13 = v14;
    v11 = 0LL;
    v14 = 0LL;
    *a4 = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x757u, 0LL);
    v11 = v14;
  }
  if ( v11 )
    ((void (__fastcall *)(struct ID3D11Fence *))v11->lpVtbl->Release)(v11);
  return v10;
}
