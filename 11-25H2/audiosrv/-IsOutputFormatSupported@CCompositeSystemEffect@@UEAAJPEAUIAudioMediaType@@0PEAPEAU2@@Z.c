/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180141F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18006C8EC (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180076028 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180076718 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     _lambda_d9c18f6fc2a9815de9706b623d63d839_::operator() @ 0x18014173C (_lambda_d9c18f6fc2a9815de9706b623d63d839_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  char v7; // r14
  int v8; // ebx
  int v9; // edi
  int v10; // r15d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // al
  unsigned int v15; // esi
  struct IAudioMediaType *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _DWORD *); // rbx
  int v20; // ebx
  __int64 *v21; // rdx
  struct IAudioProcessingObject **v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, _QWORD, struct IAudioMediaType *, __int64 *); // rbx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64 *); // rbx
  int v30; // eax
  __int64 v31; // rax
  struct IAudioMediaType *v33; // [rsp+30h] [rbp-69h] BYREF
  int v34; // [rsp+38h] [rbp-61h]
  int v35; // [rsp+3Ch] [rbp-5Dh]
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  __int64 v37; // [rsp+48h] [rbp-51h] BYREF
  __int64 v38; // [rsp+50h] [rbp-49h] BYREF
  struct IAudioMediaType *v39; // [rsp+58h] [rbp-41h] BYREF
  int v40; // [rsp+60h] [rbp-39h]
  _DWORD v41[3]; // [rsp+64h] [rbp-35h] BYREF
  struct IAudioMediaType *v42; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v43[5]; // [rsp+78h] [rbp-21h] BYREF
  char v44; // [rsp+A0h] [rbp+7h]
  __int64 v45[9]; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  char v47; // [rsp+100h] [rbp+67h]
  signed int v49; // [rsp+110h] [rbp+77h] BYREF
  struct IAudioMediaType **v50; // [rsp+118h] [rbp+7Fh]

  v50 = a4;
  v7 = 1;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v8 = *((_DWORD *)this + 28) - 1;
    v9 = -1;
    v35 = -1;
    v10 = -1;
    v40 = *((_DWORD *)this + 19) != 0 ? v8 : 0;
    v34 = v40;
  }
  else
  {
    v11 = *((_DWORD *)this + 19);
    v12 = *((_DWORD *)this + 28);
    v13 = -1;
    if ( !v11 )
      v13 = v12;
    v35 = v13;
    v10 = v11 != 0 ? -1 : 1;
    v8 = v11 != 0 ? v12 - 1 : 0;
    v34 = v13 - v10;
    v40 = v8;
    v9 = v13;
  }
  v39 = a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v39);
  v45[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v45);
  v38 = 0LL;
  v14 = 1;
  v47 = 1;
  v15 = -2005073917;
  while ( 1 )
  {
    v49 = v8;
    if ( !v14 || v8 == v9 )
      break;
    v16 = v39;
    v42 = v39;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v42);
    if ( v49 == v40 )
      v16 = a2;
    v33 = v16;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v33);
    *(_QWORD *)&v41[1] = 0LL;
    v17 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
            (__int64)this + 104,
            v49);
    v18 = *(_QWORD *)v17;
    v19 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _DWORD *))(**(_QWORD **)v17 + 64LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41[1]);
    v20 = v19(v18, v33, v42, &v41[1]);
    v41[0] = v20;
    v43[0] = (_DWORD *)((char *)this - 8);
    v43[1] = &v33;
    v43[2] = &v42;
    v43[3] = &v49;
    v43[4] = v41;
    v44 = 1;
    if ( v20 == -2005073917 )
    {
      v22 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                (__int64)this + 104,
                                                v49);
      if ( !IsFixedFormatApo(*v22) )
      {
        v15 = v41[0];
        if ( v41[0] < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49F,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v41[0]);
        if ( v44 )
        {
          v44 = 0;
          lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(v43);
        }
        goto LABEL_47;
      }
      v37 = 0LL;
      v23 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)this + 104,
              v49);
      v24 = *(_QWORD *)v23;
      v25 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v23 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
      v26 = v25(v24, 0LL, v33, &v37);
      v20 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x490,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
        if ( v44 )
        {
          v44 = 0;
          lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(v43);
        }
LABEL_42:
        v15 = v20;
LABEL_47:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41[1]);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v42);
        goto LABEL_51;
      }
      v36 = 0LL;
      v27 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)this + 104,
              v49);
      v28 = *(_QWORD *)v27;
      v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v27 + 64LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      v30 = v29(v28, v37, v37, &v36);
      v20 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x494,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v30);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
        if ( v44 )
        {
          v44 = 0;
          lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(v43);
        }
        goto LABEL_42;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, &v36);
      if ( v49 == v34 )
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v38, &v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
    }
    else
    {
      if ( v20 )
      {
        if ( v20 != 1 )
        {
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4A5,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v20);
            v7 = v44;
          }
          if ( v7 )
          {
            v44 = 0;
            lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(v43);
          }
          goto LABEL_42;
        }
        if ( v49 != v34 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x47B,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x887D0003LL);
          if ( v44 )
          {
            v44 = 0;
            lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(v43);
          }
          goto LABEL_47;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v38, &v41[1]);
        v21 = &v38;
        if ( v33 )
          v21 = (__int64 *)&v33;
      }
      else
      {
        if ( !v33 )
        {
          v47 = 0;
          goto LABEL_28;
        }
        v21 = (__int64 *)&v33;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, v21);
    }
LABEL_28:
    v44 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41[1]);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v42);
    v8 = v10 + v49;
    v9 = v35;
    v14 = v47;
  }
  v31 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    *v50 = (struct IAudioMediaType *)v31;
    v15 = 1;
  }
  else
  {
    *v50 = a3;
    ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
    v15 = 0;
  }
LABEL_51:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v45);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  return v15;
}
