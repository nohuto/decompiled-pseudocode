/*
 * XREFs of ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800CBA3C
 * Callers:
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800CB914 (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$basic_string@GU.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEBGAEA_K@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAPEBGAEA_K@Z @ 0x1800CB57C (--$_Emplace_reallocate@AEAPEBGAEA_K@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Emplace_reallocate@PEAG@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAPEAG@Z @ 0x1800CB684 (--$_Emplace_reallocate@PEAG@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1800CB7F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ?GetDeviceInterfaceProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x1800CBDF8 (-GetDeviceInterfaceProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Details::GetDeviceStringProperty(__int64 a1, Adapters *a2, __int64 a3, __int64 *a4)
{
  CONFIGRET DeviceInterfaceProperty; // eax
  const char *v7; // r9
  signed int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  ULONG v11; // r15d
  size_t v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // rbx
  const struct std::nothrow_t *v15; // rdx
  CONFIGRET v16; // eax
  signed int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  unsigned int v19; // esi
  const struct std::nothrow_t *v20; // rdx
  size_t v21; // rsi
  unsigned int *v22; // [rsp+28h] [rbp-50h]
  unsigned int *v23; // [rsp+28h] [rbp-50h]
  size_t Size; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v26; // [rsp+40h] [rbp-38h] BYREF
  _WORD *v27[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+84h] [rbp+Ch]
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+94h] [rbp+1Ch]

  v32 = HIDWORD(a3);
  v30 = HIDWORD(a1);
  v31 = 0;
  v29 = 0;
  DeviceInterfaceProperty = Adapters::GetDeviceInterfaceProperty(
                              a2,
                              (void *)&DEVPKEY_Device_InstanceId,
                              (const struct _DEVPROPKEY *)&v31,
                              0LL,
                              &v29,
                              v22);
  if ( DeviceInterfaceProperty && DeviceInterfaceProperty != 26 )
  {
    if ( DeviceInterfaceProperty == 37 )
      return 1LL;
    v8 = CM_MapCrToWin32Err(DeviceInterfaceProperty, 0x507u);
    v9 = v8;
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    if ( v9 == -2147023728 )
      return 2147943568LL;
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
        (const char *)v9);
      return v9;
    }
  }
  try
  {
    if ( v29 > 2 )
    {
      v11 = v29 >> 1;
      LODWORD(Size) = 2 * (v29 >> 1);
      v12 = 2LL * (v29 >> 1);
      if ( !is_mul_ok(v29 >> 1, 2uLL) )
        v12 = -1LL;
      v13 = (unsigned int *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      v25 = v13;
      if ( !v13 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
          (const char *)0x8007000ELL);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v15);
        return 2147942414LL;
      }
      memset_0(v13, 0, (unsigned int)Size);
      v16 = Adapters::GetDeviceInterfaceProperty(
              a2,
              (void *)&DEVPKEY_Device_InstanceId,
              (const struct _DEVPROPKEY *)&v31,
              v14,
              (PULONG)&Size,
              v23);
      v17 = CM_MapCrToWin32Err(v16, 0x507u);
      v19 = v17;
      if ( v17 > 0 )
        v19 = (unsigned __int16)v17 | 0x80070000;
      if ( v19 == -2147023728 )
      {
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v18);
        return 2147943568LL;
      }
      if ( (v19 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
          (const char *)v19);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v20);
        return v19;
      }
      if ( v31 == 18 )
      {
        v27[0] = v14;
        if ( a4[1] == a4[2] )
        {
          std::vector<std::wstring>::_Emplace_reallocate<unsigned short *>(a4, a4[1], v27);
        }
        else
        {
          std::wstring::wstring(a4[1], v14);
          a4[1] += 32LL;
        }
      }
      else if ( v31 == 8210 )
      {
        while ( 1 )
        {
          v26 = v14;
          if ( !v11 || !*(_WORD *)v14 )
            break;
          v21 = wcsnlen((const wchar_t *)v14, v11);
          v27[0] = (_WORD *)v21;
          if ( a4[1] == a4[2] )
          {
            std::vector<std::wstring>::_Emplace_reallocate<unsigned short const * &,unsigned __int64 &>(
              a4,
              a4[1],
              &v26,
              v27);
            v14 = v26;
            v21 = (size_t)v27[0];
          }
          else
          {
            std::wstring::wstring(a4[1], v14, v21);
            a4[1] += 32LL;
          }
          v14 = (unsigned int *)((char *)v14 + 2 * v21 + 2);
          v11 += -1 - v21;
        }
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v18);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\"
                                         "lib\\details.cpp",
                           v7);
  }
  return result;
}
