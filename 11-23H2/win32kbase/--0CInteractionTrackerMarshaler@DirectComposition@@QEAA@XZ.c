/*
 * XREFs of ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0227FFC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CInteractionTrackerMarshaler *__fastcall DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  DirectComposition::CInteractionTrackerMarshaler *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 90LL);
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  *((_BYTE *)this + 376) = 1;
  *((_QWORD *)this + 50) = 12LL;
  *((_DWORD *)this + 4) |= 0x1DFFFFC0u;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *((_DWORD *)this + 37) = 1064514355;
  *((_DWORD *)this + 38) = 1064514355;
  result = this;
  *((_DWORD *)this + 47) = 1065101558;
  *((_DWORD *)this + 103) = 1117126656;
  *((_DWORD *)this + 104) = 1130430464;
  *((_DWORD *)this + 105) = 1104674816;
  *((_DWORD *)this + 106) = 1123680256;
  *((_DWORD *)this + 107) = 1102053376;
  *((_DWORD *)this + 108) = 1106247680;
  *((_DWORD *)this + 109) = 1177280512;
  *((_DWORD *)this + 110) = 1028443341;
  *((_DWORD *)this + 111) = 1084227584;
  return result;
}
