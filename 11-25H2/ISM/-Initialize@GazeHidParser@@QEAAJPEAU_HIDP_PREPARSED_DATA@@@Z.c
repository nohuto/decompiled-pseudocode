/*
 * XREFs of ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1801826A0
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800DD5D8 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@W4GazeProperty@@G@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@_N@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x180181C60 (--$_Emplace@W4GazeProperty@@G@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x180181FA8 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 */

__int64 __fastcall GazeHidParser::Initialize(PHIDP_CAPS Capabilities, PHIDP_PREPARSED_DATA PreparsedData)
{
  NTSTATUS Caps; // eax
  unsigned int v5; // ebx
  int CollectionForProperty; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&Capabilities[1].Usage = PreparsedData;
  Caps = HidP_GetCaps(PreparsedData, Capabilities);
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x18,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)Caps);
  v5 = 0;
  while ( v5 < 0xB )
  {
    v9 = 0;
    CollectionForProperty = GazeHidParser::FindCollectionForProperty((__int64)Capabilities, v5, &v9);
    try
    {
      if ( CollectionForProperty >= 0 )
      {
        v10 = v5;
        std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Emplace<enum GazeProperty,unsigned short>(
          (__int64 *)&Capabilities[1].FeatureReportByteLength,
          (__int64)v7,
          &v10,
          &v9);
      }
      ++v5;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  return 0LL;
}
