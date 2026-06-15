/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x14003B588
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B468 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006CB10 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x14003B5D4 (--0CSubmixImpl@@QEAA@XZ.c)
 */

CProcessSubmix *__fastcall CProcessSubmix::CProcessSubmix(CProcessSubmix *this)
{
  *((_DWORD *)this + 84) = 0;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = 0;
  CSubmixImpl::CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  return this;
}
