/*
 * XREFs of NtUserLinkDpiCursor @ 0x140134120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1401341EC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x140134208 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  struct tagCURSOR *v12; // rcx
  struct tagCURSOR *v13; // r9

  EnterCrit(0LL, 0LL);
  v7 = 0LL;
  if ( !a3 )
    goto LABEL_10;
  LOBYTE(v6) = 3;
  v10 = HMValidateHandleWithDescriptor(a1, v6);
  if ( v10 )
  {
    LOBYTE(v8) = 3;
    v11 = HMValidateHandleWithDescriptor(a2, v8);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v10 + 80) & 0x1800) == 0
        && *(_QWORD *)(v11 + 48) == v11
        && !FindDPICursor((struct tagCURSOR *)v10, a3) )
      {
        LinkDpiCursor(v12, v13, a3);
        v7 = 1LL;
        goto LABEL_9;
      }
LABEL_10:
      UserSetLastError(87);
    }
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
