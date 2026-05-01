/*
 * XREFs of ?HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z @ 0x180037B6C
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180037E38 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampSystemQueryUserContextToken(ULONG a1, void *a2, unsigned __int64 *a3)
{
  PSID *Heap; // rdi
  int LastError; // ebx
  int UserContextFromSid; // eax
  int UserContext; // ebx
  LPWSTR StringSid; // [rsp+30h] [rbp-10h] BYREF
  ULONG TokenInformationLength; // [rsp+60h] [rbp+20h] BYREF
  void *phToken; // [rsp+78h] [rbp+38h] BYREF

  TokenInformationLength = 0;
  Heap = 0LL;
  StringSid = 0LL;
  phToken = 0LL;
  if ( !a1 )
  {
    if ( !ConvertSidToStringSidW(a2, &StringSid) )
      goto LABEL_3;
    UserContextFromSid = UMgrQueryUserContextFromSid(StringSid, a3);
    UserContext = UserContextFromSid;
    if ( UserContextFromSid < 0
      && (UserContextFromSid != -2147023584 || !IsWellKnownSid(
                                                  a2,
                                                  WinLocalAccountAndAdministratorSid|WinCreatorGroupSid)) )
    {
LABEL_9:
      LastError = UserContext | 0xC0000000;
      goto LABEL_19;
    }
LABEL_18:
    LastError = 0;
    goto LABEL_19;
  }
  if ( !WTSQueryUserToken(a1, &phToken) )
  {
LABEL_3:
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_19;
  }
  LastError = NtQueryInformationToken(phToken, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( LastError != -1073741789 )
    goto LABEL_19;
  Heap = (PSID *)HampAllocateHeap(TokenInformationLength);
  if ( !Heap )
  {
    LastError = -1073741801;
    goto LABEL_19;
  }
  LastError = NtQueryInformationToken(phToken, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
  if ( LastError >= 0 )
  {
    if ( !RtlEqualSid(a2, *Heap) )
    {
      LastError = -1073741720;
      goto LABEL_19;
    }
    UserContext = UMgrQueryUserContext(phToken, a3);
    if ( UserContext < 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
LABEL_19:
  if ( StringSid )
    LocalFree(StringSid);
  if ( phToken )
    NtClose(phToken);
  if ( Heap )
    HampFreeHeap(Heap);
  return (unsigned int)LastError;
}
