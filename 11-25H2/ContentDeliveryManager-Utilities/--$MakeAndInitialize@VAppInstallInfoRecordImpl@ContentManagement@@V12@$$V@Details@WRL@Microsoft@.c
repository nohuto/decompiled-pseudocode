/*
 * XREFs of ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x1800721A8
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x1800738F0 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A7C4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x180041FBC (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x180042EB0 (-Attach@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAAXPEAVAppInstal.c)
 *     ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180044240 (-InternalRelease@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  ContentManagement::AppInstallInfoRecordImpl *v4; // rax
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  if ( v3 )
  {
    v4 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl((ContentManagement::AppInstallInfoRecordImpl *)v3);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::Attach(&v9, (__int64)v4);
    v5 = v9;
    v10 = 0LL;
    if ( v9 )
    {
      v6 = *(_QWORD *)(v9 + 64);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (Microsoft::WRL::Details *)(2 * v6 + 16),
        (volatile int *)((unsigned __int64)v6 >> 63));
LABEL_10:
      v5 = v9;
    }
    *a1 = v5;
    Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v9);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
  return v1;
}
