/*
 * XREFs of RetrieveCurrentDisplayState @ 0x140156F58
 * Callers:
 *     SetProtocolType @ 0x140144520 (SetProtocolType.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RetrieveCurrentDisplayState(__int64 a1)
{
  int v1; // ebx
  __int64 UserSessionState; // rdi
  NTSTATUS result; // eax
  NTSTATUS v4; // edx
  int v5; // eax
  int OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  OutputBuffer = 0;
  UserSessionState = W32GetUserSessionState(a1);
  result = ZwPowerInformation(SystemVideoState, 0LL, 0, &OutputBuffer, 4u);
  v4 = result;
  if ( result >= 0 )
  {
    if ( **(_BYTE **)(UserSessionState + 2712) )
    {
      v5 = 0;
      OutputBuffer = 0;
    }
    else
    {
      v5 = OutputBuffer;
    }
    *(_DWORD *)(UserSessionState + 2896) = v5;
    result = v4;
    LOBYTE(v1) = OutputBuffer != 0;
  }
  else
  {
    *(_DWORD *)(UserSessionState + 2896) = 0;
  }
  *(_DWORD *)(UserSessionState + 2756) = v1;
  return result;
}
