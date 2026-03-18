/*
 * XREFs of ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1802226B8
 * Callers:
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1802C3B6C (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateSharedHandleFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4,
        void **a5,
        enum D3D11_FENCE_FLAG a6)
{
  void **v7; // rsi
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  struct ID3D11Fence *v15; // rax
  struct ID3D11Fence *v16; // rcx
  struct ID3D11Fence *v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = a3;
  *a4 = 0LL;
  v7 = a5;
  v9 = a6 | 2u;
  *a5 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 69);
  v11 = *v10;
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, struct ID3D11Fence **))(v11 + 544))(
          v10,
          0LL,
          v9,
          &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
          &v18);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x78Eu, 0LL);
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(struct ID3D11Fence *, _QWORD, __int64, _QWORD, void **))v18->lpVtbl->CreateSharedHandle)(
            v18,
            0LL,
            0x10000000LL,
            0LL,
            v7);
    v13 = v14;
    if ( v14 >= 0 )
    {
      ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v18->lpVtbl->SetPrivateData)(
        v18,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 2),
        *(_QWORD *)a2);
      v15 = v18;
      v16 = 0LL;
      v18 = 0LL;
      *a4 = v15;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x793u, 0LL);
  }
  v16 = v18;
LABEL_4:
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Fence *))v16->lpVtbl->Release)(v16);
  return v13;
}
