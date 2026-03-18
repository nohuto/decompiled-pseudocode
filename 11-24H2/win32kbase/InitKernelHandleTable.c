/*
 * XREFs of InitKernelHandleTable @ 0x1402E22B0
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitKernelHandleTable(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  PVOID *v5; // rbx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v12 = 2621440;
  v1 = (_QWORD *)(W32GetUserSessionState(a1) + 19904);
  result = MmCreateSection(v1, 983071LL, 0LL, &v12, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ObDeleteCapturedInsertInfo(*v1);
    ViewSize = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v3) + 19888) = 0LL;
    v5 = (PVOID *)(W32GetUserSessionState(v4) + 19888);
    UserSessionState = W32GetUserSessionState(v6);
    v9 = MmMapViewInSessionSpace(*(PVOID *)(UserSessionState + 19904), v5, &ViewSize);
    if ( v9 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v10 = W32GetUserSessionState(v8);
      ObfDereferenceObject(*(PVOID *)(v10 + 19896));
      *(_QWORD *)(W32GetUserSessionState(v11) + 19896) = 0LL;
      return (unsigned int)v9;
    }
  }
  return result;
}
