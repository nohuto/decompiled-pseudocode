/*
 * XREFs of ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180229940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::HrFindInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  void *v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = -2147024809;
  if ( a3 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v8 )
      {
        return (unsigned int)-2147467262;
      }
      else
      {
        v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
        v11 = 0LL;
        if ( v9 && (**v9)(v9, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v11) >= 0 )
        {
          v6 = 0;
          v3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
        }
        else
        {
          v6 = -2147467262;
        }
        *a3 = v3;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      }
    }
    else
    {
      *a3 = this;
      return 0;
    }
  }
  return v6;
}
