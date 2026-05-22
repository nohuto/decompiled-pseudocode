/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048730
 * Callers:
 *     ?QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A33D0 (-QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A33E0 (-QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A33F0 (-QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        ContextualProcessorBuffer *this,
        const struct _GUID *a2,
        ContextualProcessorBuffer **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  ContextualProcessorBuffer *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v5 )
      goto LABEL_12;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v8 = (ContextualProcessorBuffer *)((char *)this + 16);
      goto LABEL_13;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v8 = this;
LABEL_15:
      *a3 = v8;
      return 0LL;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v10 )
    {
LABEL_12:
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v8 = (ContextualProcessorBuffer *)((char *)this + 8);
      goto LABEL_13;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v8 = (ContextualProcessorBuffer *)((char *)this + 24);
LABEL_13:
      if ( !this )
        v8 = 0LL;
      goto LABEL_15;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)0x80070057LL,
      v12);
    return 2147942487LL;
  }
}
