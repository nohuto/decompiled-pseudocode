/*
 * XREFs of ActivatePolicyManager @ 0x18002B210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x180027A9C (--$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPol.c)
 */

__int64 __fastcall ActivatePolicyManager(__int64 a1, struct IVolumeProvider *a2, __int64 a3, _QWORD *a4)
{
  void *v5; // rcx
  int Instance; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  g_VolumeProvider = a2;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               3u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &g_DeviceEnumerator);
  if ( Instance < 0 )
  {
    v7 = 107LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = Microsoft::WRL::Details::MakeAndInitialize<CWindowsPolicyManager,CWindowsPolicyManager,>(v5);
  if ( Instance < 0 )
  {
    v7 = 109LL;
    goto LABEL_3;
  }
  *a4 = g_PolicyManager;
  return 0LL;
}
