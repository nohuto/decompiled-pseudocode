/*
 * XREFs of ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EE7C
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1801500F0 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A200 (--$As@UIResizeAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014D878 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ResizeProcessor::HitTest(
        ResizeProcessor *this,
        struct HitTestResult *a2,
        enum Windows::UI::Internal::Input::InputResizeRegion *a3,
        struct BamoResizeControllerClientProxy **a4,
        struct InputSite **a5)
{
  __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __m128i v20; // xmm6
  __int64 v21; // rax
  struct BamoResizeControllerClientProxy *v22; // rbx
  __int64 (__fastcall ***v23)(_QWORD); // rdi
  __int64 *v24; // rcx
  struct BamoResizeControllerClientProxy *v25; // rbx
  __int64 (__fastcall ***v26)(_QWORD); // rdi
  _QWORD *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 *v29; // rcx
  enum Windows::UI::Internal::Input::InputResizeRegion *v30; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall ***v31)(_QWORD); // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v32)(_QWORD); // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-30h]
  GUID v35; // [rsp+48h] [rbp-28h]

  v30 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v35 = GUID_NULL;
  v6 = *((_QWORD *)a2 + 13);
  v7 = *(__int64 **)(v6 - 24);
  v8 = *(__int64 **)(v6 - 16);
  v34 = v8;
  v9 = *(_QWORD *)GUID_NULL.Data4;
  v10 = *(_QWORD *)&GUID_NULL.Data1;
  v11 = *(_QWORD *)GUID_NULL.Data4;
  v12 = *(_QWORD *)&GUID_NULL.Data1;
  while ( v7 != v8 )
  {
    v13 = v10 - v12;
    if ( v10 == v12 )
      v13 = v9 - v11;
    if ( !v13 && a3 )
    {
      v14 = *v7;
      v33 = 0LL;
      v15 = *(_QWORD *)(v14 + 488);
      v16 = *(_QWORD *)(v14 + 496);
      if ( v15 != v16 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IResizeAreaClientProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v15 + 8),
                      &v33) >= 0 )
            break;
          v15 += 16LL;
        }
        while ( v15 != v16 );
        v13 = v33;
      }
      v17 = v13 - 8;
      v18 = -v13;
      v19 = (_QWORD *)(v17 & -(__int64)(v18 != 0));
      *(_QWORD *)&v35.Data1 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))*v19)(v17 & -(__int64)(v18 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      if ( v19 )
      {
        v20 = *(__m128i *)(*(__int64 (__fastcall **)(_QWORD *))(v19[1] + 24LL))(v19 + 1);
        *(_DWORD *)v30 = (*(__int64 (__fastcall **)(_QWORD *))(v19[1] + 32LL))(v19 + 1);
        v9 = _mm_srli_si128(v20, 8).m128i_u64[0];
        v10 = v20.m128i_i64[0];
        (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
      }
      v11 = *(_QWORD *)GUID_NULL.Data4;
      v12 = *(_QWORD *)&GUID_NULL.Data1;
      a3 = v30;
    }
    v21 = v10 - v12;
    if ( v10 == v12 )
      v21 = v9 - v11;
    if ( v21 )
    {
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v7, (__int64 *)&v32);
      v25 = (struct BamoResizeControllerClientProxy *)v32;
      if ( v32 )
      {
        v26 = v32 + 1;
        if ( (unsigned int)v32[1][9](v32 + 1) == 1
          || (unsigned int)((__int64 (__fastcall **)(char *))*v26)[9]((char *)v25 + 8) == 2 )
        {
          v27 = (_QWORD *)((__int64 (__fastcall **)(char *))*v26)[8]((char *)v25 + 8);
          v28 = *v27 - v10;
          if ( *v27 == v10 )
            v28 = v27[1] - v9;
          if ( !v28 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v32);
            *a4 = v25;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7);
            *a5 = (struct InputSite *)*v7;
            v29 = (__int64 *)&v32;
            goto LABEL_35;
          }
        }
      }
      v24 = (__int64 *)&v32;
    }
    else
    {
      if ( !a3 )
        goto LABEL_32;
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v7, (__int64 *)&v31);
      v22 = (struct BamoResizeControllerClientProxy *)v31;
      if ( v31 )
      {
        v23 = v31 + 1;
        if ( !(unsigned int)v31[1][9](v31 + 1)
          || (unsigned int)((__int64 (__fastcall **)(char *))*v23)[9]((char *)v22 + 8) == 2 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v31);
          *a4 = v22;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7);
          *a5 = (struct InputSite *)*v7;
          v29 = (__int64 *)&v31;
LABEL_35:
          Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v29);
          return;
        }
      }
      v24 = (__int64 *)&v31;
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v24);
    a3 = v30;
    v12 = *(_QWORD *)&GUID_NULL.Data1;
    v11 = *(_QWORD *)GUID_NULL.Data4;
LABEL_32:
    ++v7;
    v8 = v34;
  }
}
