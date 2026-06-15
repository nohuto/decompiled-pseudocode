/*
 * XREFs of ?GetAudioHistoryReader@?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z @ 0x140081AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEA_KAEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAH1AEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x140081824 (--$MakeAndInitialize@V-$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 */

__int64 __fastcall CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetAudioHistoryReader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6 = a2;
  return Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,int &,unsigned __int64 &,VolatileControlData_V0 * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
           a5,
           &v6,
           &v7,
           &v8,
           (__int64 *)(a1 + 24),
           (__int64 *)(a1 + 32),
           (__int64 *)(a1 + 16),
           (_DWORD *)(a1 + 44),
           (_DWORD *)(a1 + 48),
           (_DWORD *)(a1 + 52),
           (__int64 *)(a1 + 56));
}
