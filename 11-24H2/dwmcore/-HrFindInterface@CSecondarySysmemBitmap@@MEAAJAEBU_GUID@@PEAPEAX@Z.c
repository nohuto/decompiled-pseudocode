/*
 * XREFs of ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DB270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::HrFindInterface(
        CSecondarySysmemBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( !v5 )
    {
LABEL_8:
      *a3 = this;
      return 0LL;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data4;
    if ( !v6 )
    {
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
