/*
 * XREFs of ?InternalRelease@?$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801111A8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800989E8 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowingOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18010FEA8 (--$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperatio.c)
 *     ??1?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x1802CD8B8 (--1-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindowingOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801111D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedWindowingOperations,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
