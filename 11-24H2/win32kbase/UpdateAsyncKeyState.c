/*
 * XREFs of UpdateAsyncKeyState @ 0x140189B10
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x140215F0C (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B7518 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UpdateAsyncKeyState(__int64 a1, unsigned __int8 a2, char a3))(void)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r14d
  unsigned __int64 v10; // rbx
  char v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 (*result)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx

  v3 = a2;
  if ( a1 && (*(_DWORD *)(a1 + 436) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    v16 = 2 * (unsigned int)(v3 & 3);
    v17 = *(unsigned __int8 *)(UserSessionState + (v3 >> 2) + 14336);
    LODWORD(v17) = v17 & ~(1 << (2 * (v3 & 3)));
    *(_BYTE *)(UserSessionState + (v3 >> 2) + 14336) = v17;
  }
  else
  {
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = W32GetUserSessionState(v6);
      v6 = v3 & 7;
      *(_BYTE *)(v7 + (v3 >> 3) + 14464) |= 1 << v6;
    }
    v8 = W32GetUserSessionState(v6);
    v9 = v3 & 3;
    v10 = v3 >> 2;
    v11 = 2 * v9;
    v12 = (unsigned int)(2 * v9);
    if ( (*(_BYTE *)((v3 >> 2) + v8 + 14336) & (unsigned __int8)(1 << (2 * v9))) == 0 )
    {
      v13 = 2 * v9 + 1;
      if ( ((unsigned __int8)(1 << v13) & *(_BYTE *)(v10 + W32GetUserSessionState(v12) + 14336)) != 0 )
      {
        v14 = W32GetUserSessionState(v13);
        v12 = *(unsigned __int8 *)(v14 + v10 + 14336);
        LODWORD(v12) = v12 & ~(1 << v13);
      }
      else
      {
        v14 = W32GetUserSessionState(v13);
        v12 = *(unsigned __int8 *)(v14 + v10 + 14336);
        LODWORD(v12) = v12 | (1 << v13);
      }
      *(_BYTE *)(v14 + v10 + 14336) = v12;
    }
    v15 = W32GetUserSessionState(v12);
    v17 = *(unsigned __int8 *)(v15 + v10 + 14336);
    LODWORD(v17) = v17 | (1 << v11);
    *(_BYTE *)(v15 + v10 + 14336) = v17;
  }
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 5856LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48) + 5864LL);
      if ( result )
      {
        LOBYTE(v22) = v3;
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64))result)(a1, v22);
      }
    }
  }
  return result;
}
