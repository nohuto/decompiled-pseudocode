/*
 * XREFs of ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x140050724
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344AEBU?$_tlgWrapperByVal@$01@@4444@Z @ 0x1400500AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U-$_tlgWrapperByVal@$01@@U2@.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessInput(
        const struct RIMDEV *a1,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+70h] [rbp+27h] BYREF
  int v5; // [rsp+74h] [rbp+2Bh] BYREF
  int v6; // [rsp+78h] [rbp+2Fh] BYREF
  int v7; // [rsp+7Ch] [rbp+33h] BYREF
  int v8; // [rsp+80h] [rbp+37h] BYREF
  int v9; // [rsp+84h] [rbp+3Bh] BYREF
  int v10; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+90h] [rbp+47h] BYREF
  const struct RIMDEV *v12; // [rsp+98h] [rbp+4Fh] BYREF
  __int16 v13; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x40) != 0 && (qword_14029AE48 & 0x40) == qword_14029AE48 )
  {
    v4 = *((_DWORD *)a2 + 18);
    v5 = *((_DWORD *)a2 + 5);
    v6 = *((_DWORD *)a2 + 4);
    v7 = *((_DWORD *)a2 + 3);
    v13 = *((_WORD *)a2 + 3);
    v8 = *((unsigned __int16 *)a2 + 2);
    v9 = *((unsigned __int16 *)a2 + 1);
    v11 = *((_QWORD *)a2 + 7);
    v10 = (unsigned __int8)a3;
    v12 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027F0C7,
      a3,
      a4,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v13,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
