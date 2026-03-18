/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14006D1CC
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CEC70 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  char v5; // di
  char v6; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v4 = a4;
  v5 = a3;
  v6 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = a3 | v6;
  if ( (_BYTE)a3 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(this, a2, a3, a4);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = v5;
  *((_QWORD *)this + 12) = 8LL;
  *((_BYTE *)this + 128) = v5;
  *((_QWORD *)this + 19) = 8LL;
  *((_BYTE *)this + 265) = *((_BYTE *)this + 265) & 0xFB | (UserIsCurrentProcessDwm() ? 4 : 0);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 4,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    rimUserMemAllocNodeFree,
    0LL);
  *((_BYTE *)this + 536) = v5;
  *((_QWORD *)this + 70) = 8LL;
  *((_BYTE *)this + 2656) = v5;
  *((_QWORD *)this + 330) = (char *)this + 2632;
  *((_QWORD *)this + 329) = (char *)this + 2632;
  *((_DWORD *)this + 688) = v4;
  InitializeSListHead((PSLIST_HEADER)this + 13);
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  return this;
}
