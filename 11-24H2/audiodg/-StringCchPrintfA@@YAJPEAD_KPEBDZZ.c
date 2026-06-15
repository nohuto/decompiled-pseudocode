/*
 * XREFs of ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1400337C4
 * Callers:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z @ 0x1400074C0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033290 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     _vsnprintf @ 0x14005A164 (_vsnprintf.c)
 */

__int64 StringCchPrintfA(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return v5;
}
