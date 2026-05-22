/*
 * XREFs of ?QueryInterface@?$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A520
 * Callers:
 *     ?QueryInterface@?$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A610 (-QueryInterface@-$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A620 (-QueryInterface@-$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAJAEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax

  v4 = *a2 - *(_QWORD *)&GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data1;
  if ( *a2 == *(_QWORD *)&GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data4;
  if ( !v4 )
  {
    v6 = a1;
    goto LABEL_17;
  }
  v7 = *a2 - *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1;
  if ( *a2 == *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
  if ( !v7 )
  {
    v8 = a1 + 8;
LABEL_13:
    v6 = v8 & -(__int64)(a1 != 0);
    goto LABEL_17;
  }
  v9 = *a2 - *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1;
  if ( *a2 == *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1 )
    v9 = a2[1] - *(_QWORD *)GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data4;
  if ( !v9 )
  {
    v8 = a1 + 16;
    goto LABEL_13;
  }
  v10 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v10 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v6 = a1 & -(__int64)(v10 == 0);
LABEL_17:
  if ( v6 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = v6;
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
