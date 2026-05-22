/*
 * XREFs of ?QueryInterface@?$ObjectBase@UISIPCServer@@U?$MarkerInterface@UIAgileObject@@@@U?$MarkerInterface@UINoMarshal@@@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010FE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObjectBase<ISIPCServer,MarkerInterface<IAgileObject>,MarkerInterface<INoMarshal>>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = *a2 - *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1;
  if ( *a2 == *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data4;
  if ( !v4 )
    goto LABEL_10;
  v5 = *a2 - *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1;
  if ( *a2 == *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
  if ( !v5 )
    goto LABEL_10;
  v6 = *a2 - *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1;
  if ( *a2 == *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1 )
    v6 = a2[1] - *(_QWORD *)GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data4;
  if ( v6 )
  {
    v8 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v8 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    v7 = a1 & -(__int64)(v8 == 0);
  }
  else
  {
LABEL_10:
    v7 = a1;
  }
  if ( v7 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = v7;
    }
    else
    {
      return 2147500035LL;
    }
  }
  else
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  return result;
}
