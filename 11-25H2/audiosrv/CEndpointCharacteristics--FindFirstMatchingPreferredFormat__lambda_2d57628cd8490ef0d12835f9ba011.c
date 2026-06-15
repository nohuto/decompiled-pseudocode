/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007C818
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3C8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18007CA5C (_lambda_2d57628cd8490ef0d12835f9ba011710_--operator().c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 *v5; // r12
  int v6; // r13d
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // cl
  __int64 v11; // rax
  bool v12; // al
  bool v13; // bl
  __int64 v14; // rdi
  _DWORD *v15; // r14
  unsigned __int16 *v16; // r15
  int i; // esi
  __int16 v18; // dx
  __int64 v19; // r9
  int v20; // r8d
  unsigned __int16 v21; // cx
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  _DWORD v28[4]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp-20h] BYREF

  v29[0] = 2097184;
  v29[1] = 1572896;
  v29[2] = 1572888;
  v29[3] = 1048592;
  v28[0] = 2097184;
  v28[1] = 1572888;
  v28[2] = 1048592;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4, v23, a2, a3, pvar[0])
    && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v5 = (unsigned __int16 *)v29;
    v6 = 4;
  }
  else
  {
    v5 = (unsigned __int16 *)v28;
    v6 = 3;
  }
  if ( *(_DWORD *)(a1 + 236) )
  {
    v9 = *(_QWORD *)(a1 + 424) - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(a1 + 432) - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
    v10 = v9 == 0;
    v11 = *(_QWORD *)(a1 + 424) - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 432) - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
    v12 = v11 == 0;
    if ( v10 )
    {
      v7 = 0LL;
      v8 = 0LL;
    }
    else
    {
      if ( v12 )
      {
        v7 = (char *)&unk_180192230;
      }
      else
      {
        *(_OWORD *)pvar = 0LL;
        v27 = 0LL;
        v13 = (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
                *(_QWORD *)(a1 + 72),
                &PKEY_Endpoint_IsUSB,
                pvar) >= 0
           && LOWORD(pvar[0]) == 11
           && LOWORD(pvar[1]) == 0xFFFF;
        PropVariantClear(pvar);
        v7 = (char *)&unk_1801922F0;
        if ( !v13 )
          v7 = (char *)&unk_180192290;
      }
      v8 = 8LL;
    }
  }
  else
  {
    v7 = (char *)&unk_1801884A8;
    v8 = 4LL;
  }
  v14 = 0LL;
  v15 = v7 + 8;
  while ( v14 < v8 )
  {
    v16 = v5;
    for ( i = 0; i < v6; ++i )
    {
      v18 = *((_WORD *)v15 - 2);
      v19 = v24;
      *(_WORD *)(v24 + 2) = v18;
      v20 = *(v15 - 2);
      *(_DWORD *)(v19 + 4) = v20;
      v21 = *v16;
      *(_WORD *)(v19 + 14) = *v16;
      *(_WORD *)(v19 + 18) = v16[1];
      *(_DWORD *)(v19 + 20) = *v15;
      *(_WORD *)(v19 + 12) = v18 * (v21 >> 3);
      *(_DWORD *)(v19 + 8) = v20 * (unsigned __int16)(v18 * (v21 >> 3));
      *(_WORD *)(v19 + 16) = 22;
      LOBYTE(v23) = 0;
      result = lambda_2d57628cd8490ef0d12835f9ba011710_::operator()(v25, v19, &v23);
      if ( (int)result < 0 )
        return result;
      if ( (_BYTE)v23 )
        return 0LL;
      v16 += 2;
    }
    ++v14;
    v15 += 3;
  }
  return 0LL;
}
