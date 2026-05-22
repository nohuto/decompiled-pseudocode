/*
 * XREFs of ?QueryInterface@GameControllerRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D4C0
 * Callers:
 *     ?QueryInterface@GameControllerRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CBD40 (-QueryInterface@GameControllerRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CBD50 (-QueryInterface@GameControllerRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CBD60 (-QueryInterface@GameControllerRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CBD70 (-QueryInterface@GameControllerRawInputProvider@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::QueryInterface(
        GameControllerRawInputProvider *this,
        const struct _GUID *a2,
        GameControllerRawInputProvider **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  GameControllerRawInputProvider *v8; // rdx
  __int64 v10; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v7 = (unsigned __int64)this + 32;
    goto LABEL_11;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
  if ( !v5 )
  {
    v8 = this;
LABEL_12:
    if ( !a3 )
      return 2147500035LL;
    _InterlockedIncrement((volatile signed __int32 *)this + 10);
    *a3 = v8;
    return 0LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
  if ( !v6 )
  {
    v7 = (unsigned __int64)this + 8;
LABEL_11:
    v8 = (GameControllerRawInputProvider *)(v7 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    goto LABEL_12;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data4;
  if ( !v10 )
  {
    v7 = (unsigned __int64)this + 16;
    goto LABEL_11;
  }
  if ( a3 )
    *a3 = 0LL;
  return 2147500034LL;
}
