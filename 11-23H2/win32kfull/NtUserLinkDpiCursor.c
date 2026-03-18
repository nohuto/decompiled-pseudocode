/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C01D5720
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00DEF48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01A8130 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct tagCURSOR *v13; // rcx
  struct tagCURSOR *v14; // r9

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  v9 = HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    v12 = HMValidateHandle(a2, 3u);
    v11 = v12;
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v9 + 80) & 0x1800) == 0
        && *(_QWORD *)(v12 + 48) == v12
        && !FindDPICursor((struct tagCURSOR *)v9, a3) )
      {
        LinkDpiCursor(v13, v14, a3);
        v6 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return v6;
}
