/*
 * XREFs of ?QueryInterface@DWMInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057F80
 * Callers:
 *     ?QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5970 (-QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5980 (-QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5990 (-QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F59A0 (-QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F59B0 (-QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F59C0 (-QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F59D0 (-QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputTarget::QueryInterface(DWMInputTarget *this, const struct _GUID *a2, DWMInputTarget **a3)
{
  DWMInputTarget *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 8;
      goto LABEL_12;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 16;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 24;
LABEL_12:
      v4 = (DWMInputTarget *)(v8 & -(__int64)(v4 != 0LL));
LABEL_13:
      *a3 = v4;
      return 0LL;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v10 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      goto LABEL_13;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 32;
      goto LABEL_12;
    }
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data4;
    if ( !v12 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 40;
      goto LABEL_12;
    }
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4;
    if ( !v13 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 48;
      goto LABEL_12;
    }
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v14 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)v4 + 56;
      goto LABEL_12;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x80070057LL,
      v15);
    return 2147942487LL;
  }
}
