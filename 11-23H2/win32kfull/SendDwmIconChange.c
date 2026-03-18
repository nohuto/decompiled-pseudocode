/*
 * XREFs of SendDwmIconChange @ 0x1C003F904
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01569C0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxGetWindowSmIcon @ 0x1C003D2A4 (xxxGetWindowSmIcon.c)
 *     DwmAsyncIconChange @ 0x1C003F854 (DwmAsyncIconChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _HasCaptionIcon @ 0x1C00E62B8 (_HasCaptionIcon.c)
 */

__int64 __fastcall SendDwmIconChange(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  v2 = 0LL;
  if ( (unsigned int)HasCaptionIcon(a1) && (v3 = a1 + 5, (*(_BYTE *)(a1[5] + 30) & 8) != 0) )
  {
    if ( xxxGetWindowSmIcon((ULONG_PTR)a1, 1) )
      v2 = *(_QWORD *)xxxGetWindowSmIcon((ULONG_PTR)a1, 1);
  }
  else
  {
    v3 = a1 + 5;
  }
  v4 = *(_QWORD *)(*v3 + 272);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  v5 = *a1;
  v8 = (void *)ReferenceDwmApiPort(v7, v6);
  return DwmAsyncIconChange(v8, v5, v2, v4);
}
