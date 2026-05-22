/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180181E50
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800DD7B8 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800DD8DC (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800DDA20 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x18018274C (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x18018285C (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, unsigned int a2, void **a3, _DWORD *a4)
{
  USHORT v8; // r8
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  USAGE v12; // r9
  const struct std::nothrow_t *v13; // rdx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-69h] BYREF
  void *v15; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-59h] BYREF
  void **v17; // [rsp+58h] [rbp-51h]
  char v18; // [rsp+60h] [rbp-49h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v16 = a2;
  v15 = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v8 = *(_WORD *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, &v16);
  v9 = a2 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
      v12 = 512;
    }
    else
    {
      v12 = 769;
    }
  }
  else
  {
    v12 = 1024;
  }
  v17 = &v15;
  v18 = 1;
  if ( HidP_GetSpecificValueCaps(
         HidP_Feature,
         0x12u,
         v8,
         v12,
         &ValueCaps,
         &ValueCapsLength,
         *(PHIDP_PREPARSED_DATA *)(a1 + 64)) != 1114112 )
  {
    if ( v15 )
      operator delete(v15, v13);
    return 2147943568LL;
  }
  v15 = operator new[](*(unsigned __int16 *)(a1 + 8));
  *(_BYTE *)v15 = ValueCaps.ReportID;
  *a3 = v15;
  *a4 = *(unsigned __int16 *)(a1 + 8);
  return 0LL;
}
