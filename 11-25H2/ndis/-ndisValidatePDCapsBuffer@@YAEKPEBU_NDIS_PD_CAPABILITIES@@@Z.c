/*
 * XREFs of ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1400ACDE0
 * Callers:
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1400ACFB4 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 * Callees:
 *     ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1400ACBC0 (-ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1400ACCBC (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1400AD04C (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

unsigned __int8 __fastcall ndisValidatePDCapsBuffer(unsigned int a1, const struct _NDIS_PD_CAPABILITIES *a2)
{
  char v4; // bl
  unsigned int CapabilityFlags; // edx
  unsigned int ModerationIntervalGranularity; // r8d
  unsigned int MaximumModerationInterval; // ecx
  unsigned int MinimumModerationInterval; // eax
  unsigned int ExactMatchProfileArrayNumElements; // r14d
  unsigned int ExactMatchProfileArrayOffset; // r13d
  unsigned int ExactMatchProfileArrayElementSize; // r12d
  const struct _NDIS_OBJECT_HEADER *v12; // rdx
  unsigned int WildcardMatchProfileArrayNumElements; // r15d
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int WildcardMatchProfileArrayElementSize; // [rsp+70h] [rbp+8h]
  unsigned int WildcardMatchProfileArrayOffset; // [rsp+80h] [rbp+18h]

  if ( a1 < 0x60 || a2->Header.Size < 0x5Cu || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v4 = 0;
  if ( !a2->Flags )
  {
    CapabilityFlags = a2->CapabilityFlags;
    if ( (CapabilityFlags & 0xFFFFFFF0) == 0
      && a2->RxFilterContextWidth <= 0x40u
      && a2->MaxNumberOfTxQueues
      && a2->MaxNumberOfTxQueuesForDefaultVport
      && a2->MaxNumberOfTxQueuesPerNonDefaultVport
      && ((CapabilityFlags & 0xC) == 0 || (CapabilityFlags & 2) != 0) )
    {
      if ( (CapabilityFlags & 4) != 0 )
      {
        ModerationIntervalGranularity = a2->ModerationIntervalGranularity;
        if ( !ModerationIntervalGranularity )
          return v4;
        MaximumModerationInterval = a2->MaximumModerationInterval;
        if ( !MaximumModerationInterval )
          return v4;
        MinimumModerationInterval = a2->MinimumModerationInterval;
        if ( !MinimumModerationInterval
          || MaximumModerationInterval < MinimumModerationInterval
          || MinimumModerationInterval % ModerationIntervalGranularity
          || MaximumModerationInterval % ModerationIntervalGranularity )
        {
          return v4;
        }
      }
      else if ( (CapabilityFlags & 8) != 0
             || a2->ModerationIntervalGranularity
             || a2->MaximumModerationInterval
             || a2->MinimumModerationInterval )
      {
        return v4;
      }
      ExactMatchProfileArrayNumElements = a2->ExactMatchProfileArrayNumElements;
      ExactMatchProfileArrayOffset = a2->ExactMatchProfileArrayOffset;
      ExactMatchProfileArrayElementSize = a2->ExactMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             ExactMatchProfileArrayOffset,
             ExactMatchProfileArrayNumElements,
             ExactMatchProfileArrayElementSize) )
      {
        WildcardMatchProfileArrayNumElements = a2->WildcardMatchProfileArrayNumElements;
        WildcardMatchProfileArrayElementSize = a2->WildcardMatchProfileArrayElementSize;
        WildcardMatchProfileArrayOffset = a2->WildcardMatchProfileArrayOffset;
        if ( ndisValidateTrailingElementSpace(
               a1,
               v12,
               WildcardMatchProfileArrayOffset,
               WildcardMatchProfileArrayNumElements,
               WildcardMatchProfileArrayElementSize) )
        {
          for ( i = 0; i < ExactMatchProfileArrayNumElements; ++i )
          {
            if ( !ndisValidateGFPExactMatchProfileBuffer(
                    a1 - (ExactMatchProfileArrayOffset + i * ExactMatchProfileArrayElementSize),
                    (const struct _NDIS_GFP_EXACT_MATCH_PROFILE *)(&a2->Header.Type
                                                                 + ExactMatchProfileArrayOffset
                                                                 + i * ExactMatchProfileArrayElementSize)) )
              return v4;
          }
          for ( j = 0; j < WildcardMatchProfileArrayNumElements; ++j )
          {
            if ( !ndisValidateGFPWildcardMatchProfileBuffer(
                    a1 - (WildcardMatchProfileArrayOffset + j * WildcardMatchProfileArrayElementSize),
                    (const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *)(&a2->Header.Type
                                                                    + WildcardMatchProfileArrayOffset
                                                                    + j * WildcardMatchProfileArrayElementSize)) )
              return v4;
          }
          return 1;
        }
      }
    }
  }
  return v4;
}
