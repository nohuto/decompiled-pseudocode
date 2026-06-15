/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180051CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18001F350 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180052294 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180052354 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     WPP_SF_qdg @ 0x180086310 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdgg @ 0x1800C4A54 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x18010DFD4 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x18010E0A4 (WPP_SF_qggg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rsi
  int v10; // r8d
  float Wiper; // xmm12_4
  int v12; // r15d
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  float v15; // xmm11_4
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  _DWORD *v20; // rax
  int v21; // xmm9_4
  int v22; // xmm8_4
  int v23; // xmm7_4
  float *v24; // rax
  float v25; // xmm6_4
  float *v26; // rax
  float v27; // xmm7_4
  float *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ebx
  float *v32; // rax
  float v33; // xmm6_4
  float *v34; // rax
  float *v35; // rax
  int v36; // eax
  __int64 v37; // rax
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+40h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = *((unsigned int *)this + 28);
  v9 = (_QWORD *)((char *)this + 80);
  v38 = v7;
  if ( v8 >= *((_QWORD *)this + 11) )
    goto LABEL_46;
  Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*v9 + (v8 << 6)));
  v12 = 1;
  if ( a2 != Wiper )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qg_guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        23,
        v10,
        (_DWORD)this,
        COERCE_UNSIGNED_INT64(a2),
        (__int64)a3);
      v13 = WPP_GLOBAL_Control;
    }
    v14 = *((unsigned int *)this + 28);
    if ( v14 < *((_QWORD *)this + 11) )
    {
      v15 = fmaxf(
              fminf(
                *(float *)(*v9 + ((unsigned __int64)(unsigned int)v14 << 6) + 4),
                *(float *)(*v9 + ((unsigned __int64)(unsigned int)v14 << 6) + 12)),
              *(float *)(*v9 + ((unsigned __int64)(unsigned int)v14 << 6) + 8));
      if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x10000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
        WPP_SF_qdg(v13[2], 24LL, &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids, this, v14, a2);
      v16 = *((unsigned int *)this + 28);
      if ( v16 < *((_QWORD *)this + 11) )
      {
        v17 = CVolumeUnit::SetWiper((CVolumeUnit *)(*v9 + (v16 << 6)), a2);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E6,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
            (const char *)(unsigned int)v17);
          if ( v7 )
            LeaveCriticalSection(v7);
          return v18;
        }
        v20 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (char *)this + 80,
                          *((unsigned int *)this + 28));
        v21 = v20[4];
        v22 = v20[3];
        v23 = v20[2];
        v24 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (char *)this + 80,
                         *((unsigned int *)this + 28));
        v25 = fmaxf(fminf(v24[1], v24[3]), v24[2]);
        AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
        *((float *)this + 52) = v25;
        *((_DWORD *)this + 53) = v23;
        *((_DWORD *)this + 54) = v22;
        *((_DWORD *)this + 55) = v21;
        v26 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (char *)this + 80,
                         *((unsigned int *)this + 28));
        v27 = fmaxf(fminf(v26[1], v26[3]), v26[2]) - v15;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v28 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (char *)this + 80,
                           *((unsigned int *)this + 28));
          WPP_SF_qggg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            v29,
            v30,
            this,
            v27,
            fmaxf(fminf(v28[1], v28[3]), v28[2]),
            v15);
        }
        v31 = 0;
        if ( *((_DWORD *)this + 29) )
        {
          do
          {
            if ( v31 != *((_DWORD *)this + 28) )
            {
              v32 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (char *)this + 80,
                               v31);
              v33 = fmaxf(fminf(v32[1], v32[3]), v32[2]) + v27;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v34 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (char *)this + 80,
                                 v31);
                WPP_SF_qdgg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  26LL,
                  &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
                  this,
                  v31,
                  fmaxf(fminf(v34[1], v34[3]), v34[2]),
                  v33);
              }
              v35 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (char *)this + 80,
                               v31);
              v35[1] = fmaxf(fminf(v33, v35[5]), v35[2]);
            }
            ++v31;
          }
          while ( v31 < *((_DWORD *)this + 29) );
          v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
        }
        v36 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 240LL))(this, 0LL);
        v18 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x303,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
            (const char *)(unsigned int)v36);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
          return v18;
        }
        if ( !a3 )
          goto LABEL_38;
        v37 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
        if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
          v37 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
        if ( v37 )
LABEL_38:
          (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
            *((_QWORD *)this + 16),
            0LL,
            a3);
        goto LABEL_39;
      }
    }
LABEL_46:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_39:
  if ( a4 )
  {
    if ( Wiper != a2 )
      v12 = 0;
    *a4 = v12;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
