/*
 * XREFs of ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x180038A50
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180032680 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputStateManager::CreateProcessorForDevice(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IInputProcessor **a3)
{
  char *v4; // rax
  unsigned int v5; // esi
  __int64 (__fastcall **v6)(const struct DeviceInfo *); // rbx
  int v7; // edi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInputProcessor *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v9[2] = 0LL;
  v9[0] = a2;
  if ( this )
    v4 = (char *)this + 8;
  else
    v4 = 0LL;
  v9[1] = v4;
  if ( !a2 || !v4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v9[0]);
  v5 = 0;
  v6 = &off_180244380;
  do
  {
    if ( IsEdition((unsigned __int64)*(v6 - 1)) && (!*v6 || (unsigned int)(*v6)((const struct DeviceInfo *)v9[0])) )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD *, struct IInputProcessor **))v6[1])(v9, &v11);
      if ( v7 >= 0 )
        break;
    }
    ++v5;
    v6 += 6;
    v7 = -2147023728;
  }
  while ( v5 < 0x13 );
  if ( v7 >= 0 )
  {
    *a3 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x260,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
    return (unsigned int)v7;
  }
}
