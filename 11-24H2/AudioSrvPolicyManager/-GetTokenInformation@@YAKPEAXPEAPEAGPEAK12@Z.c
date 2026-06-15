/*
 * XREFs of ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005660
 * Callers:
 *     TS_SessionGetAudioProtocol @ 0x180004F90 (TS_SessionGetAudioProtocol.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180005420 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18002A2E0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenInformation(
        HANDLE TokenHandle,
        HLOCAL *a2,
        unsigned int *a3,
        HLOCAL *a4,
        unsigned int *TokenInformation)
{
  DWORD LastError; // edi
  PSID *v10; // r14
  void **v11; // r12
  void *v13; // rcx
  void *v14; // rcx
  BOOL v15; // edi
  HLOCAL v16; // [rsp+30h] [rbp-20h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-18h] BYREF
  PSID Sid[2]; // [rsp+40h] [rbp-10h] BYREF
  DWORD TokenInformationLength; // [rsp+98h] [rbp+48h] BYREF
  int v20; // [rsp+A8h] [rbp+58h] BYREF

  LastError = 0;
  TokenInformationLength = 0;
  hMem = 0LL;
  v16 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 )
  {
    if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
      goto LABEL_24;
    LastError = GetLastError();
    if ( LastError != 122 )
      goto LABEL_15;
    v10 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    if ( !v10 )
      goto LABEL_25;
    if ( !GetTokenInformation(TokenHandle, TokenUser, v10, TokenInformationLength, &TokenInformationLength)
      || !ConvertSidToStringSidW(*v10, (LPWSTR *)&hMem) )
    {
      goto LABEL_37;
    }
    LastError = 0;
  }
  if ( a3 )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenIsAppContainer, a3, 4u, &TokenInformationLength) )
      goto LABEL_37;
  }
  if ( TokenInformation )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenSessionId, TokenInformation, 4u, &TokenInformationLength) )
      goto LABEL_37;
  }
  if ( a4 )
  {
    TokenInformationLength = 0;
    if ( !GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, &TokenInformationLength) )
    {
      LastError = GetLastError();
      if ( LastError != 122 )
        goto LABEL_15;
      v11 = (void **)LocalAlloc(0x40u, TokenInformationLength);
      if ( v11 )
      {
        if ( GetTokenInformation(
               TokenHandle,
               TokenAppContainerSid,
               v11,
               TokenInformationLength,
               &TokenInformationLength) )
        {
          v13 = *v11;
          LastError = 0;
          if ( !*v11 )
            goto LABEL_10;
          v20 = 0;
          if ( (int)RtlGetAppContainerSidType(v13, &v20) >= 0 )
          {
            v14 = *v11;
            if ( v20 == 1 )
            {
              Sid[0] = 0LL;
              if ( (int)RtlGetAppContainerParent(v14, Sid) >= 0 )
              {
                v15 = ConvertSidToStringSidW(Sid[0], (LPWSTR *)&v16);
                RtlFreeSid(Sid[0]);
                if ( v15 )
                {
                  LastError = 0;
                  goto LABEL_10;
                }
              }
            }
            else if ( ConvertSidToStringSidW(v14, (LPWSTR *)&v16) )
            {
              goto LABEL_10;
            }
          }
        }
LABEL_37:
        LastError = GetLastError();
        goto LABEL_15;
      }
LABEL_25:
      LastError = 14;
      goto LABEL_15;
    }
LABEL_24:
    LastError = 1337;
    goto LABEL_15;
  }
LABEL_10:
  if ( a2 )
    *a2 = hMem;
  if ( a4 )
    *a4 = v16;
  hMem = 0LL;
  v16 = 0LL;
LABEL_15:
  LocalFree(hMem);
  LocalFree(v16);
  LocalFree(v10);
  LocalFree(v11);
  return LastError;
}
