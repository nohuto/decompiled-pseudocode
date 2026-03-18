/*
 * XREFs of ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x180255184
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1801FED04 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     wil_details_NtUpdateWnfStateData @ 0x1801FF49C (wil_details_NtUpdateWnfStateData.c)
 */

char __fastcall wil::details_abi::WriteWnfUsageBuffer(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        struct wil::details_abi::RawUsageIndex *a4)
{
  int updated; // eax
  __int64 v7; // r9
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]

  if ( *(_BYTE *)(a3 + 56) )
  {
    updated = wil_details_NtUpdateWnfStateData(
                (__int64)this,
                *(_QWORD *)(a3 + 24),
                *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 24),
                (__int64)a4,
                v9,
                (int)a2,
                1);
    if ( updated == -1073741823 )
      return 0;
    if ( updated )
      wil_details_NtUpdateWnfStateData(
        (__int64)this,
        *(_QWORD *)(a3 + 24),
        *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 24),
        v7,
        v10,
        0,
        0);
  }
  return 1;
}
