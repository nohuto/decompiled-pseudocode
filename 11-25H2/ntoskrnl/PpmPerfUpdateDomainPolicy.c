/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x140A69270
 * Callers:
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140744B70 (PpmUpdatePerfStates.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14026424C (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14048810C (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14048E130 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404AEA5C (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A69408 (PpmCheckApplyPerfConstraints.c)
 *     PpmEventQosSupport @ 0x140A86E7C (PpmEventQosSupport.c)
 */

LONG __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v2; // bp
  char v3; // r14
  char v4; // r15
  char v5; // di
  int v6; // esi
  bool v7; // bl
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // edx
  int *v12; // r8
  char v13; // r9
  __int64 v14; // r10
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v5 = 1;
      v10 = 0;
    }
    else
    {
      v5 = 0;
      v10 = 128;
    }
    v19 = v10;
  }
  else
  {
    v5 = 0;
    v19 = 0;
    v6 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( (*(_DWORD *)(v1 + 772) & 0x1C3) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 802) )
      {
        v5 = 1;
      }
      else
      {
        v11 = 0;
        v12 = (int *)(v1 + 764);
        v13 = 1;
        v14 = 6LL;
        do
        {
          v15 = *v12;
          v16 = *v12++;
          v11 |= v15;
          v13 = (v16 & 2) != 0 ? v13 : 0;
          --v14;
        }
        while ( v14 );
        v17 = v11 & 0xFFFFFFFD;
        if ( v13 )
          v17 = v11;
        v6 |= v17;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v2 = a1;
    if ( v5 )
      v6 = 0;
    v19 = v6;
  }
  v7 = PpmPerfUpdateQosDisableReasons(&v19) != 0;
  if ( v5 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v5;
    v2 = 1;
    v7 = 1;
  }
  PpmPerfMultimediaQosSupported = v4;
  PpmPerfUpdateMultimediaPowerModel();
  if ( v7 )
    PpmEventQosSupport(0LL);
  if ( !v3 && !v2 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  LOBYTE(v8) = v2;
  return PpmCheckApplyPerfConstraints(v8);
}
