/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180023E04
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18002511C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ @ 0x18001EE64 (--1-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800248A8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  __int16 v13; // [rsp+58h] [rbp-21h] BYREF
  char v14; // [rsp+5Ah] [rbp-1Fh]
  int v15; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int16 v16; // [rsp+60h] [rbp-19h]
  __int128 v17; // [rsp+68h] [rbp-11h]
  __int16 v18; // [rsp+78h] [rbp-1h] BYREF
  char v19; // [rsp+7Ah] [rbp+1h]
  unsigned int v20; // [rsp+7Ch] [rbp+3h]
  unsigned __int16 v21; // [rsp+80h] [rbp+7h]
  __int128 v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 *v25; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v24 = a2;
  v25 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v18 = *(_WORD *)(a1 + 2);
  v19 = v4;
  v20 = 0;
  v21 = 0;
  v22 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v13 = *(_WORD *)(a1 + 6);
  v14 = v5;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v18,
            &v25,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v6 = 0;
    v7 = *((_QWORD *)&v22 + 1);
    while ( v6 < v20
         && wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v13,
              &v25,
              *(unsigned __int8 **)(a1 + 32)) )
    {
      v23 = v15;
      v26 = v16;
      v10 = *((_QWORD *)&v17 + 1);
      v11 = v21;
      v12 = v7;
      v8 = *(_QWORD *)(a2 + 112);
      if ( !v8 )
        __fastfail(7u);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v8 + 32LL))(
              v8,
              &v12,
              &v11,
              &v10,
              &v26,
              &v23) )
      {
        wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
        return 0;
      }
      ++v6;
    }
  }
  wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
  return 1;
}
