/*
 * XREFs of ?InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z @ 0x1802DF660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicFrameProcessor::InitializeWithD3DDevice(
        CHolographicFrameProcessor *this,
        struct ID3D11Device1 *a2)
{
  unsigned int v2; // ebp
  struct ID3D11Device1 **v3; // rdi
  struct ID3D11Device1 *v4; // rax
  int v7; // esi
  int v8; // eax
  struct ID3D11Device1 **v9; // rbx
  struct ID3D11Device1 *v10; // rcx
  struct ID3D11Device1 *v11; // rdi
  void (__stdcall *GetImmediateContext)(ID3D11Device1 *, ID3D11DeviceContext **); // rbx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  __int64 v16; // rbx
  __int64 *v17; // r15
  int (__fastcall *v18)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct ID3D11Device1 **)((char *)this + 48);
  v4 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
  v23 = 0LL;
  if ( !v4 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
    v8 = OpenFlipConsumer(*((_QWORD *)this + 10), (char *)this + 88, (char *)this + 40);
    v7 = v8;
    if ( v8 < 0 )
    {
      v22 = 116;
    }
    else
    {
      if ( *v3 != a2 )
      {
        v9 = v3;
        if ( a2 )
        {
          ((void (__fastcall *)(struct ID3D11Device1 *))a2->lpVtbl->AddRef)(a2);
          v9 = (struct ID3D11Device1 **)((char *)this + 48);
        }
        v10 = *v3;
        *v3 = a2;
        if ( v10 )
        {
          ((void (__fastcall *)(struct ID3D11Device1 *))v10->lpVtbl->Release)(v10);
          v3 = v9;
        }
      }
      v11 = *v3;
      GetImmediateContext = v11->lpVtbl->GetImmediateContext;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
      ((void (__fastcall *)(struct ID3D11Device1 *, char *))GetImmediateContext)(v11, (char *)this + 56);
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 7);
      v14 = **v13;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
      v8 = v14(v13, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 64);
      v7 = v8;
      if ( v8 < 0 )
      {
        v22 = 121;
      }
      else
      {
        QueryInterface = a2->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        v8 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))QueryInterface)(
               a2,
               &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
               &v23);
        v7 = v8;
        if ( v8 < 0 )
        {
          v22 = 123;
        }
        else
        {
          v16 = v23;
          v17 = (__int64 *)((char *)this + 96);
          v18 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v23 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
          if ( v18(v16, 0LL, 0LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v17) >= 0 )
            goto LABEL_19;
          v19 = v23;
          v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
          v8 = v20(v19, 0LL, 8LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v17);
          v7 = v8;
          if ( v8 >= 0 )
            goto LABEL_19;
          v22 = 132;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v22, 0LL);
LABEL_19:
    v2 = v7;
    goto LABEL_20;
  }
  if ( v4 != a2 )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x71u, 0LL);
    goto LABEL_19;
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v2;
}
