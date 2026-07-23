/*
 * XREFs of RtlpQueryLowBoxId @ 0x1404247E0
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x14042455C (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupLowBox @ 0x14042463C (RtlpLookupLowBox.c)
 *     RtlpLookupOrCreateLowBox @ 0x1404246D0 (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 */

__int64 RtlpQueryLowBoxId()
{
  __int64 v0; // rax
  int v1; // edi
  __int64 v2; // rbx
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v5; // rtt
  void *v7; // rdi
  PVOID v8; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  v11 = 0;
  v12 = 0;
  v0 = PsReferenceEffectiveToken(KeGetCurrentThread(), 1836020801LL, &v11, &v9, &v12, 0LL);
  v1 = v11;
  v2 = v0;
  if ( v11 == 2 && v12 < 2 )
  {
    v7 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x6D6F7441u);
    SeQueryInformationToken(v7, TokenIsAppContainer, &v8);
    if ( (_DWORD)v8 == 1 )
    {
      if ( v2 )
        ObfDereferenceObjectWithTag((PVOID)v2, 0x6D6F7441u);
      v2 = (__int64)v7;
      v1 = 1;
      v11 = 1;
    }
    else
    {
      ObfDereferenceObjectWithTag(v7, 0x6D6F7441u);
      v1 = v11;
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken((PACCESS_TOKEN)v2, TokenAppContainerNumber, &TokenInformation);
  if ( v1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    while ( (v2 ^ (unsigned __int64)ActiveProcessors) < 0xF )
    {
      v5 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
      if ( v5 == ActiveProcessors )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v2 - 48, 0, 1u, 0x6D6F7441u);
        return (unsigned int)TokenInformation;
      }
    }
    goto LABEL_10;
  }
  if ( v2 )
LABEL_10:
    ObfDereferenceObjectWithTag((PVOID)v2, 0x6D6F7441u);
  return (unsigned int)TokenInformation;
}
