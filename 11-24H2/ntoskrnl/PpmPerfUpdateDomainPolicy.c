/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x140AC40C8
 * Callers:
 *     PpmPerfRemoveMaximumOverride @ 0x14074DEF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074E004 (PpmPerfSetMaximumOverride.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14074EF60 (PpmUpdatePerfStates.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14044C454 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140472694 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404882D8 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404AA2EC (PpmPerfUpdateMultimediaPowerModel.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405CFFFC (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PsRefreshUserPresencePpmPolicies @ 0x1405E28F8 (PsRefreshUserPresencePpmPolicies.c)
 *     PpmEventQosSupport @ 0x140A88084 (PpmEventQosSupport.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A8ACF8 (PpmCheckApplyPerfConstraints.c)
 */

void __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v2; // r14
  char v3; // r12
  char v4; // bp
  char v5; // r15
  char v6; // di
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edx
  int *v10; // r8
  char v11; // r9
  __int64 v12; // r10
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  bool v16; // bl
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v6 = 1;
      v7 = 0;
    }
    else
    {
      v6 = 0;
      v7 = 128;
    }
    v18 = v7;
  }
  else
  {
    v6 = 0;
    v18 = 0;
    v8 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
      {
        v3 = 1;
        if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
          v5 = *(_DWORD *)(v1 + 764) != 0 ? v5 : 0;
      }
      if ( (*(_DWORD *)(v1 + 772) & 0x1C3) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 802) )
      {
        v6 = 1;
      }
      else
      {
        v9 = 0;
        v10 = (int *)(v1 + 764);
        v11 = 1;
        v12 = 6LL;
        do
        {
          v13 = *v10;
          v14 = *v10++;
          v9 |= v13;
          v11 = (v14 & 2) != 0 ? v11 : 0;
          --v12;
        }
        while ( v12 );
        v15 = v9 & 0xFFFFFFFD;
        if ( v11 )
          v15 = v9;
        v8 |= v15;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v2 = a1;
    if ( v6 )
      v8 = 0;
    v18 = v8;
  }
  v16 = PpmPerfUpdateQosDisableReasons(&v18) != 0;
  if ( v6 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v6;
    v2 = 1;
    v16 = 1;
  }
  PpmPerfMultimediaQosSupported = v4;
  PpmPerfUpdateMultimediaPowerModel();
  if ( v16 )
    PpmEventQosSupport(0);
  if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
    PsRefreshUserPresencePpmPolicies(v5, dword_140F0B38C == 0);
  if ( v3 || v2 )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckApplyPerfConstraints(v2);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
