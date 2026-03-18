/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x14000A250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003C5C4 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x14003C9EC (HUBDESC_Validate30HubDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int16 v6; // ax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // ax
  _WORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+34h] [rbp-44h]
  __int128 v14; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v15)(); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 960);
  v12[1] = 0;
  v14 = 0LL;
  v18 = 0LL;
  v3 = *(_DWORD *)(v2 + 256);
  v12[0] = *(_WORD *)(v2 + 2466);
  v13 = v3;
  v15 = HUBMISC_LogDescriptorValidationErrorForHub;
  v16 = HUBMISC_LogDescriptorValidationWarningForHub;
  v17 = v2;
  v4 = v3 - 1;
  if ( !v4 || (v5 = v4 - 1) == 0 )
  {
    if ( (unsigned __int8)HUBDESC_Validate20HubDescriptor(v2 + 1188, a2, v12, *(_QWORD *)(v2 + 2528)) )
    {
      v10 = *(unsigned __int8 *)(v2 + 1190);
      v7 = 2053;
      *(_WORD *)(v2 + 48) = v10;
      *(_WORD *)(v2 + 144) = v10;
      if ( (*(_BYTE *)(v2 + 1191) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
      v8 = 8;
      if ( (*(_BYTE *)(v2 + 1191) & 8) != 0 )
        goto LABEL_15;
      return v7;
    }
LABEL_16:
    v7 = 2045;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 2528), a2, 3, 33, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    }
    return v7;
  }
  if ( v5 != 1 || !(unsigned __int8)HUBDESC_Validate30HubDescriptor(v2 + 1188, a2, v12, *(_QWORD *)(v2 + 2528)) )
    goto LABEL_16;
  v6 = *(unsigned __int8 *)(v2 + 1190);
  v7 = 2053;
  *(_WORD *)(v2 + 48) = v6;
  *(_WORD *)(v2 + 150) = v6;
  if ( (*(_BYTE *)(v2 + 1191) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
  v8 = 16;
  v9 = *(_WORD *)(v2 + 1191) & 0x18;
  if ( v9 == 16 || v9 == 24 || (v8 = 8, v9 == 8) )
LABEL_15:
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), v8);
  return v7;
}
