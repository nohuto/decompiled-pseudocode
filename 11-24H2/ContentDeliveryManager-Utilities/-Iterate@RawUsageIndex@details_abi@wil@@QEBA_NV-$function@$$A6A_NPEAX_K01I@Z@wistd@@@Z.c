/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180034690
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180037B38 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x18002A344 (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180037008 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h] BYREF
  __int64 v11; // [rsp+50h] [rbp-19h] BYREF
  __int16 v12; // [rsp+58h] [rbp-11h] BYREF
  char v13; // [rsp+5Ah] [rbp-Fh]
  int v14; // [rsp+5Ch] [rbp-Dh]
  unsigned __int16 v15; // [rsp+60h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp-1h]
  __int16 v17; // [rsp+78h] [rbp+Fh] BYREF
  char v18; // [rsp+7Ah] [rbp+11h]
  unsigned int v19; // [rsp+7Ch] [rbp+13h]
  unsigned __int16 v20; // [rsp+80h] [rbp+17h]
  __int128 v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+6Fh]
  unsigned __int8 *v24; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+7Fh] BYREF

  v23 = a2;
  v24 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v17 = *(_WORD *)(a1 + 2);
  v18 = v4;
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v12 = *(_WORD *)(a1 + 6);
  v13 = v5;
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v17,
            &v24,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    for ( i = 0;
          i < v19
       && wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v12,
            &v24,
            *(unsigned __int8 **)(a1 + 32));
          ++i )
    {
      v22 = v14;
      v25 = v15;
      v9 = *((_QWORD *)&v16 + 1);
      v10 = v20;
      v11 = *((_QWORD *)&v21 + 1);
      v7 = *(_QWORD *)(a2 + 112);
      if ( !v7 )
        __fastfail(7u);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v7 + 32LL))(
              v7,
              &v11,
              &v10,
              &v9,
              &v25,
              &v22) )
      {
        wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(a2);
        return 0;
      }
    }
  }
  wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(a2);
  return 1;
}
