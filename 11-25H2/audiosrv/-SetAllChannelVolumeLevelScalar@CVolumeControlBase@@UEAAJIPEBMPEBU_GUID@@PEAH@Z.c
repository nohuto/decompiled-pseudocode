/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x18010D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180052294 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180052354 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ebp
  __int64 i; // rsi
  CVolumeUnit *v15; // rax
  CVolumeUnit *v16; // rax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v20 = v5;
  if ( a2 < *((_DWORD *)this + 29) )
  {
    v13 = 0;
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             (unsigned int)i);
      if ( CVolumeUnit::GetWiper(v15) != a3[i] )
      {
        v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 10,
                               (unsigned int)i);
        v17 = CVolumeUnit::SetWiper(v16, a3[i]);
        v10 = v17;
        if ( v17 < 0 )
        {
          v11 = 878LL;
LABEL_10:
          v12 = (unsigned int)v17;
          goto LABEL_11;
        }
        ++v13;
      }
    }
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    v17 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 240LL))(this, 0LL);
    v10 = v17;
    if ( v17 < 0 )
    {
      v11 = 894LL;
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
      *((_QWORD *)this + 16),
      0LL,
      a4);
    if ( a5 )
      *a5 = v13 == 0;
    v10 = 0;
  }
  else
  {
    v10 = -2147024809;
    v11 = 867LL;
    v12 = 2147942487LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v12);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v10;
}
