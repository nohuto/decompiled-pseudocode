/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1400B612C
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1400B653C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151F88 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v7; // rax
  const char *v8; // rdx
  void *v9; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 UserSessionState; // rax
  __int64 v14; // r10
  PSID v15; // r14
  ULONG v16; // r15d
  void *v17; // rax
  void *v18; // rbx
  __int64 v19; // rax
  unsigned int v21; // r8d
  int v22; // ecx
  ULONG ReturnLength; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v26; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v7 = PsReferencePrimaryToken(CurrentProcess);
  v9 = v7;
  if ( !v7 )
  {
    v12 = -1073741700;
    v21 = 654;
LABEL_16:
    v22 = v12;
LABEL_17:
    CitpLogFailureWorker(v22, v8, v21);
    goto LABEL_10;
  }
  v10 = SeQueryAuthenticationIdToken(v7, &AuthenticationId);
  v12 = v10;
  if ( v10 < 0 )
  {
    v21 = 661;
    goto LABEL_20;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    UserSessionState = W32GetUserSessionState(v11);
    CitpParametersCompute((struct _CIT_PARAMETERS *)(*(_QWORD *)(UserSessionState + 18968) + 4LL));
    if ( *(_BYTE *)(v14 + 24) )
    {
      v10 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v12 = v10;
      if ( v10 < 0 )
      {
        v21 = 692;
      }
      else
      {
        ReturnLength = 0;
        v10 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        v12 = v10;
        if ( v10 >= 0 )
        {
          v15 = TokenInformation[0];
          v16 = RtlLengthSid(TokenInformation[0]);
          v17 = (void *)Win32AllocPoolZInitImpl(256LL, v16, 0x49637355u);
          v18 = v17;
          if ( v17 )
          {
            memmove(v17, v15, v16);
            v19 = (__int64)*a2;
            *((_QWORD *)a1 + 12) = v18;
            v12 = 0;
            *((_QWORD *)a1 + 13) = v19;
            goto LABEL_10;
          }
          v12 = -1073741670;
          v21 = 722;
          goto LABEL_16;
        }
        v21 = 708;
      }
LABEL_20:
      v22 = v10;
      goto LABEL_17;
    }
    CitpCleanupGlobalImpactContext(&v26);
    v12 = -1073741637;
  }
  else
  {
    v12 = -1073741587;
  }
LABEL_10:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v9 )
    PsDereferencePrimaryToken(v9);
  GreDeleteFastMutex(0LL);
  return v12;
}
