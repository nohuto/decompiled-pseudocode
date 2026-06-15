/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x14003E550 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x14003EBD0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x1400058D4 (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FED8 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024F54 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14002695C (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x14002854C (-NewNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNod.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::Initialize(
        CSubmixImpl *this,
        struct SUBMIX_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3)
{
  int DeviceGraphObjectCache; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void **v9; // r12
  LPVOID v10; // rax
  void **v11; // rbx
  __int64 v12; // rcx
  CPipeInstance **v13; // rbx
  int SubmixPipeInstance; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  LPVOID v20; // rax
  __int64 v21; // rdx
  ATL::CAtlException *v22; // rbx
  ATL::CAtlException *v23; // [rsp+38h] [rbp-40h] BYREF
  char *v24; // [rsp+40h] [rbp-38h]
  struct tWAVEFORMATEX *v25; // [rsp+48h] [rbp-30h] BYREF
  char v26; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v28; // [rsp+98h] [rbp+20h] BYREF

  DeviceGraphObjectCache = ValidateSubmixDescriptor(a2);
  if ( DeviceGraphObjectCache < 0 )
  {
    v19 = 245LL;
    goto LABEL_25;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 8,
    0LL);
  DeviceGraphObjectCache = _AllocString<CTCoAllocPolicy>(v8, v7, *((_QWORD *)a2 + 4), (char *)this + 8);
  if ( DeviceGraphObjectCache < 0 )
  {
    v19 = 253LL;
  }
  else
  {
    v9 = (void **)((char *)this + 216);
    v10 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (char *)this + 216,
      v10);
    if ( *((_QWORD *)this + 27) )
    {
      memcpy_0(*v9, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
      v11 = (void **)((char *)this + 224);
      if ( *((_DWORD *)a2 + 4) )
      {
        v20 = CoTaskMemAlloc(*((unsigned int *)a2 + 4));
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (char *)this + 224,
          v20);
        if ( !*v11 )
        {
          DeviceGraphObjectCache = -2147024882;
          v19 = 262LL;
          goto LABEL_25;
        }
        memcpy_0(*v11, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      }
      else
      {
        v24 = (char *)this + 224;
        v25 = 0LL;
        v26 = 1;
        DeviceGraphObjectCache = CloneWaveFormat((const struct tWAVEFORMATEX *)*v9, &v25);
        if ( v26 )
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v24,
            v25);
        if ( DeviceGraphObjectCache < 0 )
        {
          v19 = 268LL;
          goto LABEL_25;
        }
      }
      if ( *((_BYTE *)this + 313) )
        goto LABEL_17;
      v12 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      DeviceGraphObjectCache = GetDeviceGraphObjectCache(
                                 *((const unsigned __int16 **)a2 + 4),
                                 *((_QWORD *)a2 + 7),
                                 *((unsigned __int8 *)a2 + 12),
                                 (struct tWAVEFORMATEX *)*v9,
                                 (struct IDeviceGraphObjectCache **)this + 33);
      if ( DeviceGraphObjectCache >= 0 )
      {
        if ( *((_BYTE *)a2 + 84) )
        {
          v13 = (CPipeInstance **)((char *)this + 24);
          SubmixPipeInstance = CPipeInstance::CreateSubmixPipeInstance(
                                 *((struct IDeviceGraphObjectCache **)this + 33),
                                 a2,
                                 (struct CPipeInstance **)this + 3);
          if ( SubmixPipeInstance < 0 )
          {
            v21 = 280LL;
          }
          else
          {
            SubmixPipeInstance = CPipeInstance::Initialize(*v13);
            if ( SubmixPipeInstance < 0 )
            {
              v21 = 281LL;
            }
            else
            {
              SubmixPipeInstance = CPipeInstance::ConnectAPOs(*v13, a3);
              if ( SubmixPipeInstance >= 0 )
              {
                *((_DWORD *)this + 79) = *((_DWORD *)*v13 + 36);
                goto LABEL_17;
              }
              v21 = 282LL;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)SubmixPipeInstance);
          return (unsigned int)SubmixPipeInstance;
        }
LABEL_17:
        EnterCriticalSection(&g_CritSecSubmixList);
        try
        {
          v28 = (char *)this;
          v17 = ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(v15, &v28, v16, SubmixList);
        }
        catch ( ATL::CAtlException *v23 )
        {
          v22 = v23;
          if ( *(_DWORD *)v23 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v28) = *(_DWORD *)v22;
          SubmixPipeInstance = (int)v28;
          if ( (int)v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x125,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v28);
            goto LABEL_22;
          }
LABEL_21:
          SubmixPipeInstance = 0;
LABEL_22:
          LeaveCriticalSection(&g_CritSecSubmixList);
          return (unsigned int)SubmixPipeInstance;
        }
        if ( SubmixList )
          *(_QWORD *)(SubmixList + 8) = v17;
        else
          qword_1400C3C60 = v17;
        SubmixList = v17;
        goto LABEL_21;
      }
      v19 = 274LL;
    }
    else
    {
      DeviceGraphObjectCache = -2147024882;
      v19 = 256LL;
    }
  }
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)DeviceGraphObjectCache);
  return (unsigned int)DeviceGraphObjectCache;
}
