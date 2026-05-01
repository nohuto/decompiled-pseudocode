/*
 * XREFs of ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180510820
 * Callers:
 *     ?GetPersistedPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180028FEC (-GetPersistedPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShell.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyTo@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CE950 (-CopyTo@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAK@Z @ 0x180510618 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPri.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPriority_CreateInstance(unsigned int a1, const struct _GUID *a2, void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  PositionerPriority *v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  *a3 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,unsigned long &>(&v9, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 328LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::ComPtr<PositionerPriority>::CopyTo(&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 329LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return v4;
}
