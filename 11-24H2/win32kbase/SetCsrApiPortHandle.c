/*
 * XREFs of SetCsrApiPortHandle @ 0x140152470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetCsrApiPortHandle(HANDLE Handle)
{
  NTSTATUS v2; // edi
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = -1073741823;
  if ( *(_QWORD *)(W32GetUserSessionState(Handle) + 71544)
    || (UserSessionState = W32GetUserSessionState(v3),
        Object = 0LL,
        v5 = UserSessionState,
        v2 = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, 1, &Object, 0LL),
        *(_QWORD *)(v5 + 71544) = Object,
        v2 < 0) )
  {
    *(_QWORD *)(W32GetUserSessionState(v3) + 71544) = 0LL;
  }
  v6 = W32GetUserSessionState(v3);
  KeSetEvent(*(PRKEVENT *)(v6 + 68648), 1, 0);
  return (unsigned int)v2;
}
