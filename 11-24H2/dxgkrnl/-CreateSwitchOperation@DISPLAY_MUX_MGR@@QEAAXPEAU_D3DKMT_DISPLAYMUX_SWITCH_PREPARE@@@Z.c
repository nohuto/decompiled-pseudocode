/*
 * XREFs of ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x140083BA4
 * Callers:
 *     DxgkDisplayMuxSwitchPrepare @ 0x140089BCC (DxgkDisplayMuxSwitchPrepare.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400650D8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _lambda_49e79ef9181f572942092d934c66ae7a_::_lambda_49e79ef9181f572942092d934c66ae7a_ @ 0x1400824B8 (_lambda_49e79ef9181f572942092d934c66ae7a_--_lambda_49e79ef9181f572942092d934c66ae7a_.c)
 *     ??0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140082500 (--0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_.c)
 *     _DXGKCALLONEXIT__lambda_49e79ef9181f572942092d934c66ae7a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400828B0 (_DXGKCALLONEXIT__lambda_49e79ef9181f572942092d934c66ae7a____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x140082F28 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x1400853B4 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x14008545C (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_SWITCH_OPERATION@@@Z @ 0x1400889A4 (-reset@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATI.c)
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400889E8 (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 *     memset @ 0x1400A2000 (memset.c)
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
  DISPLAY_MUX_SWITCH_OPERATION *v25; // rax
  DISPLAY_MUX_SWITCH_OPERATION *v26; // rax
  NTSTATUS v27; // eax
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r9
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v31; // rcx
  PVOID v32; // rdx
  void *v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _BYTE v40[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v41[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v43[31]; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Object; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v45; // [rsp+1D8h] [rbp+D8h] BYREF
  NTSTATUS IsTargetPartOfMux; // [rsp+1E0h] [rbp+E0h] BYREF
  void *Handle; // [rsp+1E8h] [rbp+E8h] BYREF

  v45 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  memset(&v43[5], 0, 0xA0uLL);
  v3 = v45;
  v4 = -1073741823;
  v5 = *(_OWORD *)&v43[7];
  *((_OWORD *)v45 + 5) = *(_OWORD *)&v43[5];
  v6 = *(_OWORD *)&v43[9];
  *((_OWORD *)v3 + 6) = v5;
  v7 = *(_OWORD *)&v43[11];
  *((_OWORD *)v3 + 7) = v6;
  v8 = *(_OWORD *)&v43[13];
  *((_OWORD *)v3 + 8) = v7;
  v9 = *(_OWORD *)&v43[15];
  *((_OWORD *)v3 + 9) = v8;
  v10 = *(_OWORD *)&v43[17];
  *((_OWORD *)v3 + 10) = v9;
  v11 = *(_OWORD *)&v43[21];
  *((_OWORD *)v3 + 11) = v10;
  *((_OWORD *)v3 + 12) = *(_OWORD *)&v43[19];
  v12 = *(_OWORD *)&v43[23];
  *((_OWORD *)v3 + 13) = v11;
  *((_OWORD *)v3 + 14) = v12;
  IsTargetPartOfMux = -1073741823;
  v36 = 0LL;
  v13 = (__int128 *)lambda_49e79ef9181f572942092d934c66ae7a_::_lambda_49e79ef9181f572942092d934c66ae7a_(
                      v43,
                      (__int64)&v45,
                      (__int64)&IsTargetPartOfMux,
                      (__int64)this,
                      (__int64)&v36);
  v14 = v13[1];
  v41[0] = *v13;
  v41[1] = v14;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v42, v41);
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v15 = 769;
    v16 = -1073741762;
    v17 = 3127;
LABEL_29:
    CheckFailed(v16, v15, (__int64)v45 + 24, v17);
    goto LABEL_30;
  }
  v18 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( !v18 || *(_DWORD *)v18 != 2 )
  {
    v15 = 770;
    v16 = -1073740718;
    v17 = 3134;
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 84) )
  {
    v15 = 768;
    v16 = -1073740682;
    v17 = 3141;
    goto LABEL_29;
  }
  LOBYTE(Object) = 0;
  IsTargetPartOfMux = DISPLAY_MUX_PAIRING::IsTargetPartOfMux(
                        v18,
                        *(struct _LUID *)v45,
                        *((_DWORD *)v45 + 2),
                        (unsigned __int8 *)&Object,
                        0LL);
  if ( !CheckFailed(IsTargetPartOfMux, 773, (__int64)v45 + 24, 0xC4Cu) )
  {
    if ( (_BYTE)Object )
    {
      v15 = 771;
      v16 = -1073741791;
      v17 = 3156;
      goto LABEL_29;
    }
    v19 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
    v20 = 0LL;
    v38 = 0LL;
    v21 = 0;
    v39 = 0;
    if ( !DISPLAY_MUX_PAIRING::IsOperational(v19) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1853;
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
    v38 = v20;
    v39 = v21;
LABEL_17:
    IsTargetPartOfMux = v4;
    if ( !CheckFailed(v4, 772, (__int64)v45 + 24, 0xC5Bu) )
    {
      *((_QWORD *)v45 + 28) = v20;
      *((_DWORD *)v45 + 58) = v21;
      v25 = (DISPLAY_MUX_SWITCH_OPERATION *)operator new(0x134uLL, 0x4B677844u, 256LL);
      if ( v25 )
        v26 = DISPLAY_MUX_SWITCH_OPERATION::DISPLAY_MUX_SWITCH_OPERATION(
                v25,
                v45,
                (const struct _DISPLAYCONFIG_DISPLAYMUX_TARGET *)&v38);
      else
        v26 = 0LL;
      wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(
        &v36,
        v26);
      if ( !v36 )
      {
        v15 = 774;
        v16 = -1073741801;
        v17 = 3174;
        goto LABEL_29;
      }
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)this + 11,
        0LL);
      Object = 0LL;
      v27 = ObReferenceObjectByHandle(*((HANDLE *)v45 + 2), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v28 = v45;
      *((_QWORD *)this + 11) = Object;
      IsTargetPartOfMux = v27;
      if ( !CheckFailed(v27, 777, (__int64)v28 + 24, 0xC71u) )
      {
        LOBYTE(v30) = 1;
        LOBYTE(v29) = 1;
        v37 = 0LL;
        IsTargetPartOfMux = ObCreateObject(v29, g_pDpDisplayMuxSwitchNtObject, 0LL, v30, 0LL, 8, 316, 0, &v37);
        if ( !CheckFailed(IsTargetPartOfMux, 775, (__int64)v45 + 24, 0xC82u) )
        {
          Handle = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &Handle,
            0LL);
          IsTargetPartOfMux = ObInsertObject(v37, 0LL, 0x20000u, 0, 0LL, &Handle);
          if ( !CheckFailed(IsTargetPartOfMux, 776, (__int64)v45 + 24, 0xC8Fu) )
          {
            v31 = v45;
            v32 = v37;
            *((_QWORD *)this + 12) = *(_QWORD *)v45;
            *((_DWORD *)this + 26) = *((_DWORD *)v31 + 2);
            wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
              &v36,
              v32);
            v33 = Handle;
            Handle = 0LL;
            *((_QWORD *)v45 + 30) = v33;
            v34 = (__int64 *)v37;
            *((_BYTE *)this + 84) = 1;
            v35 = *v34;
            *((_QWORD *)&xmmword_140161438 + 1) = KeGetCurrentThread();
            *(_QWORD *)&xmmword_140161438 = v35;
          }
          wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
        }
      }
    }
  }
LABEL_30:
  DXGKCALLONEXIT__lambda_49e79ef9181f572942092d934c66ae7a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v42);
  wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(&v36, 0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
}
