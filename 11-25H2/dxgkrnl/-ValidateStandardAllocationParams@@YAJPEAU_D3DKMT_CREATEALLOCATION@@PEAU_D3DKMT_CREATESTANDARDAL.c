/*
 * XREFs of ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1401AF9FC
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall ValidateStandardAllocationParams(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a2,
        char a3)
{
  const wchar_t *v5; // r9
  const void *pStandardAllocation; // rdx
  SIZE_T Size; // rdx

  if ( a1->PrivateDriverDataSize )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8834;
    v5 = L"PrivateDriverData Size must be zero when Creating StandardAllocation,                returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1->NumAllocations != 1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8842;
    v5 = L"StandardAllocation supports only 1 allocation, returning 0x%I64x";
    goto LABEL_3;
  }
  if ( a3 )
  {
    pStandardAllocation = a1->pStandardAllocation;
    if ( (unsigned __int64)pStandardAllocation >= MmUserProbeAddress )
      pStandardAllocation = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, pStandardAllocation, 0x18uLL);
  }
  else
  {
    *a2 = *a1->pStandardAllocation;
  }
  if ( a2->Type == D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP )
  {
    if ( (*(_DWORD *)&a1->Flags & 0x20020) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8871;
      v5 = L"StandardAllocation is only allowed with ExistingSysMem or ExistingSection,                    returning 0x%I64x";
      goto LABEL_3;
    }
    if ( (*(_DWORD *)&a1->Flags & 0x20020) == 0x20020 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8878;
      v5 = L"Invalid Flags specified with StandardAllocation,                     returning 0x%I64x";
      goto LABEL_3;
    }
  }
  else
  {
    if ( a2->Type != 2 )
    {
      WdLogSingleEntry1(3LL, a2->Type);
      WdLogGlobalForLineNumber = 8896;
      return -1073741811LL;
    }
    if ( (*(_DWORD *)&a1->Flags & 0x20020) != 0 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8889;
      return 3221225485LL;
    }
  }
  if ( a2->Flags.Value )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8903;
    v5 = L"StandardAllocation Reserved Flags should not be set, returning 0x%I64x";
    goto LABEL_3;
  }
  Size = a2->ExistingHeapData.Size;
  if ( Size - 1 > 0xFFFFFFFE )
  {
    WdLogSingleEntry2(2LL, Size, -1073741811LL);
    WdLogGlobalForLineNumber = 8913;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid StandardAllocation Size:0x%I64x, Returning 0x%I64x",
      a2->ExistingHeapData.Size,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return 0LL;
}
