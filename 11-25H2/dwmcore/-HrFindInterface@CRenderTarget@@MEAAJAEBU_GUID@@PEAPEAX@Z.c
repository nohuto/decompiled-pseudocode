/*
 * XREFs of ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802031B0
 * Callers:
 *     ?HrFindInterface@CDDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180203070 (-HrFindInterface@CDDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180203110 (-HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHolographicInteropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180281E70 (-HrFindInterface@CHolographicInteropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CIndirectSwapchainRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180281F00 (-HrFindInterface@CIndirectSwapchainRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CRemoteAppRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180281F60 (-HrFindInterface@CRemoteAppRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDARenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180290300 (-HrFindInterface@CDDARenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::HrFindInterface(CRenderTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data4;
        if ( v7 )
        {
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data1 )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data4;
          if ( v8 )
            return (unsigned int)-2147467262;
        }
        v9 = (unsigned __int64)this + 88;
      }
      else
      {
        v9 = (unsigned __int64)this + 96;
      }
    }
    else
    {
      v9 = (unsigned __int64)this + 80;
    }
    *a3 = (void *)(v9 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
