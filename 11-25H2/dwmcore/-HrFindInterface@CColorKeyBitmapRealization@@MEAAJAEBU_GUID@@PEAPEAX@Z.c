/*
 * XREFs of ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021A470
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::HrFindInterface(
        CColorKeyBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rdx
  int v15; // eax
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( !a3 )
    return v5;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
  if ( !v6 )
  {
    *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
    return 0;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data4;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 12) + 24LL);
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 12) + 24LL));
      v16 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v16);
      v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
              v9,
              &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309,
              &v16);
      v11 = v16;
      if ( v15 >= 0 )
      {
        v12 = (unsigned __int64)this + 80;
        goto LABEL_14;
      }
LABEL_24:
      v5 = -2147467262;
      v13 = 0LL;
      goto LABEL_15;
    }
LABEL_23:
    v11 = 0LL;
    v16 = 0LL;
    goto LABEL_24;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
  if ( v8 )
    return (unsigned int)-2147467262;
  v9 = *(_QWORD *)(*((_QWORD *)this + 12) + 24LL);
  if ( !v9 )
    goto LABEL_23;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 12) + 24LL));
  v16 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
          v9,
          &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8,
          &v16);
  v11 = v16;
  if ( v10 < 0 )
    goto LABEL_24;
  v12 = (unsigned __int64)this + 88;
LABEL_14:
  v5 = 0;
  v13 = (void *)(v12 & -(__int64)(this != 0LL));
LABEL_15:
  *a3 = v13;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v5;
}
