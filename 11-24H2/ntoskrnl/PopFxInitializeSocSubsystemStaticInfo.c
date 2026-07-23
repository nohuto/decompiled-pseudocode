/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405CEA18 (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074DA8C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14096EBC0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(unsigned int a1)
{
  int v2; // ebx
  _QWORD *v3; // rsi
  NTSTATUS v4; // ebx
  __int64 Pool2; // rax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int128 v8; // xmm1
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // eax
  const wchar_t *v13; // rax
  _QWORD *v14; // r12
  unsigned __int16 v15; // r10
  unsigned __int16 v16; // cx
  GUID *v17; // r8
  _QWORD *v18; // rax
  char v20; // [rsp+28h] [rbp-E0h]
  const wchar_t *v21; // [rsp+30h] [rbp-D8h]
  __int128 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+48h] [rbp-C0h]
  __int128 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  unsigned int v27; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+7Ch] [rbp-8Ch]
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin
    && (v27 = a1, BugCheckParameter4 = 0LL, (unsigned __int8)guard_dispatch_icall_no_overrides(36LL, &v27)) )
  {
    v2 = BugCheckParameter4;
    if ( !(_DWORD)BugCheckParameter4 )
      PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, 0LL);
    if ( (unsigned int)BugCheckParameter4 > 0x3E8 )
      PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, (unsigned int)BugCheckParameter4);
    v3 = (_QWORD *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v3 )
    {
      v4 = -1073741585;
LABEL_9:
      ExFreePoolWithTag(v3, 0x4D584650u);
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL, 344 * v2 + 24, 0x4D584650u);
      v3 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a1;
        v6 = 0;
        *(_DWORD *)(Pool2 + 20) = v2;
        while ( v6 < *((_DWORD *)v3 + 5) )
        {
          v7 = 43LL * v6;
          v3[v7 + 4] = (char *)&v3[v7 + 13] + 4;
          LODWORD(v3[v7 + 3]) = 0x800000;
          LOWORD(v3[v7 + 5]) = 0;
          v3[v7 + 6] = (char *)&v3[v7 + 29] + 4;
          WORD1(v3[v7 + 5]) = 128;
          LODWORD(v3[v7 + 7]) = v6;
          LODWORD(v22) = a1;
          *((_QWORD *)&v22 + 1) = 0LL;
          DWORD1(v22) = v3[v7 + 7];
          v23 = *(_OWORD *)&v3[v7 + 3];
          v8 = *(_OWORD *)&v3[v7 + 5];
          v25 = 0LL;
          v24 = v8;
          PopPluginInitializeSocSubsystemStaticInfo(128LL, &v22);
          LOWORD(v3[v7 + 5]) = v24;
          LOWORD(v3[v7 + 3]) = v23;
          v3[v7 + 8] = *((_QWORD *)&v22 + 1);
          LODWORD(v3[v7 + 13]) = v25;
          v4 = RtlHashUnicodeString((PCUNICODE_STRING)&v3[v7 + 5], 0, 0, (PULONG)&v3[v7 + 7] + 1);
          if ( v4 < 0 )
            goto LABEL_9;
          ++v6;
        }
        v20 = 0;
        v9 = 0;
        while ( v9 < *((_DWORD *)v3 + 5) )
        {
          v10 = 0;
          v11 = 43LL * v9;
          v12 = v3[v11 + 7];
          *(GUID *)&v3[v11 + 9] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
          WORD2(v3[v11 + 9]) = a1;
          HIWORD(v3[v11 + 9]) = v12 + 1;
          v13 = (const wchar_t *)v3[v11 + 4];
          v21 = v13;
          while ( v10 < *((_DWORD *)v3 + 5) )
          {
            v26 = 344LL * v10;
            v14 = &v3[(unsigned __int64)v26 / 8];
            if ( v10 != v9 )
            {
              if ( !wcsncmp((const wchar_t *)v3[v11 + 6], (const wchar_t *)v14[6], 0x40uLL) )
                PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v10);
              v13 = v21;
            }
            if ( !wcsncmp(v13, (const wchar_t *)v14[6], 0x40uLL) )
            {
              v15 = a1;
              v16 = LODWORD(v3[(unsigned __int64)v26 / 8 + 7]) + 1;
              goto LABEL_30;
            }
            v13 = v21;
            ++v10;
          }
          if ( v20 )
          {
            if ( wcsncmp(v13, pszDest, 0x40uLL) )
              PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v9);
          }
          else
          {
            RtlStringCchCopyW(pszDest, 0x40uLL, v13);
            v20 = 1;
          }
          v16 = 0;
          v15 = 0;
LABEL_30:
          v17 = (GUID *)&v3[v11 + 11];
          ++v9;
          *v17 = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
          v17->Data2 = v15;
          v17->Data3 = v16;
        }
        v18 = (_QWORD *)qword_140F0DB68;
        v4 = 0;
        if ( *(__int64 **)qword_140F0DB68 != &SocSubsystemsList )
          __fastfail(3u);
        *v3 = &SocSubsystemsList;
        v3[1] = v18;
        *v18 = v3;
        qword_140F0DB68 = (__int64)v3;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v4;
}
