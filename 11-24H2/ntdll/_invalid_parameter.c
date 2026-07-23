/*
 * XREFs of _invalid_parameter @ 0x18011E9A8
 * Callers:
 *     _lfind @ 0x180120130 (_lfind.c)
 *     _snprintf @ 0x1801202D0 (_snprintf.c)
 *     _snwprintf @ 0x180120390 (_snwprintf.c)
 *     _splitpath_helper @ 0x180120510 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180120820 (_strlwr_s.c)
 *     _strupr @ 0x180120900 (_strupr.c)
 *     _strupr_s @ 0x180120950 (_strupr_s.c)
 *     swprintf @ 0x1801209C0 (swprintf.c)
 *     _vscprintf_helper @ 0x180120AAC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x180120B10 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180120BF4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180120CCC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180120DAC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180120F00 (_wcslwr.c)
 *     _wcslwr_s @ 0x180120F60 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180121050 (_wcsnset_s.c)
 *     _wcsset_s @ 0x1801210E0 (_wcsset_s.c)
 *     wcstoxq @ 0x1801211A4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180121440 (_wcsupr_s.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 *     bsearch_s @ 0x180122070 (bsearch_s.c)
 *     qsort @ 0x180123E10 (qsort.c)
 *     qsort_s @ 0x1801241D0 (qsort_s.c)
 *     sprintf @ 0x1801245C0 (sprintf.c)
 *     vscan_fn @ 0x1801247D0 (vscan_fn.c)
 *     strtoxlX @ 0x180124F54 (strtoxlX.c)
 *     wcstoxlX @ 0x1801261CC (wcstoxlX.c)
 *     strtoxq @ 0x180126680 (strtoxq.c)
 *     _output_l @ 0x180126900 (_output_l.c)
 *     _woutput_l @ 0x1801272B0 (_woutput_l.c)
 *     _input_l @ 0x180129C10 (_input_l.c)
 *     _wctomb_s_l @ 0x18012A508 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18012A5E0 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18012A724 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18012A89C (x64toa_s.c)
 *     xtoa_s @ 0x18012A9D0 (xtoa_s.c)
 *     x64tow_s @ 0x18012AB9C (x64tow_s.c)
 *     xtow_s @ 0x18012ACE0 (xtow_s.c)
 *     _makepath_s @ 0x18012AE20 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18012AFB0 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18012B050 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18012B0C0 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18012B170 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18012B1B0 (_splitpath_s.c)
 *     _strnset_s @ 0x18012B450 (_strnset_s.c)
 *     _strset_s @ 0x18012B4E0 (_strset_s.c)
 *     _wmakepath_s @ 0x18012B540 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18012B6D0 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18012B990 (memcpy_s.c)
 *     memmove_s @ 0x18012BA30 (memmove_s.c)
 *     vsprintf_s @ 0x18012BAC0 (vsprintf_s.c)
 *     sscanf_s @ 0x18012BB10 (sscanf_s.c)
 *     strcat_s @ 0x18012BB70 (strcat_s.c)
 *     strcpy_s @ 0x18012BC00 (strcpy_s.c)
 *     strncat_s @ 0x18012BC90 (strncat_s.c)
 *     strncpy_s @ 0x18012BD90 (strncpy_s.c)
 *     strtok_s @ 0x18012BE90 (strtok_s.c)
 *     vswprintf_s @ 0x18012C030 (vswprintf_s.c)
 *     swscanf_s @ 0x18012C090 (swscanf_s.c)
 *     wcscat_s @ 0x18012C0F0 (wcscat_s.c)
 *     wcscpy_s @ 0x18012C190 (wcscpy_s.c)
 *     wcsncat_s @ 0x18012C220 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18012C330 (wcsncpy_s.c)
 *     wcstok_s @ 0x18012C440 (wcstok_s.c)
 *     _output_s @ 0x18012C540 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18012CDE8 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18012CEC4 (_soutput_s.c)
 *     _input_s @ 0x18012D424 (_input_s.c)
 *     _sinput_s @ 0x18012DCCC (_sinput_s.c)
 *     _swoutput_s @ 0x18012DD44 (_swoutput_s.c)
 *     _woutput_s @ 0x18012DE78 (_woutput_s.c)
 *     _swinput_s @ 0x18012EC00 (_swinput_s.c)
 *     _winput_s @ 0x18012ECD4 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18012F69C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18012F6E8 (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlLookupFunctionEntry @ 0x180041B10 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180045620 (RtlVirtualUnwind.c)
 *     RtlCaptureContext @ 0x18011EE30 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-B0h] BYREF
  int v6[4]; // [rsp+60h] [rbp-A0h] BYREF
  DWORD64 v7; // [rsp+70h] [rbp-90h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  DWORD64 retaddr; // [rsp+5E8h] [rbp+4E8h] BYREF

  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  memset_thunk_772440563353939046(v6, 0, 0x98uLL);
  v7 = retaddr;
  v6[0] = -1073740777;
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
