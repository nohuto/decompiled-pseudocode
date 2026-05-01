/*
 * XREFs of ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@QEAAJPEAVIamAccess@@PEAVPrivilegedOperationsService@@@Z @ 0x180110530
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180110468 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x18005CC4C (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 *     ??$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAVWeakRef@01@@Z @ 0x180110AD0 (--$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAV.c)
 */

__int64 __fastcall PrivilegedOperationsBase<IPrivilegedForegroundOperations>::RuntimeClassInitialize(
        __int64 a1,
        volatile int *a2,
        __int64 a3)
{
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IamAccess>::operator=((volatile signed __int32 **)(a1 + 48), a2);
  v10 = (__int64 *)(a1 + 56);
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
  v6 = Microsoft::WRL::AsWeak<PrivilegedOperationsService>(a3, v5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
