/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3430
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3550 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3560 (-QueryInterface@OneCoreUAPInputHost@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3570 (-QueryInterface@OneCoreUAPInputHost@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(
        OneCoreUAPInputHost *this,
        const struct _GUID *a2,
        OneCoreUAPInputHost **a3)
{
  OneCoreUAPInputHost *v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)v4 + 32;
LABEL_19:
    v4 = (OneCoreUAPInputHost *)(v7 & -(__int64)(v4 != 0LL));
    goto LABEL_20;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
LABEL_20:
    *a3 = v4;
    return 0LL;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
  if ( !v9 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)v4 + 8;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b475ea0e_60ae_4626_a1ff_4a68aae4e3c2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b475ea0e_60ae_4626_a1ff_4a68aae4e3c2.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b475ea0e_60ae_4626_a1ff_4a68aae4e3c2.Data4;
  if ( !v10 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)v4 + 24;
    goto LABEL_19;
  }
  return 2147500034LL;
}
