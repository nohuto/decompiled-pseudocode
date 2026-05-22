/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18008F554
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18007C670 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x1801C80C4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801C851C (-Initialize@DWMCursor@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Create(__int64 a1, __int64 a2, unsigned int a3, DWMCursor **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  void *v10; // rax
  DWMCursor *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v8 = -2147024809;
    v9 = 110LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)v8,
      v15);
    return v8;
  }
  *a4 = 0LL;
  v10 = RefCountedObject::operator new(0x170uLL);
  if ( v10 )
    v11 = (DWMCursor *)DWMCursor::DWMCursor(v10, a1, a3, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v8 = -2147024882;
    v9 = 123LL;
    goto LABEL_11;
  }
  v12 = DWMCursor::Initialize(v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a4 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v12,
      v15);
    return v13;
  }
}
