/*
 * XREFs of _invalid_parameter @ 0x180122258
 * Callers:
 *     _lfind @ 0x1801239E0 (_lfind.c)
 *     _snprintf @ 0x180123B80 (_snprintf.c)
 *     _snwprintf @ 0x180123C40 (_snwprintf.c)
 *     _splitpath_helper @ 0x180123DC0 (_splitpath_helper.c)
 *     _strlwr_s @ 0x1801240D0 (_strlwr_s.c)
 *     _strupr @ 0x1801241B0 (_strupr.c)
 *     _strupr_s @ 0x180124200 (_strupr_s.c)
 *     swprintf @ 0x180124270 (swprintf.c)
 *     _vscprintf_helper @ 0x18012435C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x1801243C0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801244A4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18012457C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18012465C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x1801247B0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180124810 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180124900 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180124990 (_wcsset_s.c)
 *     wcstoxq @ 0x180124A54 (wcstoxq.c)
 *     _wcsupr_s @ 0x180124CF0 (_wcsupr_s.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     bsearch_s @ 0x180125920 (bsearch_s.c)
 *     qsort @ 0x1801276C0 (qsort.c)
 *     qsort_s @ 0x180127A80 (qsort_s.c)
 *     sprintf @ 0x180127E70 (sprintf.c)
 *     vscan_fn @ 0x180128080 (vscan_fn.c)
 *     strtoxlX @ 0x180128804 (strtoxlX.c)
 *     wcstoxlX @ 0x180129A7C (wcstoxlX.c)
 *     strtoxq @ 0x180129F30 (strtoxq.c)
 *     _output_l @ 0x18012A1B0 (_output_l.c)
 *     _woutput_l @ 0x18012AB60 (_woutput_l.c)
 *     _input_l @ 0x18012D4C0 (_input_l.c)
 *     _wctomb_s_l @ 0x18012DDB8 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18012DE90 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18012DFD4 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18012E14C (x64toa_s.c)
 *     xtoa_s @ 0x18012E280 (xtoa_s.c)
 *     x64tow_s @ 0x18012E44C (x64tow_s.c)
 *     xtow_s @ 0x18012E590 (xtow_s.c)
 *     _makepath_s @ 0x18012E6D0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18012E860 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18012E900 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18012E970 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18012EA20 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18012EA60 (_splitpath_s.c)
 *     _strnset_s @ 0x18012ED00 (_strnset_s.c)
 *     _strset_s @ 0x18012ED90 (_strset_s.c)
 *     _wmakepath_s @ 0x18012EDF0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18012EF80 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18012F240 (memcpy_s.c)
 *     memmove_s @ 0x18012F2E0 (memmove_s.c)
 *     vsprintf_s @ 0x18012F370 (vsprintf_s.c)
 *     sscanf_s @ 0x18012F3C0 (sscanf_s.c)
 *     strcat_s @ 0x18012F420 (strcat_s.c)
 *     strcpy_s @ 0x18012F4B0 (strcpy_s.c)
 *     strncat_s @ 0x18012F540 (strncat_s.c)
 *     strncpy_s @ 0x18012F640 (strncpy_s.c)
 *     strtok_s @ 0x18012F740 (strtok_s.c)
 *     vswprintf_s @ 0x18012F8E0 (vswprintf_s.c)
 *     swscanf_s @ 0x18012F940 (swscanf_s.c)
 *     wcscat_s @ 0x18012F9A0 (wcscat_s.c)
 *     wcscpy_s @ 0x18012FA40 (wcscpy_s.c)
 *     wcsncat_s @ 0x18012FAD0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18012FBE0 (wcsncpy_s.c)
 *     wcstok_s @ 0x18012FCF0 (wcstok_s.c)
 *     _output_s @ 0x18012FDF0 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180130698 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180130774 (_soutput_s.c)
 *     _input_s @ 0x180130CD4 (_input_s.c)
 *     _sinput_s @ 0x18013157C (_sinput_s.c)
 *     _swoutput_s @ 0x1801315F4 (_swoutput_s.c)
 *     _woutput_s @ 0x180131728 (_woutput_s.c)
 *     _swinput_s @ 0x1801324B0 (_swinput_s.c)
 *     _winput_s @ 0x180132584 (_winput_s.c)
 *     _fgetwc_nolock @ 0x180132F4C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x180132F98 (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlLookupFunctionEntry @ 0x180076C90 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800D5260 (RtlVirtualUnwind.c)
 *     RtlCaptureContext @ 0x1801226E0 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
