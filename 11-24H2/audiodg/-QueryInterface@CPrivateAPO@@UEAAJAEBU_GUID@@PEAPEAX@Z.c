/*
 * XREFs of ?QueryInterface@CPrivateAPO@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002C940
 * Callers:
 *     ?QueryInterface@CPrivateAPO@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006B8E0 (-QueryInterface@CPrivateAPO@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrivateAPO::QueryInterface(CPrivateAPO *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( !*((_BYTE *)this + 32) )
  {
    v8 = 123LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x80004002LL);
    return 2147500034LL;
  }
  v3 = *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 == *(_QWORD *)&a2->Data1 )
    v3 = *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4 - *(_QWORD *)a2->Data4;
  if ( !v3 )
  {
    v8 = 126LL;
    goto LABEL_16;
  }
  v4 = *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 == *(_QWORD *)&a2->Data1 )
    v4 = *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4 - *(_QWORD *)a2->Data4;
  if ( !v4 )
  {
    v8 = 127LL;
    goto LABEL_16;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v6 )
      return (***((int (__fastcall ****)(_QWORD, const struct _GUID *, void **, CPrivateAPO *))this + 5))(
               *((_QWORD *)this + 5),
               a2,
               a3,
               this) < 0
           ? 0x80004002
           : 0;
    *a3 = this;
    v9 = *(_QWORD *)this;
  }
  else
  {
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v9 = *(_QWORD *)this;
  }
  (*(void (__fastcall **)(CPrivateAPO *))(v9 + 8))(this);
  return 0LL;
}
