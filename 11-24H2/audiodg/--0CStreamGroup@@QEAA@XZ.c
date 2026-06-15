/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x14003B11C
 * Callers:
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x14003B0C0 (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400653AC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x14003B2D4 (--0CSubmixImpl@@QEAA@XZ.c)
 */

CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  *((_DWORD *)this + 86) = 0;
  *((_OWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  CSubmixImpl::CSubmixImpl((CStreamGroup *)((char *)this + 24));
  return this;
}
