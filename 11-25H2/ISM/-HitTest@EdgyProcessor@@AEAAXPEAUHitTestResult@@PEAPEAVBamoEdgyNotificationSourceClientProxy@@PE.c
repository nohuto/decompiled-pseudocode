/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180152548
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180153928 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIEdgyNotificationSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyNotificationSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005C010 (--$As@UIEdgyNotificationSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyNotificationSourceClientProxy **a3,
        struct InputSite **a4)
{
  __int64 **v6; // rdi
  __int64 **v7; // rbp
  __int64 *v8; // rsi
  __int64 *v9; // r15
  __int64 v10; // rcx
  EdgyProcessor *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 (__fastcall ***v14)(_QWORD); // rbx
  EdgyProcessor *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v15 = this;
    v6 = (__int64 **)*((_QWORD *)a2 + 12);
    v7 = (__int64 **)*((_QWORD *)a2 + 13);
LABEL_12:
    if ( v6 != v7 )
    {
      v8 = *v6;
      v9 = v6[1];
      while ( 1 )
      {
        if ( v8 == v9 )
        {
          v6 += 3;
          goto LABEL_12;
        }
        v10 = *v8;
        v11 = 0LL;
        v15 = 0LL;
        v12 = *(_QWORD *)(v10 + 488);
        v13 = *(_QWORD *)(v10 + 496);
        if ( v12 != v13 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyNotificationSourceClientProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                        (__int64 *)&v15) >= 0 )
              break;
            v12 += 16LL;
          }
          while ( v12 != v13 );
          v11 = v15;
        }
        v14 = (__int64 (__fastcall ***)(_QWORD))(((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL));
        v16 = v14;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        if ( v14 )
          break;
        ++v8;
      }
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
      *a3 = (struct BamoEdgyNotificationSourceClientProxy *)v14;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8);
      *a4 = (struct InputSite *)*v8;
      (*v14)[1](v14);
    }
  }
}
