/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18004D68C
 * Callers:
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18004CB78 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18004D378 (-Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18004D634 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D38B8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D6EA8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D8020 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x1800D9570 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D989C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DA3EC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DB4CC (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@PenDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DC480 (-Initialize@PenDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18004D808 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004DADC (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004E250 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  _DWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  int v15[2]; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = operator new[](4uLL);
  *((_QWORD *)this + 343) = v8;
  *v8 = 0;
  *((_DWORD *)this + 688) = 1;
  **((_DWORD **)this + 343) = *(_DWORD *)a3;
  v9 = RIMDeviceCollection::InitializeSyncObjects(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v9,
      v14);
    RIMDeviceCollection::Close(this);
  }
  else
  {
    *((_DWORD *)this + 8) = 32;
    *(_QWORD *)v15 = *((_QWORD *)this + 6);
    v11 = RIMRegisterForInputEx(32LL, 0LL, *((unsigned int *)this + 688), *((_QWORD *)this + 343));
    if ( v11 < 0 )
    {
      v10 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x6E,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
              (const char *)(unsigned int)v11,
              v15[0]);
      RIMDeviceCollection::Close(this);
    }
    else
    {
      if ( !*((_QWORD *)this + 10) )
        *((_QWORD *)this + 10) = 0LL;
      v12 = RIMDeviceCollection::InitializeRIM(this, a5, lpTargetHandle);
      v10 = v12;
      if ( v12 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)(unsigned int)v12,
        v15[0]);
      RIMDeviceCollection::Close(this);
    }
  }
  return v10;
}
