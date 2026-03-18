/*
 * XREFs of strncmp @ 0x1406BFB20
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x140264C3C (HalpAcpiCheckAndMapTable.c)
 *     EtwpApplyPredicate @ 0x14032BA20 (EtwpApplyPredicate.c)
 *     HalpAcpiGetCachedTable @ 0x140478664 (HalpAcpiGetCachedTable.c)
 *     RtlLookupImageSectionByName @ 0x1404AB2D0 (RtlLookupImageSectionByName.c)
 *     KasanDriverLoadImageInternal @ 0x1404B7B70 (KasanDriverLoadImageInternal.c)
 *     HvlDebuggerSupportInitialize @ 0x140582420 (HvlDebuggerSupportInitialize.c)
 *     __asan_wrap_strncmp @ 0x1405ADDD0 (__asan_wrap_strncmp.c)
 *     RtlValidateCorrelationVector @ 0x1406FBB50 (RtlValidateCorrelationVector.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9704 (ApiSetLoadSchemaEx.c)
 *     AslpFileHasSecuromWrapper @ 0x14080F15C (AslpFileHasSecuromWrapper.c)
 *     AslpFileIsArm64XBinary @ 0x14080F1D8 (AslpFileIsArm64XBinary.c)
 *     AslpHasStarForceWrapper @ 0x14080FDC8 (AslpHasStarForceWrapper.c)
 *     BiIsWindowsEfiEntry @ 0x1409BFB4C (BiIsWindowsEfiEntry.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x140ACB3EC (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     RtlGetCpuVendor @ 0x140B609B4 (RtlGetCpuVendor.c)
 *     KiGetCpuVendor @ 0x140B6D9F4 (KiGetCpuVendor.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  signed __int64 v3; // r9
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  bool v8; // cc
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edx

  if ( !MaxCount )
    return 0;
  v3 = Str2 - Str1;
  if ( ((unsigned __int8)Str1 & 7) != 0 )
    goto LABEL_3;
LABEL_7:
  while ( (((_WORD)v3 + (_WORD)Str1) & 0xFFFu) <= 0xFF8 )
  {
    v6 = *(_QWORD *)Str1;
    v7 = *(_QWORD *)&Str1[v3];
    if ( *(_QWORD *)Str1 != v7 )
      break;
    Str1 += 8;
    v8 = MaxCount <= 8;
    MaxCount -= 8LL;
    if ( v8 )
      return 0;
    if ( (((v7 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v6) & 0x8101010101010100uLL) != 0 )
    {
      if ( !(_BYTE)v7 )
        return 0;
      if ( !BYTE1(v7) )
        return 0;
      v10 = v7 >> 16;
      if ( !(_BYTE)v10 )
        return 0;
      if ( !BYTE1(v10) )
        return 0;
      v11 = v10 >> 16;
      if ( !(_BYTE)v11 )
        return 0;
      if ( !BYTE1(v11) )
        return 0;
      v12 = WORD1(v11);
      if ( !(_BYTE)v12 || !BYTE1(v12) )
        return 0;
    }
  }
LABEL_3:
  while ( 1 )
  {
    v4 = *Str1;
    v5 = (Str1++)[v3];
    if ( v4 != v5 )
      return -(v4 < v5) - ((v4 < v5) - 1);
    if ( !--MaxCount || !v4 )
      return 0;
    if ( ((unsigned __int8)Str1 & 7) == 0 )
      goto LABEL_7;
  }
}
