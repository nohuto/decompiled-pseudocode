/*
 * XREFs of ??0CStreamInstance@@QEAA@XZ @ 0x14003AC80
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AB64 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CC84 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@P.c)
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamInstance::CStreamInstance(CStreamInstance *this)
{
  CStreamInstance *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 144), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((GUID *)this + 13) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 224), 0, 0);
  result = this;
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
