/*
 * XREFs of ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x140083518
 * Callers:
 *     DxgkDisplayMuxSwitchPrepare @ 0x1400894E4 (DxgkDisplayMuxSwitchPrepare.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140060F7C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400654B8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _lambda_7b3f14799f20c6d540ea6da3a6d31bf6_::_lambda_7b3f14799f20c6d540ea6da3a6d31bf6_ @ 0x140081E38 (_lambda_7b3f14799f20c6d540ea6da3a6d31bf6_--_lambda_7b3f14799f20c6d540ea6da3a6d31bf6_.c)
 *     ??0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140081E80 (--0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_.c)
 *     _DXGKCALLONEXIT__lambda_7b3f14799f20c6d540ea6da3a6d31bf6____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008224C (_DXGKCALLONEXIT__lambda_7b3f14799f20c6d540ea6da3a6d31bf6____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x140084D24 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x140084DCC (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_SWITCH_OPERATION@@@Z @ 0x14008837C (-reset@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATI.c)
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883C0 (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DISPLAY_MUX_MGR::CreateSwitchOperation(
        DISPLAY_MUX_MGR *this,
        struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *a2)
{
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v3; // rcx
  int v4; // edi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 *v13; // rax
  __int128 v14; // xmm1
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r9d
  DISPLAY_MUX_PAIRING *v18; // rcx
  DISPLAY_MUX_PAIRING *v19; // rcx
  __int64 v20; // rbx
  int v21; // esi
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r9
  DISPLAY_MUX_SWITCH_OPERATION *v26; // rax
  DISPLAY_MUX_SWITCH_OPERATION *v27; // rax
  NTSTATUS v28; // eax
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r9
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v32; // rcx
  PVOID v33; // rdx
  void *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  _BYTE v41[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[31]; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Object; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v46; // [rsp+1D8h] [rbp+D8h] BYREF
  NTSTATUS IsTargetPartOfMux; // [rsp+1E0h] [rbp+E0h] BYREF
  void *Handle; // [rsp+1E8h] [rbp+E8h] BYREF

  v46 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  memset(&v44[5], 0, 0xA0uLL);
  v3 = v46;
  v4 = -1073741823;
  v5 = *(_OWORD *)&v44[7];
  *((_OWORD *)v46 + 5) = *(_OWORD *)&v44[5];
  v6 = *(_OWORD *)&v44[9];
  *((_OWORD *)v3 + 6) = v5;
  v7 = *(_OWORD *)&v44[11];
  *((_OWORD *)v3 + 7) = v6;
  v8 = *(_OWORD *)&v44[13];
  *((_OWORD *)v3 + 8) = v7;
  v9 = *(_OWORD *)&v44[15];
  *((_OWORD *)v3 + 9) = v8;
  v10 = *(_OWORD *)&v44[17];
  *((_OWORD *)v3 + 10) = v9;
  v11 = *(_OWORD *)&v44[21];
  *((_OWORD *)v3 + 11) = v10;
  *((_OWORD *)v3 + 12) = *(_OWORD *)&v44[19];
  v12 = *(_OWORD *)&v44[23];
  *((_OWORD *)v3 + 13) = v11;
  *((_OWORD *)v3 + 14) = v12;
  IsTargetPartOfMux = -1073741823;
  v37 = 0LL;
  v13 = (__int128 *)lambda_7b3f14799f20c6d540ea6da3a6d31bf6_::_lambda_7b3f14799f20c6d540ea6da3a6d31bf6_(
                      v44,
                      (__int64)&v46,
                      (__int64)&IsTargetPartOfMux,
                      (__int64)this,
                      (__int64)&v37);
  v14 = v13[1];
  v42[0] = *v13;
  v42[1] = v14;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v43, v42);
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v15 = 769;
    v16 = -1073741762;
    v17 = 3118;
LABEL_29:
    CheckFailed(v16, v15, (__int64)v46 + 24, v17);
    goto LABEL_30;
  }
  v18 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( !v18 || *(_DWORD *)v18 != 2 )
  {
    v15 = 770;
    v16 = -1073740718;
    v17 = 3125;
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 84) )
  {
    v15 = 768;
    v16 = -1073740682;
    v17 = 3132;
    goto LABEL_29;
  }
  LOBYTE(Object) = 0;
  IsTargetPartOfMux = DISPLAY_MUX_PAIRING::IsTargetPartOfMux(
                        v18,
                        *(struct _LUID *)v46,
                        *((_DWORD *)v46 + 2),
                        (unsigned __int8 *)&Object,
                        0LL);
  if ( !CheckFailed(IsTargetPartOfMux, 773, (__int64)v46 + 24, 0xC43u) )
  {
    if ( (_BYTE)Object )
    {
      v15 = 771;
      v16 = -1073741791;
      v17 = 3147;
      goto LABEL_29;
    }
    v19 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
    v20 = 0LL;
    v39 = 0LL;
    v21 = 0;
    v40 = 0;
    if ( !DISPLAY_MUX_PAIRING::IsOperational(v19) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1841;
      v4 = -1073741762;
      goto LABEL_17;
    }
    v23 = *(_DWORD *)(v22[1] + 72LL);
    if ( v23 == 1 )
    {
      v24 = v22[2];
    }
    else
    {
      if ( v23 != 2 )
        goto LABEL_17;
      v24 = v22[3];
    }
    v20 = *(_QWORD *)(v24 + 16);
    v4 = 0;
    v21 = *(_DWORD *)(v24 + 356);
    v39 = v20;
    v40 = v21;
LABEL_17:
    IsTargetPartOfMux = v4;
    if ( !CheckFailed(v4, 772, (__int64)v46 + 24, 0xC52u) )
    {
      *((_QWORD *)v46 + 28) = v20;
      *((_DWORD *)v46 + 58) = v21;
      v26 = (DISPLAY_MUX_SWITCH_OPERATION *)operator new(0x134uLL, 0x4B677844u, 256LL, v25);
      if ( v26 )
        v27 = DISPLAY_MUX_SWITCH_OPERATION::DISPLAY_MUX_SWITCH_OPERATION(
                v26,
                v46,
                (const struct _DISPLAYCONFIG_DISPLAYMUX_TARGET *)&v39);
      else
        v27 = 0LL;
      wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(
        &v37,
        v27);
      if ( !v37 )
      {
        v15 = 774;
        v16 = -1073741801;
        v17 = 3165;
        goto LABEL_29;
      }
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)this + 11,
        0LL);
      Object = 0LL;
      v28 = ObReferenceObjectByHandle(*((HANDLE *)v46 + 2), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v29 = v46;
      *((_QWORD *)this + 11) = Object;
      IsTargetPartOfMux = v28;
      if ( !CheckFailed(v28, 777, (__int64)v29 + 24, 0xC68u) )
      {
        LOBYTE(v31) = 1;
        LOBYTE(v30) = 1;
        v38 = 0LL;
        IsTargetPartOfMux = ObCreateObject(v30, g_pDpDisplayMuxSwitchNtObject, 0LL, v31, 0LL, 8, 316, 0, &v38);
        if ( !CheckFailed(IsTargetPartOfMux, 775, (__int64)v46 + 24, 0xC79u) )
        {
          Handle = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &Handle,
            0LL);
          IsTargetPartOfMux = ObInsertObject(v38, 0LL, 0x20000u, 0, 0LL, &Handle);
          if ( !CheckFailed(IsTargetPartOfMux, 776, (__int64)v46 + 24, 0xC86u) )
          {
            v32 = v46;
            v33 = v38;
            *((_QWORD *)this + 12) = *(_QWORD *)v46;
            *((_DWORD *)this + 26) = *((_DWORD *)v32 + 2);
            wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
              &v37,
              v33);
            v34 = Handle;
            Handle = 0LL;
            *((_QWORD *)v46 + 30) = v34;
            v35 = (__int64 *)v38;
            *((_BYTE *)this + 84) = 1;
            v36 = *v35;
            *((_QWORD *)&xmmword_14015E438 + 1) = KeGetCurrentThread();
            *(_QWORD *)&xmmword_14015E438 = v36;
          }
          wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
        }
      }
    }
  }
LABEL_30:
  DXGKCALLONEXIT__lambda_7b3f14799f20c6d540ea6da3a6d31bf6____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v43);
  wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(&v37, 0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
}
