/*
 * XREFs of ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@EPEAPEAULampArrayDeviceView@@@Z @ 0x1800E9C28
 * Callers:
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800E6174 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@LampArrayDeviceView@@QEAAXEPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULampAttributes@@PEAI@Z @ 0x1800EA698 (-Initialize@LampArrayDeviceView@@QEAAXEPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HidLampArrayDevice::CreateClientView(
        HidLampArrayDevice *this,
        struct ISIPCEndpoint *a2,
        unsigned __int8 a3,
        struct LampArrayDeviceView **a4)
{
  struct DeviceAttributes *v4; // rbp
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v12; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LampArrayDeviceView *v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = (HidLampArrayDevice *)((char *)this + 544);
  *a4 = 0LL;
  v7 = 44LL * *((int *)this + 136);
  v16 = 0LL;
  v9 = v7 + 5231;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)this + v10 + 12) );
  v12 = (*(__int64 (__fastcall **)(struct ISIPCEndpoint *, __int64, __int64, char *, LampArrayDeviceView **))(*(_QWORD *)a2 + 24LL))(
          a2,
          v9,
          2 * v10,
          (char *)this + 24,
          &v16);
  v13 = v12;
  if ( v12 >= 0 )
  {
    LampArrayDeviceView::Initialize(
      v16,
      a3,
      (unsigned __int16 *)this + 12,
      (HidLampArrayDevice *)((char *)this + 538),
      v4,
      *((struct LampAttributes **)this + 71),
      *((unsigned int **)this + 72));
    *a4 = v16;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
}
