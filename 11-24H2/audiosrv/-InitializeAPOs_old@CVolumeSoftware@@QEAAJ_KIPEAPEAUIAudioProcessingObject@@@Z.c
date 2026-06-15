/*
 * XREFs of ?InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180113D74
 * Callers:
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180085A90 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180071B0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs_old(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  CVolumeSoftware *v6; // rdi
  int v7; // ebx
  unsigned int v8; // esi
  _QWORD *v9; // r12
  unsigned int v11; // eax
  unsigned int i; // ebx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  ATL::CAtlException *v16; // rbx
  int v17; // [rsp+30h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v19; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v20[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+D8h] [rbp+10h]
  unsigned int v23; // [rsp+E0h] [rbp+18h] BYREF

  v6 = this;
  v23 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
      this);
  }
  if ( !a3 )
    return 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
  v8 = 0;
  v9 = (_QWORD *)((char *)v6 + 248);
  do
  {
    ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 31);
    if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
           *a4,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           (char *)v6 + 248) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v23);
      if ( v7 < 0 )
        goto LABEL_18;
      if ( *v9 )
        break;
    }
    ++v8;
    ++a4;
  }
  while ( v8 < a3 );
  if ( !*((_QWORD *)v6 + 31) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids);
    }
    v7 = -2147467262;
LABEL_18:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs_old", 2478, v7);
    return (unsigned int)v7;
  }
  v11 = v23;
  if ( *((_DWORD *)v6 + 29) != v23 && *((_DWORD *)v6 + 29) )
  {
    for ( i = 1; ; ++i )
    {
      v22 = i;
      if ( i >= v11 )
        break;
      v13 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
      try
      {
        v20[0] = *v13;
        v20[1] = v13[1];
        v20[2] = v13[2];
        v20[3] = v13[3];
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v6 + 10, i, (__int64)v20);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v16 = v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v17 = *(_DWORD *)v16;
        v7 = *(_DWORD *)v16;
        if ( v17 < 0 )
          goto LABEL_18;
        v6 = this;
        i = v22;
      }
      v11 = v23;
    }
    *((_DWORD *)v6 + 29) = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  LOBYTE(v14) = 1;
  v15 = (*(__int64 (__fastcall **)(CVolumeSoftware *, __int64))(*(_QWORD *)v6 + 256LL))(v6, v14);
  v7 = v15;
  if ( v15 < 0 )
    goto LABEL_19;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
      v6,
      v15);
  }
  return (unsigned int)v7;
}
