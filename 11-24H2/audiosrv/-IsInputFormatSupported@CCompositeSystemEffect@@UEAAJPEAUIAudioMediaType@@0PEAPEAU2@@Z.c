/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180052ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F15C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18005EBCC (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180066210 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180066690 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _lambda_9ae8c4928910e969c2e408eee9d60c41_::operator() @ 0x180149F80 (_lambda_9ae8c4928910e969c2e408eee9d60c41_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  CCompositeSystemEffect *v6; // rsi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // edx
  char v11; // r12
  int v12; // ecx
  struct IAudioMediaType *v13; // rbx
  unsigned int v14; // r15d
  struct IAudioMediaType *v15; // rcx
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *); // rdi
  int v18; // edi
  __int64 v19; // rdi
  struct IAudioMediaType *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // r15d
  int v26; // esi
  const struct tWAVEFORMATEX *v27; // rax
  __int64 *v28; // rdx
  struct IAudioProcessingObject **v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, _QWORD, struct IAudioMediaType *, __int64 *); // rbx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, __int64, __int64, __int64 *); // rbx
  int v39; // eax
  struct IAudioMediaType *v40; // [rsp+30h] [rbp-79h] BYREF
  __int64 v41; // [rsp+38h] [rbp-71h] BYREF
  struct IAudioMediaType *v42; // [rsp+40h] [rbp-69h] BYREF
  __int64 v43; // [rsp+48h] [rbp-61h] BYREF
  struct IAudioMediaType *v44; // [rsp+50h] [rbp-59h] BYREF
  int v45; // [rsp+58h] [rbp-51h]
  int v46; // [rsp+5Ch] [rbp-4Dh]
  char *v47; // [rsp+60h] [rbp-49h] BYREF
  __int64 v48; // [rsp+68h] [rbp-41h] BYREF
  struct IAudioMediaType *v49; // [rsp+70h] [rbp-39h] BYREF
  int v50; // [rsp+78h] [rbp-31h]
  _QWORD v51[5]; // [rsp+80h] [rbp-29h] BYREF
  char v52; // [rsp+A8h] [rbp-1h]
  struct IAudioMediaType *v53; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  unsigned int v56; // [rsp+118h] [rbp+6Fh] BYREF
  int v57; // [rsp+120h] [rbp+77h]
  struct IAudioMediaType **v58; // [rsp+128h] [rbp+7Fh]

  v58 = a4;
  v6 = this;
  v7 = *((_DWORD *)this + 20);
  if ( v7 )
  {
    v9 = *((_DWORD *)this + 28);
    v8 = v9 - 1;
    v45 = -1;
  }
  else
  {
    v8 = 0;
    v45 = *((_DWORD *)this + 28);
    v9 = v45;
  }
  v10 = -v7;
  v11 = 1;
  v50 = v10 != 0 ? -1 : 1;
  v12 = *((_DWORD *)this + 19);
  if ( v12 )
  {
    v25 = v9 - 1;
    v46 = v9 - 1;
    v26 = v8;
    v57 = v8;
    if ( v12 == 1 )
    {
      v27 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(v27) == 1 )
        v26 = v25;
      v57 = v26;
    }
    v6 = this;
  }
  else
  {
    v46 = 0;
    v57 = v8;
  }
  v13 = a3;
  v44 = a3;
  if ( a3 )
    ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
  v53 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->AddRef)(a2);
  v49 = 0LL;
  v14 = -2005073917;
  while ( 1 )
  {
    v56 = v8;
    if ( v8 == v45 )
      break;
    v42 = v13;
    if ( v13 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->AddRef)(v13);
      v8 = v56;
    }
    v15 = v13;
    if ( v8 == v46 )
      v15 = a2;
    v40 = v15;
    if ( v15 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->AddRef)(v15);
      v8 = v56;
    }
    v43 = 0LL;
    if ( v8 < 0 || v8 >= *((_DWORD *)v6 + 28) )
    {
      ATL::_AtlRaiseException(0xC000008C, v10);
      JUMPOUT(0x180053471LL);
    }
    v16 = *(_QWORD *)(*((_QWORD *)v6 + 13) + 8LL * v8);
    v17 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v16 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
    v18 = v17(v16, v40, v42, &v43);
    LODWORD(v47) = v18;
    v6 = this;
    v51[0] = (char *)this - 8;
    v51[1] = &v42;
    v51[2] = &v40;
    v51[3] = &v56;
    v51[4] = &v47;
    v52 = 1;
    if ( v18 == -2005073917 )
    {
      v29 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                (char *)this + 104,
                                                v56);
      if ( !IsFixedFormatApo(*v29) )
      {
        v14 = (unsigned int)v47;
        if ( (int)v47 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3EB,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v47);
        if ( v52 )
        {
          v52 = 0;
          lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(v51);
        }
        goto LABEL_82;
      }
      v41 = 0LL;
      v30 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (char *)this + 104,
              v56);
      v31 = *(_QWORD *)v30;
      v32 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v30 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
      v33 = v32(v31, 0LL, v42, &v41);
      v34 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3DC,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v33);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
        if ( v52 )
        {
          v52 = 0;
          lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(v51);
        }
LABEL_77:
        v14 = v34;
LABEL_82:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v40);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v42);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v49);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v53);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        return v14;
      }
      v35 = v56;
      if ( v56 == v57 )
      {
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v49, &v41);
        v35 = v56;
      }
      v48 = 0LL;
      v36 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (char *)this + 104,
              v35);
      v37 = *(_QWORD *)v36;
      v38 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v36 + 64LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
      v39 = v38(v37, v41, v41, &v48);
      v34 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E6,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v39);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
        if ( v52 )
        {
          v52 = 0;
          lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(v51);
        }
        goto LABEL_77;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v44, &v48);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
      goto LABEL_63;
    }
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F1,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v18);
          v11 = v52;
        }
        if ( v11 )
        {
          v52 = 0;
          lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(v51);
        }
        v14 = v18;
        goto LABEL_82;
      }
      if ( v56 != v57 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C6,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x887D0003LL);
        if ( v52 )
        {
          v52 = 0;
          lambda_9ae8c4928910e969c2e408eee9d60c41_::operator()(v51);
        }
        goto LABEL_82;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v49, &v43);
      v28 = (__int64 *)&v49;
      if ( v40 )
        v28 = (__int64 *)&v40;
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v44, v28);
LABEL_63:
      v13 = v44;
      goto LABEL_28;
    }
    v19 = (__int64)v42;
    if ( v40 )
      v19 = (__int64)v40;
    if ( v13 != (struct IAudioMediaType *)v19 )
    {
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v20 = v13;
      v13 = (struct IAudioMediaType *)v19;
      v44 = (struct IAudioMediaType *)v19;
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    }
LABEL_28:
    v52 = 0;
    v21 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = (__int64)v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = (__int64)v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v8 = v50 + v56;
  }
  if ( v49 )
  {
    *v58 = v49;
    if ( a2 )
      ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->Release)(a2);
    if ( v13 )
      ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
    return 1LL;
  }
  else
  {
    *v58 = a3;
    ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
    if ( a2 )
      ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->Release)(a2);
    if ( v13 )
      ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
    return 0LL;
  }
}
