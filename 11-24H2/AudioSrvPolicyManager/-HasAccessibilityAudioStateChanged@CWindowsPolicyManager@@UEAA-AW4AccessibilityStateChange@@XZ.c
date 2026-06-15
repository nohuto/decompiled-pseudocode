/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180005A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180028DF0 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(__int64 a1)
{
  unsigned int v2; // ebp
  struct CProcess *v3; // rbx
  int Process; // eax
  DWORD v5; // edi
  DWORD v6; // esi
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  CWindowsPolicyManager *v11; // rcx
  struct TSSession *v12; // rsi
  int v13; // esi
  int v14; // r13d
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  struct _RTL_CRITICAL_SECTION *v19; // rsi
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r12d
  LPCRITICAL_SECTION v25; // r12
  bool v26; // zf
  struct _RTL_CRITICAL_SECTION *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  BOOL v32; // eax
  struct TSSession *v34; // rdi
  int v35; // edi
  struct TSSession *v36; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CProcess *v38; // [rsp+78h] [rbp+10h] BYREF
  struct TSSession *v39; // [rsp+80h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v38 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, 0LL, &v38);
  if ( Process < 0 )
  {
    if ( Process != -2147416387 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v38);
    goto LABEL_72;
  }
  v3 = v38;
  (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v38 + 8LL))(v38);
  if ( v38 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release();
  v5 = (*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 48LL))(v3);
  v6 = HIBYTE(v5);
  if ( !v5 )
    goto LABEL_72;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v39 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v7 = 0x100000001B3LL
     * (v6 ^ (0x100000001B3LL
            * (BYTE2(v5) ^ (0x100000001B3LL
                          * (BYTE1(v5) ^ (0x100000001B3LL * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL)))))));
  v8 = *(_QWORD *)(qword_180064AB8 + 16 * (qword_180064AD0 & v7) + 8);
  if ( v8 == qword_180064AA8 )
  {
LABEL_12:
    v8 = 0LL;
  }
  else
  {
    while ( v5 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(qword_180064AB8
                           + 16
                           * (qword_180064AD0 & (0x100000001B3LL
                                               * (v6 ^ (0x100000001B3LL
                                                      * (BYTE2(v5) ^ (0x100000001B3LL
                                                                    * (BYTE1(v5) ^ (0x100000001B3LL
                                                                                  * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_12;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  v9 = qword_180064AA8;
  if ( v8 )
    v9 = v8;
  if ( v9 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v10 = TsSessionCreate(v5, &v39);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10);
      v11 = (CWindowsPolicyManager *)lpCriticalSection;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_24;
    }
    v12 = v39;
  }
  else
  {
    v12 = *(struct TSSession **)(v9 + 24);
    v39 = v12;
    LeaveCriticalSection(&stru_180064A78);
  }
  v13 = *((_DWORD *)v12 + 268);
  v11 = (CWindowsPolicyManager *)lpCriticalSection;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v13 )
  {
LABEL_24:
    if ( (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v11, v5) < 0 )
      goto LABEL_72;
  }
  v14 = 0xFFFF;
  EnterCriticalSection(&stru_180064A78);
  EnterCriticalSection(&stru_180064A78);
  v15 = (_QWORD *)(qword_180064AB8 + 16 * (qword_180064AD0 & v7));
  v16 = v15[1];
  if ( v16 == qword_180064AA8 )
  {
LABEL_29:
    v16 = 0LL;
  }
  else
  {
    while ( v5 != *(_DWORD *)(v16 + 16) )
    {
      if ( v16 == *v15 )
        goto LABEL_29;
      v16 = *(_QWORD *)(v16 + 8);
    }
  }
  v17 = qword_180064AA8;
  if ( v16 )
    v17 = v16;
  if ( v17 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46F,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    v18 = *(_QWORD *)(v17 + 24);
    LeaveCriticalSection(&stru_180064A78);
    v14 = *(_DWORD *)(v18 + 4);
  }
  LeaveCriticalSection(&stru_180064A78);
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v20 = (_QWORD *)(qword_180064AB8 + 16 * (qword_180064AD0 & v7));
  v21 = v20[1];
  if ( v21 == qword_180064AA8 )
  {
LABEL_39:
    v21 = 0LL;
  }
  else
  {
    while ( v5 != *(_DWORD *)(v21 + 16) )
    {
      if ( v21 == *v20 )
        goto LABEL_39;
      v21 = *(_QWORD *)(v21 + 8);
    }
  }
  v22 = qword_180064AA8;
  if ( v21 )
    v22 = v21;
  if ( v22 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v23 = TsSessionCreate(v5, (struct TSSession **)&lpCriticalSection);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v23);
      if ( v19 )
        LeaveCriticalSection(v19);
      v24 = 1;
      goto LABEL_57;
    }
    v25 = lpCriticalSection;
  }
  else
  {
    v25 = *(LPCRITICAL_SECTION *)(v22 + 24);
    lpCriticalSection = v25;
    LeaveCriticalSection(&stru_180064A78);
  }
  if ( !LODWORD(v25->DebugInfo) || (v26 = LODWORD(v25[27].SpinCount) == 0, v24 = 1, v26) )
    v24 = 0;
  if ( v19 )
    LeaveCriticalSection(v19);
  if ( v24 || v14 && v14 != 0xFFFF )
  {
LABEL_57:
    v27 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v36 = 0LL;
    EnterCriticalSection(&stru_180064A78);
    v28 = 2 * (qword_180064AD0 & v7);
    v29 = *(_QWORD *)(qword_180064AB8 + 8 * v28 + 8);
    if ( v29 == qword_180064AA8 )
    {
LABEL_61:
      v29 = 0LL;
    }
    else
    {
      while ( v5 != *(_DWORD *)(v29 + 16) )
      {
        if ( v29 == *(_QWORD *)(qword_180064AB8 + 8 * v28) )
          goto LABEL_61;
        v29 = *(_QWORD *)(v29 + 8);
      }
    }
    v30 = qword_180064AA8;
    if ( v29 )
      v30 = v29;
    if ( v30 == qword_180064AA8 )
    {
      LeaveCriticalSection(&stru_180064A78);
      v31 = TsSessionCreate(v5, &v36);
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43A,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v31);
        goto LABEL_67;
      }
      v34 = v36;
    }
    else
    {
      v34 = *(struct TSSession **)(v30 + 24);
      v36 = v34;
      LeaveCriticalSection(&stru_180064A78);
    }
    if ( *((_DWORD *)v34 + 268) )
    {
      v35 = *((_DWORD *)v34 + 269);
      if ( v27 )
        LeaveCriticalSection(v27);
      v32 = v35 != 0;
      goto LABEL_70;
    }
LABEL_67:
    if ( v27 )
      LeaveCriticalSection(v27);
    v32 = 0;
LABEL_70:
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 48), v32) != *(_DWORD *)(a1 + 48) )
    {
      LOBYTE(v2) = v24 != 0;
      ++v2;
    }
  }
LABEL_72:
  if ( v3 )
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
