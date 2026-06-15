/*
 * XREFs of ?SignalWorkStarted@CAudioPump@@AEAAXXZ @ 0x14001E9FC
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

void __fastcall CAudioPump::SignalWorkStarted(CAudioPump *this, __int64 a2, int a3)
{
  __int64 v3; // rdx
  int *v5; // rax
  void *v6; // rdx
  int *v7; // rcx
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h] BYREF
  CAudioPump *v10; // [rsp+40h] [rbp-19h] BYREF
  CAudioPump *v11; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-9h] BYREF
  CAudioPump **v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  CAudioPump **v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  int *v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]

  v3 = *((_QWORD *)this + 46);
  *((_BYTE *)this + 74) = 1;
  if ( v3 && v3 < 10000 )
  {
    if ( (byte_1400C4541 & 8) == 0 )
      return;
    v9 = *((unsigned __int8 *)this + 75);
    v8 = *((_DWORD *)this + 61);
    v11 = (CAudioPump *)v3;
    v13 = &v10;
    v5 = &v8;
    v14 = 8;
    v19 = &v11;
    v6 = &AudioCore_Pump_MMBufferingSkippedStart;
    v20 = 8;
    v7 = &v9;
    v10 = this;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 75) )
  {
    RtwqSetLongRunning(*((_DWORD *)this + 60), 1);
    *((_BYTE *)this + 75) = 1;
    if ( (byte_1400C4541 & 8) != 0 )
    {
      v10 = (CAudioPump *)*((_QWORD *)this + 46);
      v9 = *((_DWORD *)this + 61);
      v13 = &v11;
      v5 = &v9;
      v14 = 8;
      v19 = &v10;
      v6 = &AudioCore_Pump_MMBufferingStart;
      v20 = 8;
      v7 = &v8;
      v8 = 1;
      v11 = this;
LABEL_5:
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = v5;
      v17 = 4;
      v23 = 4;
      v22 = v7;
      McGenEventWrite_EtwEventWriteTransfer((_DWORD)v7, (_DWORD)v6, a3, 5, (__int64)v12);
    }
  }
}
