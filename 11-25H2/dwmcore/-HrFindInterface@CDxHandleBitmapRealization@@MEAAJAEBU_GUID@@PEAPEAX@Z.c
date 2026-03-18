/*
 * XREFs of ?HrFindInterface@CDxHandleBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1A00
 * Callers:
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1900 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?HrFindInterface@CGDIBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180212510 (-HrFindInterface@CGDIBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180212E70 (-HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::HrFindInterface(
        CDxHandleBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  char *v13; // rdx
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
    if ( !v5 )
    {
      if ( *((_BYTE *)this + 393) )
      {
        v6 = (char *)this + 328;
        result = 0LL;
        if ( !this )
          v6 = 0LL;
        goto LABEL_11;
      }
LABEL_37:
      result = 2147500034LL;
      v6 = 0LL;
LABEL_11:
      *a3 = v6;
      return result;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_462c710f_5601_454b_b804_03effd995c26.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( !v9 )
        goto LABEL_33;
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
      if ( v10 )
      {
        v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1 )
          v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data4;
        if ( v11 )
        {
          return (unsigned int)-2147467262;
        }
        else
        {
          v16 = (char *)this + 88;
          v12 = 0;
          if ( !this )
            v16 = 0LL;
          *a3 = v16;
        }
        return v12;
      }
      else
      {
LABEL_33:
        v15 = (char *)this + 80;
        if ( !this )
          v15 = 0LL;
        *a3 = v15;
        return 0LL;
      }
    }
    else
    {
      if ( !*((_BYTE *)this + 393) )
        goto LABEL_37;
      v13 = (char *)this + 344;
      result = 0LL;
      if ( !this )
        v13 = 0LL;
      *a3 = v13;
    }
  }
  else
  {
    v14 = (char *)this + 328;
    if ( !this )
      v14 = 0LL;
    *a3 = v14;
    return 0LL;
  }
  return result;
}
