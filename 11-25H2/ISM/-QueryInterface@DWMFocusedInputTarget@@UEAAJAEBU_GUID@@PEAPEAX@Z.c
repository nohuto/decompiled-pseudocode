/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800632D0
 * Callers:
 *     ?QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199010 (-QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199020 (-QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199030 (-QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199040 (-QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199050 (-QueryInterface@DWMFocusedInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        DWMFocusedInputTarget *this,
        const struct _GUID *a2,
        DWMFocusedInputTarget **a3)
{
  DWMFocusedInputTarget *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 16;
LABEL_6:
      v4 = (DWMFocusedInputTarget *)(v6 & -(__int64)(v4 != 0LL));
LABEL_7:
      *a3 = v4;
      return 0LL;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
    if ( !v8 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 24;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v9 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      goto LABEL_7;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4;
    if ( !v10 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 8;
      goto LABEL_6;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 32;
      goto LABEL_6;
    }
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v12 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)v4 + 40;
      goto LABEL_6;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
      (const char *)0x80070057LL,
      v13);
    return 2147942487LL;
  }
}
