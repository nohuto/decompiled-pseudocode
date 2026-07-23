/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x180011370
 * Callers:
 *     LdrResFallbackLangList @ 0x180011F70 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800EC360 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

bool LdrpSetThreadPreferredLangList()
{
  _DWORD *v0; // rax
  int RegistryInfo; // ebx
  struct _TEB *v2; // rdx
  int WowTebOffset; // eax
  struct _TEB *v4; // r8
  __int64 v5; // rax
  struct _TEB *v6; // rcx
  __int64 v7; // rax
  unsigned int MuiImpersonation; // eax
  _DWORD *MergedPrefLanguages; // rcx
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF

  NumberOfLanguages = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    v0 = g_RegInfo;
    if ( !g_RegInfo )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      RegistryInfo = 0;
      if ( !g_RegInfo )
        RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      if ( RegistryInfo < 0 )
        return 0;
      v0 = g_RegInfo;
      if ( !g_RegInfo )
        return 0;
    }
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == v0[4] )
    {
      v2 = NtCurrentTeb();
      WowTebOffset = v2->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v2) = WowTebOffset + (_DWORD)v2;
      v4 = NtCurrentTeb();
      v5 = v4->WowTebOffset;
      if ( (int)v5 < 0 )
        v4 = (struct _TEB *)((char *)v4 + v5);
      v6 = NtCurrentTeb();
      v7 = v6->WowTebOffset;
      if ( (_DWORD)v2 == LODWORD(v4->NtTib.SubSystemTib) )
      {
        if ( (int)v7 < 0 )
          v6 = (struct _TEB *)((char *)v6 + v7);
        MuiImpersonation = HIDWORD(v6->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v7 < 0 )
          v6 = (struct _TEB *)((char *)v6 + v7);
        MuiImpersonation = v6->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
    }
    else
    {
      MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
      MergedPrefLanguages[10] |= 0x80u;
    }
  }
  ReturnLength = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
  return ((int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789)
      && NtCurrentTeb()->MergedPrefLanguages;
}
