/*
 * XREFs of ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z @ 0x1800839B4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C40BC (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGraphicsDeviceManager::Create(char a1, struct CGraphicsDeviceManager **a2)
{
  CBaseObject *v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CBaseObject *)DefaultHeap::AllocClear(0x68uLL);
  v5 = v4;
  v11 = v4;
  if ( v4 )
  {
    CBaseObject::CBaseObject(v4);
    *(_QWORD *)v5 = &CGraphicsDeviceManager::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_BYTE *)v5 + 96) = a1;
    v11 = v5;
    v6 = CGraphicsDeviceManager::Initialize(v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      *a2 = v5;
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v6,
        v9);
      CBaseObject::Release(v5);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)0x8007000ELL,
      v9);
    return 2147942414LL;
  }
}
