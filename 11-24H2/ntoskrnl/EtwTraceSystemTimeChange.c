/*
 * XREFs of EtwTraceSystemTimeChange @ 0x140B6E734
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1404C3C60 (PoNotifySystemTimeSet.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall EtwTraceSystemTimeChange(_QWORD *a1, _QWORD *a2, int a3, _QWORD *a4, int a5, int a6, int a7)
{
  _KPROCESS *Process; // rbx
  unsigned __int16 *LastRebalanceQpc; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // r11d
  int v18; // ecx
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  __int64 v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h]
  int v41; // [rsp+D4h] [rbp-34h]
  unsigned int *p_ProcessId; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  _QWORD *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  int *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  __int64 *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  int *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  _DWORD *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  __int64 v63; // [rsp+198h] [rbp+90h]
  _DWORD v64[2]; // [rsp+1A0h] [rbp+98h] BYREF
  int *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  __int64 *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  int v75; // [rsp+248h] [rbp+140h] BYREF

  v75 = a3;
  v26[0] = 0x20000LL;
  v26[1] = &word_140B71E80;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessId = (unsigned int)PsGetProcessId(Process);
  LastRebalanceQpc = (unsigned __int16 *)Process[1].LastRebalanceQpc;
  if ( !LastRebalanceQpc || !*LastRebalanceQpc )
    LastRebalanceQpc = (unsigned __int16 *)v26;
  v12 = *a1 - *a2;
  v13 = (unsigned __int64)((unsigned __int128)(v12 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  v31 = v12 / 10000;
  if ( (unsigned int)dword_140E09198 > 5 )
  {
    LOBYTE(v13) = tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL);
    if ( (_BYTE)v13 )
    {
      v27 = v15;
      v53 = &v27;
      v29 = v14;
      v55 = &v28;
      v54 = 8LL;
      v57 = &v29;
      v20 = v75;
      v59 = &v20;
      v61 = v64;
      v63 = *((_QWORD *)LastRebalanceQpc + 1);
      v64[0] = *LastRebalanceQpc;
      v65 = &v21;
      v30 = *a4;
      v67 = &v30;
      v22 = a5;
      v69 = &v22;
      v23 = a6;
      v71 = &v23;
      v24 = a7;
      v73 = &v24;
      v28 = v16;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 2LL;
      v64[1] = 0;
      v21 = v17;
      v66 = 4LL;
      v68 = 8LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      LOBYTE(v13) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E09198,
                      (unsigned __int8 *)&byte_140053A27,
                      0LL,
                      0LL,
                      0xDu,
                      &v52);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Ptr = (ULONGLONG)a1;
    v35 = &v31;
    *(_QWORD *)&UserData.Size = 8LL;
    v37 = &v75;
    v33 = a2;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 4LL;
    v18 = LastRebalanceQpc[1];
    v39 = *((_QWORD *)LastRebalanceQpc + 1);
    p_ProcessId = &ProcessId;
    v46 = &a5;
    v48 = &a6;
    v50 = &a7;
    v40 = v18;
    v41 = 0;
    v43 = 4LL;
    v44 = a4;
    v45 = 8LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    LOBYTE(v13) = EtwWrite(EtwKernelProvRegHandle, &KernelSystemTimeChange, 0LL, 0xAu, &UserData);
  }
  return v13;
}
