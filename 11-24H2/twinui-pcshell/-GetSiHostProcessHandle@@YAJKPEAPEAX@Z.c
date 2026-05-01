/*
 * XREFs of ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180063514
 * Callers:
 *     ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180063220 (-v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180226C8C (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180426760 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1801BC75C (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSiHostProcessHandle(unsigned int a1, void **a2)
{
  HRESULT Instance; // ebx
  int ServerProcessHandle; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_6b3b8d23_fa8d_40b9_8dbd_b950333e2c52,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    ServerProcessHandle = IUnknown_GetServerProcessHandle(ppv, a1, a2);
    Instance = ServerProcessHandle;
    if ( ServerProcessHandle >= 0 )
      Instance = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (int)"desktop\\internal\\shell\\inc\\private\\ShellInfrastructureHelpers.h",
        (const char *)(unsigned int)ServerProcessHandle);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
