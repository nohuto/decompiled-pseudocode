/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405D12F8 (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     wcsncmp @ 0x1404FFFD0 (wcsncmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074F75C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     RtlHashUnicodeString @ 0x1409862A0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1409863B0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  _QWORD *v5; // rsi
  NTSTATUS v6; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v14; // eax
  const wchar_t *v15; // rax
  _QWORD *v16; // r12
  unsigned __int16 v17; // r10
  unsigned __int16 v18; // cx
  GUID *v19; // r8
  _QWORD *v20; // rax
  char v22; // [rsp+28h] [rbp-E0h]
  const wchar_t *v23; // [rsp+30h] [rbp-D8h]
  __int128 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+48h] [rbp-C0h]
  __int128 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  unsigned int v29; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+7Ch] [rbp-8Ch]
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin
    && (v29 = a1, BugCheckParameter4 = 0LL, (unsigned __int8)guard_dispatch_icall_no_overrides(36LL, &v29, v2, v3)) )
  {
    v4 = BugCheckParameter4;
    if ( !(_DWORD)BugCheckParameter4 )
      PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, 0LL);
    if ( (unsigned int)BugCheckParameter4 > 0x3E8 )
      PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, (unsigned int)BugCheckParameter4);
    v5 = (_QWORD *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v5 )
    {
      v6 = -1073741585;
LABEL_9:
      ExFreePoolWithTag(v5, 0x4D584650u);
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v5 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a1;
        v8 = 0;
        *(_DWORD *)(Pool2 + 20) = v4;
        while ( v8 < *((_DWORD *)v5 + 5) )
        {
          v9 = 43LL * v8;
          v5[v9 + 4] = (char *)&v5[v9 + 13] + 4;
          LODWORD(v5[v9 + 3]) = 0x800000;
          LOWORD(v5[v9 + 5]) = 0;
          v5[v9 + 6] = (char *)&v5[v9 + 29] + 4;
          WORD1(v5[v9 + 5]) = 128;
          LODWORD(v5[v9 + 7]) = v8;
          LODWORD(v24) = a1;
          *((_QWORD *)&v24 + 1) = 0LL;
          DWORD1(v24) = v5[v9 + 7];
          v25 = *(_OWORD *)&v5[v9 + 3];
          v10 = *(_OWORD *)&v5[v9 + 5];
          v27 = 0LL;
          v26 = v10;
          PopPluginInitializeSocSubsystemStaticInfo(128LL, &v24);
          LOWORD(v5[v9 + 5]) = v26;
          LOWORD(v5[v9 + 3]) = v25;
          v5[v9 + 8] = *((_QWORD *)&v24 + 1);
          LODWORD(v5[v9 + 13]) = v27;
          v6 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v9 + 5], 0, 0, (PULONG)&v5[v9 + 7] + 1);
          if ( v6 < 0 )
            goto LABEL_9;
          ++v8;
        }
        v22 = 0;
        v11 = 0;
        while ( v11 < *((_DWORD *)v5 + 5) )
        {
          v12 = 0;
          v13 = 43LL * v11;
          v14 = v5[v13 + 7];
          *(GUID *)&v5[v13 + 9] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
          WORD2(v5[v13 + 9]) = a1;
          HIWORD(v5[v13 + 9]) = v14 + 1;
          v15 = (const wchar_t *)v5[v13 + 4];
          v23 = v15;
          while ( v12 < *((_DWORD *)v5 + 5) )
          {
            v28 = 344LL * v12;
            v16 = &v5[(unsigned __int64)v28 / 8];
            if ( v12 != v11 )
            {
              if ( !wcsncmp((const wchar_t *)v5[v13 + 6], (const wchar_t *)v16[6], 0x40uLL) )
                PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v12);
              v15 = v23;
            }
            if ( !wcsncmp(v15, (const wchar_t *)v16[6], 0x40uLL) )
            {
              v17 = a1;
              v18 = LODWORD(v5[(unsigned __int64)v28 / 8 + 7]) + 1;
              goto LABEL_30;
            }
            v15 = v23;
            ++v12;
          }
          if ( v22 )
          {
            if ( wcsncmp(v15, pszDest, 0x40uLL) )
              PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v11);
          }
          else
          {
            RtlStringCchCopyW(pszDest, 0x40uLL, v15);
            v22 = 1;
          }
          v18 = 0;
          v17 = 0;
LABEL_30:
          v19 = (GUID *)&v5[v13 + 11];
          ++v11;
          *v19 = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
          v19->Data2 = v17;
          v19->Data3 = v18;
        }
        v20 = (_QWORD *)qword_140F0D618;
        v6 = 0;
        if ( *(__int64 **)qword_140F0D618 != &SocSubsystemsList )
          __fastfail(3u);
        *v5 = &SocSubsystemsList;
        v5[1] = v20;
        *v20 = v5;
        qword_140F0D618 = (__int64)v5;
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
  return (unsigned int)v6;
}
