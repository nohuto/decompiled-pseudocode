/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x18010D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180052354 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  unsigned __int64 v6; // rsi
  char *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  float *v12; // rax
  float v13; // xmm7_4
  CVolumeUnit *v14; // rax
  int v15; // eax
  int v16; // eax
  float *v17; // rax
  float *v18; // rax
  int v20[2]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( a3 < 0.0 || a3 > 1.0 )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
  v8 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *(_QWORD *)v20 = v8;
  if ( (unsigned int)v6 < *((_DWORD *)this + 29) )
  {
    v12 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v6);
    v13 = fmaxf(v12[2], fminf(v12[3], v12[1]));
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v6);
    v15 = CVolumeUnit::SetWiper(v14, a3);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 232LL))(this, (unsigned int)v6);
      v9 = v16;
      if ( v16 >= 0 )
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
          *((_QWORD *)this + 16),
          0LL,
          a4);
        if ( a5 )
        {
          v18 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v6);
          *a5 = v13 == fmaxf(v18[2], fminf(v18[3], v18[1]));
        }
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x339,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v16);
        v17 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v6);
        v17[1] = fmaxf(v17[2], fminf(v17[5], v13));
      }
      goto LABEL_13;
    }
    v10 = (unsigned int)v15;
    v11 = 819LL;
  }
  else
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 814LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v10);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v20);
  return v9;
}
