/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D9AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?GetPreparsedData@HIDDevice@@QEAAJPEAPEAXPEAK@Z @ 0x1800DCC8C (-GetPreparsedData@HIDDevice@@QEAAJPEAPEAXPEAK@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800DD5D8 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(GazeDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int Device; // ebx
  __int64 v8; // rdx
  unsigned int v10; // edi
  struct GazeDeviceInfo *v11; // rcx
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  struct GazeDeviceInfo *v13; // [rsp+38h] [rbp-38h] BYREF
  struct RIMDevice *v14; // [rsp+40h] [rbp-30h] BYREF
  void *v15[3]; // [rsp+48h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v18; // [rsp+A8h] [rbp+38h] BYREF

  v14 = 0LL;
  v18 = 0;
  v13 = 0LL;
  v6 = operator new(0x60CuLL);
  v15[0] = v6;
  memset_0(v6, 0, 0x60CuLL);
  v6[2] = 1548;
  Src = v6;
  v15[1] = &Src;
  v15[2] = &v13;
  v16 = 1;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, (struct DeviceInfo **)&Src);
  if ( Device < 0 )
  {
    v8 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    if ( Src )
    {
      operator delete(Src, (const struct std::nothrow_t *)0x60C);
      Src = 0LL;
    }
    if ( v13 )
      operator delete(v13, (const struct std::nothrow_t *)0x638);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v14, 0LL);
  if ( Device < 0 )
  {
    v8 = 138LL;
    goto LABEL_3;
  }
  Device = HIDDevice::GetPreparsedData(v14, v15, &v18);
  if ( Device < 0 )
  {
    v8 = 140LL;
    goto LABEL_3;
  }
  v10 = v18 + 1592;
  v13 = (struct GazeDeviceInfo *)operator new(v18 + 1592);
  memset_0(v13, 0, v10);
  memcpy_0(v13, Src, 0x60CuLL);
  *((_DWORD *)v13 + 2) = v10;
  Device = GazeHidDevice::Initialize(v14, v13);
  if ( Device < 0 )
  {
    v8 = 155LL;
    goto LABEL_3;
  }
  *a3 = v13;
  v11 = 0LL;
  v13 = 0LL;
  if ( Src )
  {
    operator delete(Src, (const struct std::nothrow_t *)0x60C);
    Src = 0LL;
    v11 = v13;
  }
  if ( v11 )
    operator delete(v11, (const struct std::nothrow_t *)0x638);
  return 0LL;
}
