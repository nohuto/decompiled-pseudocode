/*
 * XREFs of ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x1C013CE38
 * Callers:
 *     ?xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z @ 0x1C013CEF4 (-xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxTooltipCreateCallback(HWND a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = HMValidateHandleNoSecure((int)a1, 1);
  v4 = (struct tagWND *)v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v6 = *(_QWORD *)(v5 + 456);
    if ( *(_QWORD *)(v6 + 192) == v3 && *(_DWORD *)(v6 + 200) == a2 )
    {
      v7 = *(_QWORD *)(v5 + 456);
      v9 = 0LL;
      v8 = 0LL;
      PushW32ThreadLock(v7, &v8, UserDereferenceObject);
      ObfReferenceObject((PVOID)v6);
      xxxCreateTooltip2((struct tagDESKTOP *)v6, v4, a2);
      PopAndFreeW32ThreadLock((__int64)&v8);
    }
  }
}
