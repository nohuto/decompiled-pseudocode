/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140022FF0
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000FFF8 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140023EA8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024C54 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002533C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026C5C (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400234C4 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x1400374A8 (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003D914 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004BC0C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x140065950 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x14006C2D8 (WPP_SF__guid_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        _QWORD *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  APO_FLAG Flags; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  PROPVARIANT v20; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  CONFIGRET v24; // eax
  DWORD v25; // eax
  CONFIGRET v26; // eax
  DWORD v27; // eax
  int APOPropertiesInternal; // eax
  int v29; // esi
  unsigned int v30; // edx
  unsigned int phkDevice; // [rsp+20h] [rbp-E0h]
  unsigned int phkDevicea; // [rsp+20h] [rbp-E0h]
  DEVNODE pdnDevInst; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  _QWORD *v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  char v39; // [rsp+68h] [rbp-98h]
  _QWORD *v40; // [rsp+70h] [rbp-90h]
  _QWORD *v41; // [rsp+78h] [rbp-88h]
  struct APO_REG_PROPERTIES v42; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v43; // [rsp+4D0h] [rbp+3D0h] BYREF
  int v44; // [rsp+4E0h] [rbp+3E0h]
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+418h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids, a1);
  }
  memset_0(&v42, 0, sizeof(v42));
  v37 = 0LL;
  v38 = 0LL;
  v43 = *a1;
  v44 = 100;
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
  if ( a2 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &v43, pvar);
    v12 = v11;
    if ( v11 < 0 )
    {
      v22 = 557LL;
LABEL_24:
      v23 = (unsigned int)v11;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)v23);
      goto LABEL_16;
    }
  }
  if ( LOWORD(pvar[0]) == 31 )
  {
    pdnDevInst = 0;
    v24 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)pvar[1], 0);
    v25 = CM_MapCrToWin32Err(v24, 0x507u);
    if ( v25 )
    {
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x236,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
              (const char *)v25,
              phkDevice);
      goto LABEL_16;
    }
    hKey = 0LL;
    v26 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, &hKey, 1u);
    v27 = CM_MapCrToWin32Err(v26, 0x507u);
    if ( v27 )
    {
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x23A,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
              (const char *)v27,
              phkDevicea);
    }
    else
    {
      APOPropertiesInternal = GetAPOPropertiesInternal(hKey, a1, &v42);
      v12 = APOPropertiesInternal;
      if ( APOPropertiesInternal >= 0 )
      {
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_6;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)APOPropertiesInternal);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    goto LABEL_16;
  }
  v11 = GetAPOPropertiesInternal(HKEY_CLASSES_ROOT, a1, &v42);
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = 579LL;
    goto LABEL_24;
  }
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
LABEL_6:
  Flags = v42.Flags;
  if ( (v42.u32MaxOutputConnections != 1 || v42.u32MaxInputConnections != 1) && (v42.Flags & 0x10) == 0 )
  {
    v12 = -2005139401;
    v23 = 2289827895LL;
    v22 = 585LL;
    goto LABEL_25;
  }
  v14 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  v40 = v14;
  if ( v14 )
  {
    v14[1] = 0LL;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 6) = a3;
    v14[4] = 0LL;
    *((_DWORD *)v14 + 10) = 2;
    *v14 = &CAPOProcessNode::`vftable';
    *((_DWORD *)v14 + 12) = Flags;
  }
  else
  {
    v15 = 0LL;
  }
  v40 = v15;
  if ( v15 )
  {
    v16 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v16;
    v41 = v16;
    if ( v16 )
    {
      v16[5] = 0LL;
      *((_DWORD *)v16 + 12) = 1;
      *((_DWORD *)v16 + 13) = 1;
      v16[7] = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    v41 = v19;
    if ( v19 )
    {
      v20 = pvar[1];
      *(_DWORD *)v19 = a4;
      *((_DWORD *)v19 + 1) = a5;
      *(CLSID *)(v19 + 1) = v42.clsid;
      *(_OWORD *)(v19 + 3) = *a6;
      if ( v20
        && (v37 = v19 + 7,
            v38 = 0LL,
            v39 = 1,
            v29 = _AllocString<CTCoAllocPolicy>(v18, v17, v20, &v38),
            wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v37),
            v29 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27D,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.h",
          (const char *)(unsigned int)v29);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x251,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
          (const char *)(unsigned int)v29);
        CAPOInstance::`scalar deleting destructor'((CAPOInstance *)v19, v30);
        (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
        v12 = v29;
      }
      else
      {
        v15[4] = v19;
        *a7 = v15;
        v12 = 0;
      }
    }
    else
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)0x8007000ELL);
      (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
    }
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_16:
  PropVariantClear(pvar);
  return v12;
}
