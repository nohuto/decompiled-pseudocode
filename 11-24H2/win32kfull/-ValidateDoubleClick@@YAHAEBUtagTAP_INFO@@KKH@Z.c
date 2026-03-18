/*
 * XREFs of ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1402AEBC4
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1400A86A8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall ValidateDoubleClick(const struct tagTAP_INFO *a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int16 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  _BOOL8 result; // rax

  v4 = 0;
  v5 = (unsigned int)a2;
  result = 0;
  if ( *((_WORD *)a1 + 4) )
  {
    if ( *(struct tagTHREADINFO **)a1 == PtiCurrent((__int64)a1, a2) && *((_DWORD *)a1 + 5) == a3 )
    {
      LOBYTE(v4) = a4 != 0;
      if ( (*((_DWORD *)a1 + 6) != 0) == v4 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        v12 = *((_WORD *)a1 + 4);
        v13 = UserSessionState;
        if ( v12 == *(_WORD *)(UserSessionState + 24 * v5 + 16424) )
          return 1;
        v14 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v14 < 5 && v12 == *(_WORD *)(v13 + 24 * v14 + 16424) )
          return 1;
      }
    }
  }
  return result;
}
