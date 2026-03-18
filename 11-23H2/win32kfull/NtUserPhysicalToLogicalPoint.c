/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C01D7DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0150F64 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // ebx
  _BYTE *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  struct tagPOINT *v11; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v13; // rdi
  unsigned int v14; // eax
  char v15; // al
  struct tagPOINT v16; // rcx
  struct tagPOINT v18; // [rsp+80h] [rbp+18h] BYREF
  struct tagPOINT v19; // [rsp+88h] [rbp+20h]

  v5 = 0;
  v18 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v11 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v11 = (struct tagPOINT *)MmUserProbeAddress;
    v19 = *v11;
    v18 = v19;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    v13 = 0LL;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext) )
      v13 = v18;
    TransformPointBetweenCoordinateSpaces(&v18, &v18, v10, 0LL);
    if ( DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v10 + 40) + 88LL), v18) )
    {
      v14 = W32GetCurrentThreadDpiAwarenessContext(v7);
      v15 = ShouldVirtualizeWindowRect(v10, v14);
      v16 = v18;
      if ( v15 )
        v16 = v13;
      v18 = v16;
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
      *a2 = v18;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
