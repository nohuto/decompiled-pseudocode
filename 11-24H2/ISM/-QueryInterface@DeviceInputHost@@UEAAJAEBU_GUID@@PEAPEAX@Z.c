/*
 * XREFs of ?QueryInterface@DeviceInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3850
 * Callers:
 *     ?QueryInterface@DeviceInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3910 (-QueryInterface@DeviceInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DeviceInputHost::QueryInterface(DeviceInputHost *this, const struct _GUID *a2, DeviceInputHost **a3)
{
  DeviceInputHost *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DeviceInputHost *)(((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_11;
  }
  return 2147500034LL;
}
