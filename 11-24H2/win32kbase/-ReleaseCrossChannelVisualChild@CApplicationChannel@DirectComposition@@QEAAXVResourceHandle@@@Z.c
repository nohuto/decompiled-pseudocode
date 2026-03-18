/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14014E60C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x14004BFC8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x14006CDFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)((char *)a1 + 272);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 34); i != v3; i = (_QWORD *)*i )
  {
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(i - 47) + 352LL))(i - 47, a2);
    if ( (_BYTE)result )
      return (_UNKNOWN **)DirectComposition::CApplicationChannel::ReleaseResource(
                            a1,
                            (struct DirectComposition::CResourceMarshaler *)(i - 47));
  }
  return result;
}
