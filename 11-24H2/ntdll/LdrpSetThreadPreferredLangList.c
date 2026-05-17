/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x18007CA30
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18007BF40 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F16E0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

bool __fastcall LdrpSetThreadPreferredLangList(__int64 a1, __int64 a2)
{
  char *MergedPrefLanguages; // rcx
  __int64 v3; // rax
  int RegistryInfo; // ebx
  struct _TEB *v5; // rdx
  int WowTebOffset; // eax
  struct _TEB *v7; // r8
  __int64 v8; // rax
  struct _TEB *v9; // rcx
  __int64 v10; // rax
  unsigned int MuiImpersonation; // eax
  _DWORD *v13; // rcx
  int ThreadPreferredUILanguages; // eax
  unsigned int v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = (char *)NtCurrentTeb()->MergedPrefLanguages;
    if ( MergedPrefLanguages[40] >= 0 )
    {
      v3 = g_RegInfo;
      if ( !g_RegInfo )
      {
        RtlpInitMuiCriticalSection(MergedPrefLanguages, a2);
        RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
        RegistryInfo = 0;
        if ( !g_RegInfo )
          RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
        RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
        if ( RegistryInfo < 0 )
          return 0;
        v3 = g_RegInfo;
        if ( !g_RegInfo )
          return 0;
      }
      if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
        || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
        && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v3 + 16) )
      {
        v5 = NtCurrentTeb();
        WowTebOffset = v5->WowTebOffset;
        if ( WowTebOffset < 0 )
          LODWORD(v5) = WowTebOffset + (_DWORD)v5;
        v7 = NtCurrentTeb();
        v8 = v7->WowTebOffset;
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        v9 = NtCurrentTeb();
        v10 = v9->WowTebOffset;
        if ( (_DWORD)v5 == LODWORD(v7->NtTib.SubSystemTib) )
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = HIDWORD(v9->glDispatchTable[186]);
        }
        else
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = v9->MuiImpersonation;
        }
        if ( MuiImpersonation )
          return 1;
      }
      else
      {
        v13 = NtCurrentTeb()->MergedPrefLanguages;
        v13[10] |= 0x80u;
      }
    }
  }
  v15 = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages((void *)0x30, (unsigned __int64)&v16, 0LL, &v15);
  return ((int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789)
      && NtCurrentTeb()->MergedPrefLanguages;
}
