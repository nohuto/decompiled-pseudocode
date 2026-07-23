/*
 * XREFs of TppCritSetThread @ 0x1800F06E0
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180163820 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x180163D90 (NtSetInformationObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  __int16 ObjectInformation; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int ThreadInformation; // [rsp+40h] [rbp-88h] BYREF
  HANDLE TokenHandle[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v8; // [rsp+58h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-68h] BYREF
  __int64 v10; // [rsp+90h] [rbp-38h] BYREF
  int v11; // [rsp+98h] [rbp-30h]
  _TOKEN_PRIVILEGES NewState; // [rsp+A0h] [rbp-28h] BYREF

  NewState = 0LL;
  ThreadInformation = 0;
  ObjectInformation = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  TokenHandle[0] = 0LL;
  v10 = 0LL;
  v11 = 0;
  Handle = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0, TokenHandle);
    if ( (int)v2 >= 0 )
    {
      v10 = 0x20000000CLL;
      LOWORD(v11) = 0;
      ObjectAttributes.SecurityQualityOfService = &v10;
      if ( NtDuplicateToken(TokenHandle[0], 0x24u, &ObjectAttributes, 0, TokenImpersonation, &Handle) >= 0 )
      {
        ObjectInformation = 256;
        if ( NtSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u) >= 0 )
        {
          if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &Handle, 8u) >= 0 )
          {
            NewState.PrivilegeCount = 1;
            TokenHandle[1] = (HANDLE)20;
            NewState.Privileges[0].Luid = (_LUID)20LL;
            NewState.Privileges[0].Attributes = 2;
            if ( NtAdjustPrivilegesToken(Handle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
            {
              ThreadInformation = 1;
              if ( NtSetInformationThread(
                     (HANDLE)0xFFFFFFFFFFFFFFFELL,
                     ThreadBreakOnTermination,
                     &ThreadInformation,
                     4u) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v8 = 0LL;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v8, 8u);
          }
          if ( Handle )
          {
            ObjectInformation = 0;
            NtSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(TokenHandle[0]);
    }
  }
  return (int)v2;
}
