/*
 * XREFs of ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180082878
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18007BE30 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMDeviceCollection::ResetDevice(
        RIMDeviceCollection *this,
        struct RIMDevice *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)a2 + 4);
  if ( *(_DWORD *)(v4 + 8) < 0x60Cu )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x476,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      a4);
  v5 = (*(_DWORD *)(v4 + 4) & 0xFFFFFEFF) == 0;
  *(_BYTE *)(v4 + 38) = 1;
  if ( v5
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v4),
        v7 = v6,
        v6 >= 0) )
  {
    *(_BYTE *)(v4 + 38) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x480,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v6,
      v9);
    return v7;
  }
}
