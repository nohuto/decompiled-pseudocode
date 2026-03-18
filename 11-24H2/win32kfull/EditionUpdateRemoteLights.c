/*
 * XREFs of EditionUpdateRemoteLights @ 0x140201C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall EditionUpdateRemoteLights(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *InputBuffer; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_DWORD *)(UserSessionState + 69020) )
  {
    InputBuffer = (void *)(W32GetUserSessionState(v4, v3) + 12860);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)(W32GetUserSessionState(v7, v6) + 12880);
    v11 = W32GetUserSessionState(v10, v9);
    LODWORD(UserSessionState) = ZwDeviceIoControlFile(
                                  *(HANDLE *)(v11 + 69048),
                                  0LL,
                                  0LL,
                                  0LL,
                                  IoStatusBlock,
                                  0xB0008u,
                                  InputBuffer,
                                  4u,
                                  0LL,
                                  0);
  }
  return UserSessionState;
}
