/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18001EC10 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18001F350 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qg_guid_ @ 0x18010DFD4 (WPP_SF_qg_guid_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v9; // r8d
  unsigned __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  float v13; // xmm10_4
  float v14; // xmm8_4
  int v15; // xmm11_4
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned __int64 v19; // rax
  unsigned int v20; // ebp
  float i; // xmm8_4
  int v22; // eax
  CVolumeStrip *v23; // rcx
  int (*v24)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *); // rax
  int v25; // r15d
  float v26; // xmm9_4
  unsigned __int64 v27; // rax
  float v28; // xmm6_4
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  float v32; // xmm2_4
  float v33; // xmm1_4
  float *v34; // rax
  float v35; // xmm6_4
  float *v36; // rax
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v10 = *((unsigned int *)this + 28);
  v11 = (__int64 *)((char *)this + 80);
  v38 = v4;
  if ( v10 >= *((_QWORD *)this + 11) )
    goto LABEL_37;
  v12 = v10 << 6;
  v13 = *(float *)(v12 + *v11 + 8);
  v14 = *(float *)(v12 + *v11 + 12);
  v15 = *(_DWORD *)(v12 + *v11 + 16);
  if ( v13 > a2 || a2 > v14 )
  {
    v16 = 598LL;
    goto LABEL_4;
  }
  v25 = 1;
  v26 = fmaxf(fminf(*(float *)(v12 + *v11 + 4), v14), v13);
  if ( v26 != a2 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v9, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
    }
    v27 = *((unsigned int *)this + 28);
    if ( v27 >= *((_QWORD *)this + 11) )
      goto LABEL_37;
    v28 = fmaxf(
            fminf(*(float *)(*v11 + (v27 << 6) + 4), *(float *)(*v11 + (v27 << 6) + 12)),
            *(float *)(*v11 + (v27 << 6) + 8));
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
    *((float *)this + 52) = v28;
    *((float *)this + 53) = v13;
    *((float *)this + 54) = v14;
    *((_DWORD *)this + 55) = v15;
    v29 = *((unsigned int *)this + 28);
    if ( v29 >= *((_QWORD *)this + 11) )
      goto LABEL_37;
    v30 = *v11;
    v31 = v29 << 6;
    v32 = *(float *)(v31 + *v11 + 8);
    v33 = fmaxf(fminf(*(float *)(v31 + *v11 + 4), *(float *)(v31 + *v11 + 12)), v32);
    if ( v32 <= a2 && a2 <= *(float *)(v31 + v30 + 12) )
    {
      *(float *)(v31 + v30 + 4) = fmaxf(fminf(a2, *(float *)(v31 + v30 + 20)), v32);
      v19 = *((unsigned int *)this + 28);
      if ( v19 < *((_QWORD *)this + 11) )
      {
        v20 = 0;
        for ( i = fmaxf(
                    fminf(*(float *)(*v11 + (v19 << 6) + 4), *(float *)(*v11 + (v19 << 6) + 12)),
                    *(float *)(*v11 + (v19 << 6) + 8))
                - v33; v20 < *((_DWORD *)this + 29); ++v20 )
        {
          if ( v20 != *((_DWORD *)this + 28) )
          {
            v34 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (char *)this + 80,
                             v20);
            v35 = fmaxf(fminf(v34[1], v34[3]), v34[2]);
            v36 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (char *)this + 80,
                             v20);
            v36[1] = fmaxf(fminf(v35 + i, v36[5]), v36[2]);
          }
        }
        v22 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 240LL))(this, 0LL);
        v17 = v22;
        if ( v22 >= 0 )
        {
          v23 = (CVolumeStrip *)*((_QWORD *)this + 16);
          v24 = *(int (**)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *))(*(_QWORD *)v23 + 24LL);
          if ( v24 == CVolumeStrip::OnNotify )
            CVolumeStrip::OnNotify(v23, 0, a3);
          else
            ((void (__fastcall *)(CVolumeStrip *, _QWORD, const struct _GUID *))v24)(v23, 0LL, a3);
          goto LABEL_11;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x278,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v22);
LABEL_5:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
        return v17;
      }
LABEL_37:
      ATL::AtlThrowImpl(-2147024809);
    }
    v16 = 615LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    v17 = -2147024809;
    goto LABEL_5;
  }
LABEL_11:
  if ( a4 )
  {
    if ( v26 != a2 )
      v25 = 0;
    *a4 = v25;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
