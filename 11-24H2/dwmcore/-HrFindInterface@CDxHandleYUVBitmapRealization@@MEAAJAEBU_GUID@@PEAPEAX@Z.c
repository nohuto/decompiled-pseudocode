/*
 * XREFs of ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E3180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::HrFindInterface(
        CDxHandleYUVBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
      if ( v6 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_462c710f_5601_454b_b804_03effd995c26.Data4;
        if ( !v9 )
        {
          v7 = (unsigned __int64)this + 344;
          goto LABEL_9;
        }
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data4;
        if ( v10 )
        {
          v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
            v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
          if ( !v11 )
            goto LABEL_28;
          v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
            v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
          if ( v12 )
          {
            v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1 )
              v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data4;
            if ( v13 )
              return (unsigned int)-2147467262;
            v7 = (unsigned __int64)this + 88;
          }
          else
          {
LABEL_28:
            v7 = (unsigned __int64)this + 80;
          }
          goto LABEL_9;
        }
      }
    }
    v7 = (unsigned __int64)this + 328;
LABEL_9:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
