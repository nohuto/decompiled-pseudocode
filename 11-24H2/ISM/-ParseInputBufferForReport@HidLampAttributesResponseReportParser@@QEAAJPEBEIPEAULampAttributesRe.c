/*
 * XREFs of ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x180085D80
 * Callers:
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800EADC4 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x18009B06C (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z @ 0x1800EEE18 (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::ParseInputBufferForReport(
        HidLampAttributesResponseReportParser *this,
        const unsigned __int8 *a2,
        unsigned int a3,
        struct LampAttributesResponseDeviceReport *a4)
{
  unsigned __int64 v4; // rbp
  int v8; // r14d
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v8 = HidChannelValueInfo::ParseValue((HidLampAttributesResponseReportParser *)((char *)this + 24), a3, a2, (int *)a4);
  if ( v8 < 0 )
  {
    v9 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrespon"
                    "sereportparser.cpp",
      (const char *)(unsigned int)v8,
      v13);
    return (unsigned int)v8;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 96),
         v4,
         a2,
         (int *)a4 + 1);
  if ( v8 < 0 )
  {
    v9 = 182LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 168),
         v4,
         a2,
         (int *)a4 + 2);
  if ( v8 < 0 )
  {
    v9 = 183LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 240),
         v4,
         a2,
         (int *)a4 + 3);
  if ( v8 < 0 )
  {
    v9 = 184LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 312),
         v4,
         a2,
         (int *)a4 + 4);
  if ( v8 < 0 )
  {
    v9 = 185LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 384),
         v4,
         a2,
         (int *)a4 + 5);
  if ( v8 < 0 )
  {
    v9 = 186LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampAttributesResponseReportParser *)((char *)this + 456),
         v4,
         a2,
         (int *)a4 + 6);
  if ( v8 < 0 )
  {
    v9 = 187LL;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 892) )
  {
    v8 = HidChannelValueInfo::ParseValue(
           (HidLampAttributesResponseReportParser *)((char *)this + 528),
           v4,
           a2,
           (int *)a4 + 7);
    if ( v8 < 0 )
    {
      v9 = 192LL;
      goto LABEL_3;
    }
  }
  else
  {
    *((_DWORD *)a4 + 7) = 0;
  }
  if ( *((_BYTE *)this + 888) )
  {
    v8 = HidChannelValueInfo::ParseValue(
           (HidLampAttributesResponseReportParser *)((char *)this + 600),
           v4,
           a2,
           (unsigned __int8 *)a4 + 32);
    if ( v8 < 0 )
    {
      v9 = 202LL;
      goto LABEL_3;
    }
  }
  else
  {
    *((_BYTE *)a4 + 32) = 0;
  }
  if ( *((_BYTE *)this + 889) )
  {
    v8 = HidChannelValueInfo::ParseValue(
           (HidLampAttributesResponseReportParser *)((char *)this + 672),
           v4,
           a2,
           (unsigned __int8 *)a4 + 33);
    if ( v8 < 0 )
    {
      v9 = 211LL;
      goto LABEL_3;
    }
  }
  else
  {
    *((_BYTE *)a4 + 33) = 0;
  }
  if ( *((_BYTE *)this + 890) )
  {
    v8 = HidChannelValueInfo::ParseValue(
           (HidLampAttributesResponseReportParser *)((char *)this + 744),
           v4,
           a2,
           (unsigned __int8 *)a4 + 34);
    if ( v8 < 0 )
    {
      v9 = 220LL;
      goto LABEL_3;
    }
  }
  else
  {
    *((_BYTE *)a4 + 34) = 0;
  }
  if ( *((_BYTE *)this + 891) )
  {
    v11 = HidChannelValueInfo::ParseValue(
            (HidLampAttributesResponseReportParser *)((char *)this + 816),
            v4,
            a2,
            (unsigned __int8 *)a4 + 35);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresp"
                      "onsereportparser.cpp",
        (const char *)(unsigned int)v11,
        v13);
      return v12;
    }
  }
  else
  {
    *((_BYTE *)a4 + 35) = 1;
  }
  return 0LL;
}
