/*
 * XREFs of ?Initialize@PenDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DC480
 * Callers:
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004DF94 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18004D68C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenDeviceCollection::Initialize(PenDeviceCollection *this, void **a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 852000;
  v4 = HIDDeviceCollection::Initialize(this, (__int64)a2, (struct _RIM_USAGE_ANDPAGE *const)&v8, a4, 1u, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
