/*
 * XREFs of ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800394F0
 * Callers:
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180038690 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038798 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038B68 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F80 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080670 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x1800808C4 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180039980 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemGetProcessFullIdentity(
        HANDLE ProcessHandle,
        unsigned int *a2,
        struct _RM_PSM_HOST_INFO *a3)
{
  __int64 v6; // rdx
  NTSTATUS KeyFromToken; // ebx
  void *v8; // rdi
  __int64 v9; // r14
  const void **Heap; // r12
  const void *v11; // rbx
  void *v12; // rcx
  ULONG v13; // eax
  __int64 v14; // rbx
  int v15; // edi
  int v16; // esi
  _WORD *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  _WORD *v20; // rax
  __int64 v21; // rbx
  int v22; // edi
  int v23; // esi
  struct _RM_PSM_HOST_INFO *v24; // rdx
  __int16 v25; // ax
  struct _RM_PSM_HOST_INFO *v26; // rax
  int Policy_Internal; // eax
  ULONG ReturnLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v33[464]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD SourceSid[4]; // [rsp+228h] [rbp+120h] BYREF
  int v35; // [rsp+268h] [rbp+160h]
  int TokenInformation; // [rsp+26Ch] [rbp+164h] BYREF
  int v37; // [rsp+270h] [rbp+168h]
  __int64 v38; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v39[464]; // [rsp+288h] [rbp+180h] BYREF
  _BYTE DestinationSid[68]; // [rsp+458h] [rbp+350h] BYREF
  int v41; // [rsp+49Ch] [rbp+394h]
  int v42; // [rsp+4A0h] [rbp+398h]
  __int64 v43; // [rsp+4A8h] [rbp+3A0h]

  memset_0(v39, 0, 0x228uLL);
  ReturnLength[1] = 0x10000;
  TokenHandle = 0LL;
  KeyFromToken = NtOpenProcessToken(ProcessHandle, 8u, &TokenHandle);
  if ( KeyFromToken >= 0 )
  {
    if ( !a2
      || (v32 = 0LL,
          v30 = 0LL,
          Policy_Internal = AppModelPolicy_GetPolicy_Internal(TokenHandle, v6, &ReturnLength[1], &v30, &v32),
          KeyFromToken = Policy_Internal | 0x10000000,
          Policy_Internal >= 0) )
    {
      if ( a3 )
      {
        v8 = TokenHandle;
        LODWORD(v30) = 0;
        ReturnLength[0] = 0;
        memset_0(v33, 0, 0x228uLL);
        LODWORD(v32) = 464;
        KeyFromToken = PsmGetKeyFromToken(v8, v33, &v32, 0LL);
        v9 = 232LL;
        if ( KeyFromToken >= 0 )
        {
          KeyFromToken = NtQueryInformationToken(v8, TokenUser, 0LL, 0, ReturnLength);
          if ( (int)(KeyFromToken + 0x80000000) < 0 || KeyFromToken == -1073741789 )
          {
            Heap = (const void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ReturnLength[0]);
            if ( !Heap )
            {
              KeyFromToken = -1073741801;
              goto LABEL_30;
            }
            KeyFromToken = NtQueryInformationToken(v8, TokenUser, Heap, ReturnLength[0], ReturnLength);
            if ( KeyFromToken >= 0 )
            {
              v11 = *Heap;
              v12 = (void *)*Heap;
              memset(SourceSid, 0, sizeof(SourceSid));
              v35 = 0;
              v13 = RtlLengthSid(v12);
              memcpy_0(SourceSid, v11, v13);
              KeyFromToken = NtQueryInformationToken(v8, TokenSessionId, &TokenInformation, 4u, ReturnLength);
              if ( KeyFromToken >= 0 )
              {
                KeyFromToken = PsmQueryBackgroundActivationType(v8, &v30);
                if ( KeyFromToken >= 0 )
                {
                  v37 = 1 << v30;
                  KeyFromToken = RtlQueryTokenHostIdAsUlong64(v8, &v38);
                  if ( KeyFromToken >= 0 )
                  {
                    v14 = v38;
                    v15 = v37;
                    v16 = TokenInformation;
                    v17 = v39;
                    v18 = 232LL;
                    do
                    {
                      if ( v18 == -2147483414 )
                        break;
                      v19 = *(_WORD *)((char *)v17 + v33 - v39);
                      if ( !v19 )
                        break;
                      *v17++ = v19;
                      --v18;
                    }
                    while ( v18 );
                    v20 = v17 - 1;
                    if ( v18 )
                      v20 = v17;
                    *v20 = 0;
                    RtlCopySid(0x44u, DestinationSid, SourceSid);
                    v43 = v14;
                    KeyFromToken = 0;
                    v41 = v16;
                    v42 = v15;
                  }
                }
              }
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          }
        }
        if ( KeyFromToken < 0 )
          goto LABEL_30;
        v21 = v43;
        v22 = v42;
        v23 = v41;
        memset_0(a3, 0, 0x228uLL);
        v24 = a3;
        do
        {
          if ( v9 == -2147483414 )
            break;
          v25 = *(_WORD *)((char *)v24 + v39 - (_BYTE *)a3);
          if ( !v25 )
            break;
          *(_WORD *)v24 = v25;
          v24 = (struct _RM_PSM_HOST_INFO *)((char *)v24 + 2);
          --v9;
        }
        while ( v9 );
        v26 = (struct _RM_PSM_HOST_INFO *)((char *)v24 - 2);
        if ( v9 )
          v26 = v24;
        *(_WORD *)v26 = 0;
        RtlCopySid(0x44u, (char *)a3 + 464, DestinationSid);
        *((_DWORD *)a3 + 133) = v23;
        *((_DWORD *)a3 + 134) = v22;
        *((_QWORD *)a3 + 68) = v21;
      }
      if ( a2 )
        *a2 = ReturnLength[1] == 65537;
      KeyFromToken = 0;
    }
  }
LABEL_30:
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)KeyFromToken;
}
