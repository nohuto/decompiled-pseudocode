/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01CF960
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rcx
  int v21; // [rsp+80h] [rbp+18h] BYREF
  int v22; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v21 = 0x2000;
  v22 = -1;
  v5 = 0;
  Handle = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v10 = PtiCurrentShared(v7, v6, v8, v9);
  if ( (unsigned __int8)CheckAccess(*((_QWORD *)v10 + 53) + 896LL, &v21)
    && (v19 = *(void **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v12, v11, v13, v14) + 57) + 40LL) + 160LL)) != 0LL )
  {
    LOBYTE(v5) = ObOpenObjectByPointer(v19, 0, 0LL, v3, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *v4 = Handle;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v5;
}
