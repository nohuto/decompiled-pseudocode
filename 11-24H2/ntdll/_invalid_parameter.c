/*
 * XREFs of _invalid_parameter @ 0x180120778
 * Callers:
 *     _lfind @ 0x180121F00 (_lfind.c)
 *     _snprintf @ 0x1801220A0 (_snprintf.c)
 *     _snwprintf @ 0x180122160 (_snwprintf.c)
 *     _splitpath_helper @ 0x1801222E0 (_splitpath_helper.c)
 *     _strlwr_s @ 0x1801225F0 (_strlwr_s.c)
 *     _strupr @ 0x1801226D0 (_strupr.c)
 *     _strupr_s @ 0x180122720 (_strupr_s.c)
 *     swprintf @ 0x180122790 (swprintf.c)
 *     _vscprintf_helper @ 0x18012287C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x1801228E0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801229C4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180122A9C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180122B7C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180122CD0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180122D30 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180122E20 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180122EB0 (_wcsset_s.c)
 *     wcstoxq @ 0x180122F74 (wcstoxq.c)
 *     _wcsupr_s @ 0x180123210 (_wcsupr_s.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     bsearch_s @ 0x180123E40 (bsearch_s.c)
 *     qsort @ 0x180125BE0 (qsort.c)
 *     qsort_s @ 0x180125FA0 (qsort_s.c)
 *     sprintf @ 0x180126390 (sprintf.c)
 *     vscan_fn @ 0x1801265A0 (vscan_fn.c)
 *     strtoxlX @ 0x180126D24 (strtoxlX.c)
 *     wcstoxlX @ 0x180127F9C (wcstoxlX.c)
 *     strtoxq @ 0x180128450 (strtoxq.c)
 *     _output_l @ 0x1801286D0 (_output_l.c)
 *     _woutput_l @ 0x180129080 (_woutput_l.c)
 *     _input_l @ 0x18012B9E0 (_input_l.c)
 *     _wctomb_s_l @ 0x18012C2D8 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18012C3B0 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18012C4F4 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18012C66C (x64toa_s.c)
 *     xtoa_s @ 0x18012C7A0 (xtoa_s.c)
 *     x64tow_s @ 0x18012C96C (x64tow_s.c)
 *     xtow_s @ 0x18012CAB0 (xtow_s.c)
 *     _makepath_s @ 0x18012CBF0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18012CD80 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18012CE20 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18012CE90 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18012CF40 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18012CF80 (_splitpath_s.c)
 *     _strnset_s @ 0x18012D220 (_strnset_s.c)
 *     _strset_s @ 0x18012D2B0 (_strset_s.c)
 *     _wmakepath_s @ 0x18012D310 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18012D4A0 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18012D760 (memcpy_s.c)
 *     memmove_s @ 0x18012D800 (memmove_s.c)
 *     vsprintf_s @ 0x18012D890 (vsprintf_s.c)
 *     sscanf_s @ 0x18012D8E0 (sscanf_s.c)
 *     strcat_s @ 0x18012D940 (strcat_s.c)
 *     strcpy_s @ 0x18012D9D0 (strcpy_s.c)
 *     strncat_s @ 0x18012DA60 (strncat_s.c)
 *     strncpy_s @ 0x18012DB60 (strncpy_s.c)
 *     strtok_s @ 0x18012DC60 (strtok_s.c)
 *     vswprintf_s @ 0x18012DE00 (vswprintf_s.c)
 *     swscanf_s @ 0x18012DE60 (swscanf_s.c)
 *     wcscat_s @ 0x18012DEC0 (wcscat_s.c)
 *     wcscpy_s @ 0x18012DF60 (wcscpy_s.c)
 *     wcsncat_s @ 0x18012DFF0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18012E100 (wcsncpy_s.c)
 *     wcstok_s @ 0x18012E210 (wcstok_s.c)
 *     _output_s @ 0x18012E310 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18012EBB8 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18012EC94 (_soutput_s.c)
 *     _input_s @ 0x18012F1F4 (_input_s.c)
 *     _sinput_s @ 0x18012FA9C (_sinput_s.c)
 *     _swoutput_s @ 0x18012FB14 (_swoutput_s.c)
 *     _woutput_s @ 0x18012FC48 (_woutput_s.c)
 *     _swinput_s @ 0x1801309D0 (_swinput_s.c)
 *     _winput_s @ 0x180130AA4 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18013146C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1801314B8 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 invalid_parameter()
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
