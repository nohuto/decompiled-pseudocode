/*
 * XREFs of InkProcessorIsInkDevice @ 0x1401E88E0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1401E8980 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // r12
  unsigned int v8; // edi
  __int64 UserSessionState; // rax
  __int64 v10; // rsi
  char v11; // bl

  v6 = a2;
  v7 = a1;
  v8 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = *(_QWORD *)(UserSessionState + 3280);
  if ( v10 )
  {
    W32AcquirePushLockSharedEx(*(struct W32_PUSH_LOCK **)(UserSessionState + 3280), 0);
    v11 = *(_BYTE *)(v10 + 8);
    W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)v10, 0LL);
    if ( v11 )
      return InkDeviceParser::IsInkDevice(v7, v6, a3, a4);
  }
  return v8;
}
