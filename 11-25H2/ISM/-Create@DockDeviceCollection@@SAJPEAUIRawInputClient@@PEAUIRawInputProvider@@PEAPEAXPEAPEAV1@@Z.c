/*
 * XREFs of ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA080
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004CDA8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18004E0C4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x180080164 (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18008F510 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180098FA8 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DA3EC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DockDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HIDDeviceCollection *v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v16 = 0LL;
    v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xB20uLL);
    v9 = v8;
    if ( v8 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *(_QWORD *)v9 = &DockDeviceCollection::`vftable';
      *((_QWORD *)v9 + 345) = 0LL;
      *((_QWORD *)v9 + 346) = 0LL;
      *((_QWORD *)v9 + 347) = 0LL;
      *((_QWORD *)v9 + 348) = 0LL;
      *((_QWORD *)v9 + 349) = 0LL;
      *((_QWORD *)v9 + 350) = 0LL;
      *((_QWORD *)v9 + 351) = 0LL;
      std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)v9 + 347);
      std::_Mutex_base::_Mutex_base((HIDDeviceCollection *)((char *)v9 + 2816), 0);
      *((_QWORD *)v9 + 3) = a2;
    }
    else
    {
      v9 = 0LL;
    }
    v16 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 24LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)v11);
      std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
      return v10;
    }
    v13 = DockDeviceCollection::Initialize(v9, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 26LL;
      goto LABEL_12;
    }
    v16 = 0LL;
    *a4 = v9;
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
