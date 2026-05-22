/*
 * XREFs of GetRIMDeviceInstancePath @ 0x1800D2764
 * Callers:
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800D2A88 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GetRIMDeviceInstancePath(__int64 a1, __int64 a2, HSTRING *a3)
{
  int v6; // eax
  int v8; // esi
  size_t v9; // rax
  void *v10; // rax
  const WCHAR *v11; // rbx
  unsigned int v12; // ebx
  const struct std::nothrow_t *v13; // rdx
  int v14; // eax
  unsigned int String; // eax
  int v16[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v20; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v16[0] = 4;
  v6 = RIMGetDeviceProperties(a1, a2, v16);
  if ( v6 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x28,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             (const char *)(unsigned int)v6);
  v8 = v16[2];
  v9 = 2LL * (unsigned int)v16[2];
  if ( !is_mul_ok((unsigned int)v16[2], 2uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v10;
  v11 = (const WCHAR *)v10;
  if ( v10 )
  {
    *(_QWORD *)&v17 = v10;
    v14 = RIMGetDeviceProperties(a1, a2, v16);
    if ( v14 >= 0 )
      String = WindowsCreateString(v11, v8 - 1, a3);
    else
      String = wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x30,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
                 (const char *)(unsigned int)v14);
    v12 = String;
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x8007000ELL);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v20, v13);
  return v12;
}
