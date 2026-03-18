/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x140036B20
 * Callers:
 *     <none>
 * Callees:
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     GreGetSpriteAttributes @ 0x140038AC4 (GreGetSpriteAttributes.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  BYTE SourceConstantAlpha; // r13
  __int64 v9; // rax
  HWND *v10; // r12
  __int64 v11; // rdx
  int SpriteAttributes; // ebx
  int v14; // ebx
  HWND v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  struct _BLENDFUNCTION v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+44h] [rbp-54h]
  unsigned int v21[6]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+70h] [rbp-28h] BYREF

  v20 = 0;
  SourceConstantAlpha = 0;
  v21[0] = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v9 = ValidateHwnd(a1);
  v10 = (HWND *)v9;
  if ( !v9 )
    goto LABEL_5;
  if ( (unsigned int)IsWindowDesktopComposed(v9) && ((_DWORD)v10[5][58] & 2) != 0 )
  {
    UserSetLastError(87LL);
LABEL_5:
    SpriteAttributes = 0;
    goto LABEL_6;
  }
  SpriteAttributes = 0;
  if ( (*((_BYTE *)v10[5] + 26) & 8) != 0 )
  {
    if ( (GetRedirectionFlags((__int64)v10, v11) & 1) != 0 )
    {
      v19 = 0;
      v14 = IsWindowDesktopComposed(v10);
      v15 = *v10;
      UserSessionState = W32GetUserSessionState(v17, v16);
      SpriteAttributes = GreGetSpriteAttributes(
                           *(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
                           v15,
                           &v19,
                           v21,
                           v14);
      if ( SpriteAttributes )
        SourceConstantAlpha = v19.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  if ( SpriteAttributes )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v20;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_BYTE *)MmUserProbeAddress;
      *a3 = SourceConstantAlpha;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v21[0] & 3;
    }
  }
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
  UserSessionSwitchLeaveCrit();
  return SpriteAttributes;
}
