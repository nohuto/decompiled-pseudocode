/*
 * XREFs of ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x14014849C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073240 (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler((__int64)this, 90LL);
  *(_QWORD *)v1 = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  *(_BYTE *)(v1 + 376) = 1;
  *(_QWORD *)(v1 + 400) = 12LL;
  *(_DWORD *)(v1 + 16) |= 0x1DFFFFC0u;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 156) = 1065353216;
  *(_DWORD *)(v1 + 168) = 1065353216;
  *(_DWORD *)(v1 + 160) = 1065353216;
  *(_DWORD *)(v1 + 164) = 1065353216;
  *(_DWORD *)(v1 + 148) = 1064514355;
  *(_DWORD *)(v1 + 152) = 1064514355;
  result = v1;
  *(_DWORD *)(v1 + 188) = 1065101558;
  *(_DWORD *)(v1 + 412) = 1117126656;
  *(_DWORD *)(v1 + 416) = 1130430464;
  *(_DWORD *)(v1 + 420) = 1104674816;
  *(_DWORD *)(v1 + 424) = 1123680256;
  *(_DWORD *)(v1 + 428) = 1102053376;
  *(_DWORD *)(v1 + 432) = 1106247680;
  *(_DWORD *)(v1 + 436) = 1177280512;
  *(_DWORD *)(v1 + 440) = 1028443341;
  *(_DWORD *)(v1 + 444) = 1084227584;
  return result;
}
