/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x180126088
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046068 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x180129E44 (_lambda_c7c9c295e9eb20a9e0b33ea00abada77_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int16 *v4; // r12
  int v5; // r13d
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // cl
  __int64 v10; // rax
  bool v11; // al
  bool v12; // bl
  __int64 v13; // rdi
  _DWORD *v14; // r14
  unsigned __int16 *v15; // r15
  int i; // esi
  __int16 v17; // dx
  __int64 v18; // r9
  int v19; // r8d
  unsigned __int16 v20; // cx
  __int64 result; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  _DWORD v27[4]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v28[4]; // [rsp+60h] [rbp-20h] BYREF

  v24 = a3;
  v23 = a2;
  v28[0] = 2097184;
  v28[1] = 1572896;
  v28[2] = 1572888;
  v28[3] = 1048592;
  v27[0] = 2097184;
  v27[1] = 1572888;
  v27[2] = 1048592;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v4 = (unsigned __int16 *)v28;
    v5 = 4;
  }
  else
  {
    v4 = (unsigned __int16 *)v27;
    v5 = 3;
  }
  if ( *(_DWORD *)(a1 + 236) )
  {
    v8 = *(_QWORD *)(a1 + 424) - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 432) - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
    v9 = v8 == 0;
    v10 = *(_QWORD *)(a1 + 424) - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 432) - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
    v11 = v10 == 0;
    if ( v9 )
    {
      v6 = 0LL;
      v7 = 0LL;
    }
    else
    {
      if ( v11 )
      {
        v6 = (char *)&unk_180192230;
      }
      else
      {
        *(_OWORD *)pvar = 0LL;
        v26 = 0LL;
        v12 = (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
                *(_QWORD *)(a1 + 72),
                &PKEY_Endpoint_IsUSB,
                pvar) >= 0
           && LOWORD(pvar[0]) == 11
           && LOWORD(pvar[1]) == 0xFFFF;
        PropVariantClear(pvar);
        v6 = (char *)&unk_1801922F0;
        if ( !v12 )
          v6 = (char *)&unk_180192290;
      }
      v7 = 8LL;
    }
  }
  else
  {
    v6 = (char *)&unk_1801884A8;
    v7 = 4LL;
  }
  v13 = 0LL;
  v14 = v6 + 8;
  while ( v13 < v7 )
  {
    v15 = v4;
    for ( i = 0; i < v5; ++i )
    {
      v17 = *((_WORD *)v14 - 2);
      v18 = v23;
      *(_WORD *)(v23 + 2) = v17;
      v19 = *(v14 - 2);
      *(_DWORD *)(v18 + 4) = v19;
      v20 = *v15;
      *(_WORD *)(v18 + 14) = *v15;
      *(_WORD *)(v18 + 18) = v15[1];
      *(_DWORD *)(v18 + 20) = *v14;
      *(_WORD *)(v18 + 12) = v17 * (v20 >> 3);
      *(_DWORD *)(v18 + 8) = v19 * (unsigned __int16)(v17 * (v20 >> 3));
      *(_WORD *)(v18 + 16) = 22;
      v22[0] = 0;
      result = lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator()(v24, v18, v22);
      if ( (int)result < 0 )
        return result;
      if ( v22[0] )
        return 0LL;
      v15 += 2;
    }
    ++v13;
    v14 += 3;
  }
  return 0LL;
}
