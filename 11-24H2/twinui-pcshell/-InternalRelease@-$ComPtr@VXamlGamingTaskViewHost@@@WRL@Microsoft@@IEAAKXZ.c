/*
 * XREFs of ?InternalRelease@?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18069FBC4
 * Callers:
 *     ??$MakeAndInitialize@VXamlGamingTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18069DDA0 (--$MakeAndInitialize@VXamlGamingTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Mi.c)
 *     ??$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18069DE58 (--$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 *     ??1?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18069E944 (--1-$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A1B18 (-XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180459330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteComma.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlGamingTaskViewHost>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
