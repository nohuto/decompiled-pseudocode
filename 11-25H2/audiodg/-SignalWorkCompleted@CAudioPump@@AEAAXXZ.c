/*
 * XREFs of ?SignalWorkCompleted@CAudioPump@@AEAAXXZ @ 0x140021280
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F680 (-SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

void __fastcall CAudioPump::SignalWorkCompleted(CAudioPump *this, __int64 a2, int a3)
{
  bool v4; // zf
  CAudioPump *v5; // rax
  void *v6; // rdx
  int *v7; // rax
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h] BYREF
  CAudioPump *v10; // [rsp+40h] [rbp-19h] BYREF
  CAudioPump *v11; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-9h] BYREF
  CAudioPump **v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  CAudioPump **v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  int *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  if ( *((_BYTE *)this + 74) )
  {
    v4 = *((_BYTE *)this + 75) == 0;
    v5 = (CAudioPump *)*((_QWORD *)this + 45);
    *((_QWORD *)this + 46) = v5;
    *((_BYTE *)this + 74) = 0;
    if ( v4 )
    {
      if ( (byte_1400C45C1 & 8) == 0 )
        goto LABEL_6;
      v10 = v5;
      v6 = &AudioCore_Pump_MMBufferingSkippedStop;
      v9 = *((_DWORD *)this + 61);
      v13 = &v11;
      v15 = &v9;
      v17 = &v10;
      v7 = &v8;
      v8 = 0;
      v11 = this;
    }
    else
    {
      RtwqSetLongRunning(*((_DWORD *)this + 60), 0);
      *((_BYTE *)this + 75) = 0;
      if ( (byte_1400C45C1 & 8) == 0 )
      {
LABEL_6:
        if ( !*((_BYTE *)this + 75) )
          CAudioPump::SetDeadlineForNextProcessingPass(this);
        return;
      }
      v6 = &AudioCore_Pump_MMBufferingStop;
      v11 = (CAudioPump *)*((_QWORD *)this + 46);
      v8 = *((_DWORD *)this + 61);
      v13 = &v10;
      v15 = &v8;
      v17 = &v11;
      v7 = &v9;
      v9 = 0;
      v10 = this;
    }
    v19 = v7;
    v14 = 8LL;
    v16 = 4LL;
    v18 = 8LL;
    v20 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(0, (_DWORD)v6, a3, 5, (__int64)v12);
    goto LABEL_6;
  }
}
