/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180070D90
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180070958 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180071094 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ??R?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z @ 0x1800713F4 (--R-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180071454 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // bl
  char v6; // cl
  unsigned int i; // edi
  __int64 v9; // [rsp+28h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int16 v11; // [rsp+38h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-30h]
  __int16 v13; // [rsp+50h] [rbp-20h] BYREF
  char v14; // [rsp+52h] [rbp-1Eh]
  unsigned int v15; // [rsp+54h] [rbp-1Ch]
  unsigned __int16 v16; // [rsp+58h] [rbp-18h]
  __int128 v17; // [rsp+60h] [rbp-10h]
  unsigned __int8 *v18; // [rsp+90h] [rbp+20h] BYREF
  __int64 v19; // [rsp+98h] [rbp+28h]

  v19 = a2;
  v18 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v13 = *(_WORD *)(a1 + 2);
  v14 = v4;
  v5 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v6 = *(_BYTE *)(a1 + 8);
  LOWORD(v10) = *(_WORD *)(a1 + 6);
  BYTE2(v10) = v6;
  HIDWORD(v10) = 0;
  v11 = 0;
  v12 = 0LL;
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v13,
            &v18,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    for ( i = 0;
          i < v15
       && wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v10,
            &v18,
            *(unsigned __int8 **)(a1 + 32));
          ++i )
    {
      LODWORD(v9) = HIDWORD(v10);
      if ( !(unsigned __int8)wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
                               a2,
                               DWORD2(v17),
                               v16,
                               DWORD2(v12),
                               v11,
                               v9,
                               v10) )
        goto LABEL_9;
    }
  }
  v5 = 1;
LABEL_9:
  wistd::function<void (int const &)>::~function<void (int const &)>(a2);
  return v5;
}
