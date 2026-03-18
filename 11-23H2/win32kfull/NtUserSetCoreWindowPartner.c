/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C01DAAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C004590C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FB70 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FC9C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ecx
  struct tagWND *v13; // rsi
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  struct tagWND *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v25[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v26; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v10 = 0LL;
    v26 = 0LL;
    LOBYTE(v11) = ValidateHWNDND(a1, &v26);
    if ( v11 )
    {
      v13 = v26;
      v14 = *((_QWORD *)v26 + 2);
      if ( gptiCurrent != v14 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v14 + 424)) )
      {
        v12 = 5;
        goto LABEL_5;
      }
      v15 = (struct tagWND *)HMValidateHandleNoSecure(a3, 1);
      v16 = v15;
      if ( v15 )
      {
        if ( !a2 )
        {
          LOBYTE(v10) = (int)CoreWindowProp::RemoveComponent(v15, v13) >= 0;
          goto LABEL_14;
        }
        if ( a2 == 2 )
        {
          v24[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v24;
          v24[2] = 0LL;
          v25[2] = 0LL;
          v24[1] = v13;
          HMLockObject(v13);
          v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v25;
          v25[1] = v16;
          HMLockObject(v16);
          LOBYTE(v10) = (int)CoreWindowProp::xxxSetHost(v13, v16) >= 0;
          ThreadUnlock1(v18, v17, v19);
          ThreadUnlock1(v21, v20, v22);
          goto LABEL_14;
        }
      }
    }
    v12 = 87;
LABEL_5:
    UserSetLastError(v12);
    goto LABEL_14;
  }
  UserSetLastError(87);
  v10 = 0LL;
LABEL_14:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
