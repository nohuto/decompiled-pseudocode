/*
 * XREFs of ?HrFindInterface@CDDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180203070
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802031B0 (-HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::HrFindInterface(
        CDDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97.Data4;
    if ( !v5 )
      goto LABEL_5;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e.Data4;
      if ( v9 )
        return (unsigned int)CRenderTarget::HrFindInterface(this, a2, a3);
      v6 = (unsigned __int64)this + 176;
    }
    else
    {
LABEL_5:
      v6 = (unsigned __int64)this + 160;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
