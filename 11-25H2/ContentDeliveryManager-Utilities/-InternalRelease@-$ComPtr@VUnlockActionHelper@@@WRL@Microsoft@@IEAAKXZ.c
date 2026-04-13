/*
 * XREFs of ?InternalRelease@?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800530D4
 * Callers:
 *     ??$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVUnlockActionHelper@@AEAPEAUIInspectable@@@Z @ 0x180047118 (--$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??1?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18004BE3C (--1-$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180055AA0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180055C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v1);
  }
  return result;
}
