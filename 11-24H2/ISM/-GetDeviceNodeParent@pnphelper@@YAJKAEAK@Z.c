/*
 * XREFs of ?GetDeviceNodeParent@pnphelper@@YAJKAEAK@Z @ 0x1800CB314
 * Callers:
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C94C0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall pnphelper::GetDeviceNodeParent(DEVINST dnDevInst, PDEVINST pdnDevInst, unsigned int *a3)
{
  CONFIGRET Parent; // eax
  signed int v5; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Parent = CM_Get_Parent(pdnDevInst, dnDevInst, 0);
  if ( !Parent )
    return 0LL;
  *pdnDevInst = 0;
  v5 = CM_MapCrToWin32Err(Parent, 0x507u);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  result = 2147943568LL;
  if ( v6 != -2147023728 )
  {
    if ( (v6 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\pnphelper.cpp",
        (const char *)v6);
      return v6;
    }
    return 0LL;
  }
  return result;
}
