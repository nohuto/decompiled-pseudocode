/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x1801522D8
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180153928 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIEdgyDragSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyDragSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005DC38 (--$As@UIEdgyDragSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180146CF0 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyDragSourceClientProxy **a3,
        struct BamoDragManagerClientProxy **a4,
        struct InputSite **a5,
        struct InputSite **a6)
{
  __int64 **v6; // rsi
  __int64 **v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  __m128i v19; // xmm6
  __int64 v20; // rax
  struct BamoDragManagerClientProxy *v21; // rbx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rcx
  struct BamoDragManagerClientProxy *v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  struct BamoEdgyDragSourceClientProxy **v26; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+38h] [rbp-48h] BYREF
  struct InputSite **v28; // [rsp+40h] [rbp-40h]
  struct BamoDragManagerClientProxy **v29; // [rsp+48h] [rbp-38h]
  struct InputSite **v30; // [rsp+50h] [rbp-30h]
  GUID v31; // [rsp+58h] [rbp-28h]

  v29 = a4;
  v26 = a3;
  v28 = a5;
  v30 = a6;
  v31 = GUID_NULL;
  if ( a3 )
  {
    if ( a4 )
    {
      v6 = (__int64 **)*((_QWORD *)a2 + 12);
      v7 = (__int64 **)*((_QWORD *)a2 + 13);
      if ( v6 != v7 )
      {
        v8 = *(_QWORD *)v31.Data4;
        v9 = *(_QWORD *)&v31.Data1;
        v10 = *(_QWORD *)GUID_NULL.Data4;
        v11 = *(_QWORD *)&GUID_NULL.Data1;
        while ( 2 )
        {
          v12 = *v6;
          v13 = v6[1];
          *(_QWORD *)&v31.Data1 = v13;
          while ( v12 != v13 )
          {
            v14 = v9 - v11;
            if ( v9 == v11 )
              v14 = v8 - v10;
            if ( !v14 )
            {
              v15 = *v12;
              v25 = 0LL;
              v16 = *(_QWORD *)(v15 + 488);
              v17 = *(_QWORD *)(v15 + 496);
              if ( v16 != v17 )
              {
                do
                {
                  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyDragSourceClientProxy>(
                              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v16 + 8),
                              &v25) >= 0 )
                    break;
                  v16 += 16LL;
                }
                while ( v16 != v17 );
                v14 = v25;
              }
              v18 = (v14 - 8) & -(__int64)(v14 != 0);
              v27 = (__int64 (__fastcall ***)(_QWORD))v18;
              Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v27);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
              if ( v18 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v27);
                *v26 = (struct BamoEdgyDragSourceClientProxy *)v18;
                v19 = *(__m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v18 + 8) + 24LL))(v18 + 8);
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
                *v28 = (struct InputSite *)*v12;
                v8 = _mm_srli_si128(v19, 8).m128i_u64[0];
                v9 = v19.m128i_i64[0];
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
              }
              v10 = *(_QWORD *)GUID_NULL.Data4;
              v11 = *(_QWORD *)&GUID_NULL.Data1;
              a3 = v26;
            }
            v20 = v9 - v11;
            if ( v9 == v11 )
              v20 = v8 - v10;
            if ( v20 && *a3 )
            {
              InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v12, (__int64 *)&v24);
              v21 = v24;
              if ( v24 )
              {
                v22 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v24 + 1) + 80LL))((char *)v24 + 8);
                v23 = *v22 - v9;
                if ( *v22 == v9 )
                  v23 = v22[1] - v8;
                if ( !v23 )
                {
                  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v24);
                  *v29 = v21;
                  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
                  *v30 = (struct InputSite *)*v12;
                  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v24);
                  return;
                }
              }
              Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v24);
              v10 = *(_QWORD *)GUID_NULL.Data4;
              v11 = *(_QWORD *)&GUID_NULL.Data1;
            }
            ++v12;
            a3 = v26;
            v13 = *(__int64 **)&v31.Data1;
          }
          v6 += 3;
          if ( v6 != v7 )
            continue;
          break;
        }
      }
    }
  }
}
