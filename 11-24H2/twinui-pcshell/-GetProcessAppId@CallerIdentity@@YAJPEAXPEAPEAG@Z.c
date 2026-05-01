/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18005D4A0
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18005CD60 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18005D2B4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1802854B8 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802BEFE8 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1803F2D34 (-GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180576E20 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x18005DCAC (--1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18005E354 (-Free@ARI@@YAXPEAX@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  void *v4; // rdx
  signed int LastError; // ebx
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  unsigned __int128 v8; // rax
  PVOID v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  const UNICODE_STRING *v12; // r14
  void *v13; // rdx
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rbx
  int v19; // r13d
  wchar_t *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // r15d
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned int v27; // edi
  void *v28; // rdx
  _WORD *v29; // rbx
  unsigned __int64 v30; // rcx
  _WORD *v31; // rdx
  __int64 v32; // r8
  __int16 v33; // ax
  _WORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  unsigned __int16 *v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rdi
  wchar_t *v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r13
  _WORD *v44; // rbx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  void *v51; // rdx
  const void *v52; // rdx
  size_t v53; // rdi
  __int64 v54; // rax
  _QWORD *v55; // rax
  _WORD *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdi
  void *v60; // rdx
  unsigned int ReturnLength; // [rsp+20h] [rbp-60h]
  ULONG TokenInformationLength; // [rsp+30h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-48h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v66; // [rsp+60h] [rbp-20h]
  __int128 v67; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v66 = a2;
  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    v6 = -4LL;
    TokenHandle = (void *)-4LL;
  }
  else
  {
    if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
    {
      LastError = GetLastError();
      if ( LastError )
      {
        v9 = P[0];
        goto LABEL_18;
      }
    }
    v6 = (__int64)TokenHandle;
  }
  TokenInformationLength = 0;
  v7 = NtQueryInformationToken((HANDLE)v6, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v7 == -1073741789 )
  {
    v8 = TokenInformationLength * (unsigned __int128)0x10u;
    *(_QWORD *)&DestinationString.Length = 0LL;
    if ( is_mul_ok(TokenInformationLength, 0x10uLL) )
    {
      *(_QWORD *)&v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v8), 16LL * TokenInformationLength);
      v9 = (PVOID)v8;
      if ( (_QWORD)v8 )
      {
        memset_0((void *)v8, 0, TokenInformationLength);
        v10 = NtQueryInformationToken(
                (HANDLE)v6,
                TokenSecurityAttributes,
                v9,
                TokenInformationLength,
                &TokenInformationLength);
        if ( v10 < 0 )
        {
          LastError = RtlNtStatusToDosErrorNoTeb(v10);
          ARI::Free(v9, v60);
        }
        else
        {
          if ( *((_DWORD *)v9 + 1) )
          {
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
            v11 = 0;
            v67 = 0LL;
            while ( v11 < *((_DWORD *)v9 + 1) )
            {
              v12 = (const UNICODE_STRING *)(*((_QWORD *)v9 + 1) + 40LL * v11);
              if ( !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
              {
                P[1] = (PVOID)v12;
                P[0] = v9;
                ARI::Free(0LL, v13);
                LastError = 0;
                goto LABEL_16;
              }
              ++v11;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          LastError = 1168;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v9 = 0LL;
    }
    ARI::Free(v9, *((void **)&v8 + 1));
    LastError = 8;
  }
  else if ( v7 )
  {
    LastError = RtlNtStatusToDosErrorNoTeb(v7);
  }
  else
  {
    LastError = 1359;
  }
LABEL_15:
  v9 = P[0];
LABEL_16:
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_18:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023728 || LastError == -2147024891 )
    goto LABEL_21;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)LastError);
LABEL_21:
    if ( v9 )
      ARI::Free(v9, v4);
    return (unsigned int)LastError;
  }
  v15 = (unsigned __int16 *)*((_QWORD *)P[1] + 4);
  v16 = v15[8] >> 1;
  v17 = v16 + 1;
  if ( (_DWORD)v16 == -1 )
  {
    v44 = (_WORD *)(2 * v16);
    memcpy_0(0LL, *((const void **)v15 + 3), 2 * v16);
    *v44 = 0;
LABEL_52:
    v27 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_53;
  }
  v18 = *((_QWORD *)P[1] + 4);
  v19 = *v15 >> 1;
  v20 = wcschr(*(const wchar_t **)(v18 + 8), 0x5Fu);
  v21 = *(_QWORD *)(v18 + 8);
  v22 = ((__int64)v20 - v21 + 2) >> 1;
  v23 = (unsigned int)(v22 + 13);
  v24 = v22 + 14;
  if ( (_DWORD)v22 == -14 )
  {
    memcpy_0(0LL, *(const void **)(v18 + 8), 0x1FFFFFFE4uLL);
    v45 = (unsigned int)(v19 - 13);
    MEMORY[0x1FFFFFFE4] = *(_OWORD *)(v21 + 2 * v45);
    MEMORY[0x1FFFFFFF4] = *(_QWORD *)(v21 + 2 * v45 + 16);
    MEMORY[0x1FFFFFFFC] = *(_WORD *)(v21 + 2 * v45 + 24);
    *(_WORD *)(2 * v23) = 0;
    if ( !(v17 + v24) )
    {
      v46 = P[1];
      v47 = 2 * v23;
      *(_WORD *)(2 * v23) = 33;
      v48 = v46[4];
      v49 = *(unsigned __int16 *)(v48 + 16) >> 1;
      if ( ~(_DWORD)v23 >= (unsigned int)(v49 + 1) )
      {
        v50 = 2 * v49;
        memcpy_0((void *)(v47 + 2), *(const void **)(v48 + 24), 2 * v49);
        *(_WORD *)(v50 + v47 + 2) = 0;
      }
      goto LABEL_52;
    }
  }
  v25 = (unsigned int)(v17 + v24);
  CoTaskMemFree(0LL);
  v26 = v25 + 1;
  if ( v25 + 1 < v25 || !is_mul_ok(v26, 2uLL) )
  {
    v27 = -2147024362;
    goto LABEL_33;
  }
  v29 = CoTaskMemAlloc(2 * v26);
  if ( !v29 )
  {
    v27 = -2147024882;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)v27);
    CoTaskMemFree(0LL);
    if ( v9 )
      ARI::Free(v9, v28);
    return v27;
  }
  if ( v26 > 0x7FFFFFFF || v25 >= 0x7FFFFFFF )
  {
    *v29 = 0;
  }
  else
  {
    v30 = v25 + 1;
    v31 = v29;
    v32 = 0LL;
    do
    {
      if ( v30 == v26 )
        break;
      v33 = *(_WORD *)((char *)v31 + (char *)&pvData - (char *)v29);
      if ( !v33 )
        break;
      *v31 = v33;
      ++v32;
      ++v31;
      --v30;
    }
    while ( v30 );
    v34 = v31 - 1;
    if ( v30 )
      v34 = v31;
    *v34 = 0;
    v35 = v32 - 1;
    if ( v30 )
      v35 = v32;
    v36 = v26 - v35;
    if ( v30 && v36 > 1 && 2 * v36 > 2 )
      memset_0(&v29[v35 + 1], 0, 2 * v36 - 2);
  }
  v37 = (unsigned __int16 *)*((_QWORD *)P[1] + 4);
  v38 = v37[8] >> 1;
  if ( (_DWORD)v38 == -1 )
  {
    memcpy_0(0LL, *((const void **)v37 + 3), 2 * v38);
    *(_WORD *)(2 * v38) = 0;
  }
  else
  {
    v39 = *((_QWORD *)P[1] + 4);
    TokenInformationLength = *v37 >> 1;
    v40 = wcschr(*(const wchar_t **)(v39 + 8), 0x5Fu);
    v41 = *(_QWORD *)(v39 + 8);
    v42 = ((__int64)v40 - v41 + 2) >> 1;
    v43 = (unsigned int)(v42 + 13);
    if ( (unsigned int)v25 < (int)v42 + 14 )
      goto LABEL_50;
    v52 = *(const void **)(v39 + 8);
    v53 = (unsigned int)v42;
    memcpy_0(v29, v52, v53 * 2);
    v54 = TokenInformationLength - 13;
    *(_OWORD *)&v29[v53] = *(_OWORD *)(v41 + 2 * v54);
    *(_QWORD *)&v29[v53 + 8] = *(_QWORD *)(v41 + 2 * v54 + 16);
    v29[v53 + 12] = *(_WORD *)(v41 + 2 * v54 + 24);
    v29[v43] = 0;
    if ( (unsigned int)v25 < (int)v43 + (int)v38 + 2 )
    {
LABEL_50:
      v27 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xAC,
              (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
              (const char *)0x7A,
              ReturnLength);
      CoTaskMemFree(v29);
LABEL_53:
      ARI::ProcessToken::AutoSysAppId::~AutoSysAppId((ARI::ProcessToken::AutoSysAppId *)P);
      return v27;
    }
    v55 = P[1];
    v56 = &v29[v43];
    *v56 = 33;
    v57 = v55[4];
    v58 = *(unsigned __int16 *)(v57 + 16) >> 1;
    if ( (int)v25 - (int)v43 - 1 >= (unsigned int)(v58 + 1) )
    {
      v59 = v58;
      memcpy_0(v56 + 1, *(const void **)(v57 + 24), 2 * v58);
      v56[v59 + 1] = 0;
    }
  }
  *v66 = v29;
  CoTaskMemFree(0LL);
  if ( v9 )
    ARI::Free(v9, v51);
  return 0LL;
}
