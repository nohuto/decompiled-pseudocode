/*
 * XREFs of ?HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041E80
 * Callers:
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041D90 (-InternalQueryInterface@-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::HrFindInterface(CDeviceTextureTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
        if ( !v7 )
          goto LABEL_20;
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
        if ( !v8 )
        {
          v13 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
          if ( v13 )
            v14 = (void *)(v13 + 8);
          else
            v14 = 0LL;
          *a3 = v14;
          return 0LL;
        }
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
        if ( !v9 )
          goto LABEL_20;
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
        if ( v10 )
        {
          v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
            v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
          if ( v12 )
            return 2147500034LL;
          v11 = (unsigned __int64)this + 88;
        }
        else
        {
LABEL_20:
          v11 = (unsigned __int64)this + 72;
        }
      }
      else
      {
        v11 = (unsigned __int64)this + 256;
      }
    }
    else
    {
      v11 = (unsigned __int64)this + 240;
    }
    *a3 = (void *)(v11 & -(__int64)(this != 0LL));
    return 0LL;
  }
  return result;
}
