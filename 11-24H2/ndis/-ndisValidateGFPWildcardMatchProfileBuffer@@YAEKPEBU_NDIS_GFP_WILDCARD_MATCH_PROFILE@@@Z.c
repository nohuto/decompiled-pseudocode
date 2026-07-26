/*
 * XREFs of ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1400A4B0C
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1400A4C30 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1400A4E9C (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

unsigned __int8 __fastcall ndisValidateGFPWildcardMatchProfileBuffer(
        unsigned int a1,
        const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *a2)
{
  char v4; // bl
  unsigned int HeaderGroupWildcardMatchProfileArrayOffset; // r14d
  unsigned int HeaderGroupWildcardMatchProfileArrayElementSize; // ebp
  unsigned int v7; // r9d
  unsigned int i; // r8d
  unsigned int v9; // ecx
  UCHAR *v10; // rdx

  if ( a1 < 0x20 || a2->Header.Size < 0x20u || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v4 = 0;
  if ( !a2->Flags && a2->TableType == NdisGfpTableTypePacketDirect )
  {
    if ( a2->NumSupportedEntries )
    {
      HeaderGroupWildcardMatchProfileArrayOffset = a2->HeaderGroupWildcardMatchProfileArrayOffset;
      HeaderGroupWildcardMatchProfileArrayElementSize = a2->HeaderGroupWildcardMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             HeaderGroupWildcardMatchProfileArrayOffset,
             a2->HeaderGroupWildcardMatchProfileArrayNumElements,
             HeaderGroupWildcardMatchProfileArrayElementSize) )
      {
        for ( i = 0; i < v7; ++i )
        {
          v9 = HeaderGroupWildcardMatchProfileArrayOffset + i * HeaderGroupWildcardMatchProfileArrayElementSize;
          v10 = &a2->Header.Type + v9;
          if ( a1 - v9 < 0x38
            || *((_WORD *)v10 + 1) < 0x31u
            || *v10 != 0x80
            || v10[1] != 1
            || *((_DWORD *)v10 + 1)
            || (*((_DWORD *)v10 + 2) & 0xFFFFF000) != 0
            || (*((_QWORD *)v10 + 2) & 0xFFFFFFFFFF000000uLL) != 0
            || *((int *)v10 + 6) >= 4
            || *((int *)v10 + 7) >= 4
            || *((int *)v10 + 8) >= 4
            || *((int *)v10 + 9) >= 4
            || *((int *)v10 + 10) >= 4
            || *((int *)v10 + 11) >= 4 )
          {
            return v4;
          }
        }
        return 1;
      }
    }
  }
  return v4;
}
