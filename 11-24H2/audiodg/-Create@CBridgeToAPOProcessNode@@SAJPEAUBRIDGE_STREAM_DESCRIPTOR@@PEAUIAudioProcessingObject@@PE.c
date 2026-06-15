/*
 * XREFs of ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14004E138
 * Callers:
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BD54 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBR.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026C00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14005B104 (CreateAudioMediaType.c)
 *     ??0?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x14006C3E0 (--0-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CBridgeToAPOProcessNode::Create(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct tWAVEFORMATEX *a3,
        struct CBridgeToAPOProcessNode **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  __int64 v10; // rax
  int v11; // esi
  __int64 *v12; // rax
  char v13; // bl
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  int v19; // edx
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+28h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v29; // [rsp+98h] [rbp+38h] BYREF

  LODWORD(v29) = 0;
  v23 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
         &v23);
  v8 = v7;
  if ( v7 >= 0 )
  {
    ppIAudioMediaType = 0LL;
    v9 = CreateAudioMediaType(a3, a3->cbSize + 18, &ppIAudioMediaType);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v29 = 0LL;
      v10 = *v23;
      v29 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, IAudioMediaType *, __int64 *))(v10 + 40))(
              v23,
              ppIAudioMediaType,
              &v29);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v15 = (__int64 *)wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
                             &v26,
                             &v29);
          v14 = *v15;
          v13 = 10;
        }
        else
        {
          v15 = &v25;
          v14 = 0LL;
          v13 = 12;
        }
        *v15 = 0LL;
        v12 = &v24;
      }
      else
      {
        v12 = (__int64 *)wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
                           v27,
                           &ppIAudioMediaType);
        v13 = 1;
        v14 = *v12;
      }
      *v12 = 0LL;
      v21 = v14;
      if ( (v13 & 8) != 0 )
      {
        v13 &= ~8u;
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
      }
      if ( (v13 & 4) != 0 )
      {
        v13 &= ~4u;
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
      }
      if ( (v13 & 2) != 0 )
      {
        v13 &= ~2u;
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
      }
      if ( (v13 & 1) != 0 )
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v27);
      if ( v11 >= 0 )
      {
        if ( v14 )
        {
          v17 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v18 = v17;
          v27[0] = (__int64)v17;
          if ( v17 )
          {
            v19 = *(_DWORD *)a1;
            v17[1] = 0LL;
            v17[2] = 0LL;
            *((_DWORD *)v17 + 6) = v19 != 0;
            v17[4] = 0LL;
            *((_DWORD *)v17 + 10) = 5;
            v17[6] = 0LL;
            *((_DWORD *)v17 + 14) = 0;
            v17[8] = 0LL;
            *v17 = &CBridgeSourceProcessNode::`vftable';
            *((_DWORD *)v17 + 15) = *(_DWORD *)a1;
            ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v17 + 6, v14);
            ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v18 + 1, v14);
            ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v18 + 2, v14);
            *((_DWORD *)v18 + 14) = *((_DWORD *)a1 + 4);
            v18[8] = *((_QWORD *)a1 + 3);
            *a4 = (struct CBridgeToAPOProcessNode *)v18;
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
            v8 = 0;
            goto LABEL_29;
          }
          v8 = -2147024882;
          v16 = 814LL;
        }
        else
        {
          v8 = -2005073917;
          v16 = 809LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
          (const char *)v8);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
        goto LABEL_29;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x328,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v11);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
      v8 = v11;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x322,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_29:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v23);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31F,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)(unsigned int)v7);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  return v8;
}
