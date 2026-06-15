/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x1400424EC
 * Callers:
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140042474 (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140073794 (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140042534 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  *((_DWORD *)this + 56) = 0;
  *(_OWORD *)((char *)this + 232) = 0LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_BYTE *)this + 272) = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  return this;
}
