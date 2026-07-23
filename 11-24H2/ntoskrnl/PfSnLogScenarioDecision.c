/*
 * XREFs of PfSnLogScenarioDecision @ 0x140948A6C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 */

char __fastcall PfSnLogScenarioDecision(
        __int64 BugCheckParameter1,
        const wchar_t *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi
  char v12; // r15
  char v13; // r12
  int ProcessTelemetryInfo; // eax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  char v23; // [rsp+32h] [rbp-CEh] BYREF
  char v24; // [rsp+33h] [rbp-CDh] BYREF
  char v25; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  char v33[4]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+74h] [rbp-8Ch]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int16 v36; // [rsp+A8h] [rbp-58h]
  __int16 v37; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  const wchar_t *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  const wchar_t *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int16 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+160h] [rbp+60h] BYREF
  __int128 *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  char v59[16]; // [rsp+190h] [rbp+90h] BYREF
  char *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  char *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  char *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  int *v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  __int64 *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  int v72; // [rsp+270h] [rbp+170h] BYREF

  v72 = a3;
  v8 = a8;
  memset_0(v33, 0, 0x60uLL);
  v12 = a6;
  v13 = a5;
  v26 = 0;
  v27 = 0;
  v21 = 0;
  v22 = 0;
  v28 = 0;
  if ( qword_140E67258 && EtwEventEnabled(qword_140E67258, &PfSnEvt_ScenarioDecision_Info) )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a2[v16] );
    v26 = v16;
    UserData.Ptr = (ULONGLONG)&v26;
    v40 = 2 * (unsigned __int16)v16;
    v42 = a2 + 30;
    v44 = &v72;
    v46 = &v27;
    v48 = &v21;
    v50 = &v22;
    v52 = &a7;
    *(_QWORD *)&UserData.Size = 2LL;
    v39 = a2;
    v41 = 0;
    v43 = 4LL;
    v45 = 4LL;
    v27 = a4;
    v47 = 2LL;
    v21 = v13;
    v49 = 1LL;
    v22 = v12;
    v51 = 1LL;
    v53 = 4LL;
    if ( v8 < 0 )
      LODWORD(v17) = -(v8 != -1) - 1;
    else
      v17 = v8 / 0x989680uLL;
    v28 = v17;
    v55 = 4LL;
    v54 = &v28;
    EtwWrite(qword_140E67258, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
  }
  ProcessTelemetryInfo = EtwQueryProcessTelemetryInfo(BugCheckParameter1, v33, 0x60uLL, 0, 0LL);
  v15 = 0;
  if ( ProcessTelemetryInfo != -2147483643 )
    v15 = ProcessTelemetryInfo;
  v32 = 0LL;
  if ( v15 >= 0 )
  {
    LODWORD(v32) = v34;
    WORD2(v32) = v36;
    WORD3(v32) = v37;
    LOBYTE(ProcessTelemetryInfo) = v35;
    *((_QWORD *)&v32 + 1) = v35;
  }
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    if ( (byte_140E074C8 & 1) == 0 || (LOBYTE(ProcessTelemetryInfo) = 1, (qword_140E074D0 & 1) != qword_140E074D0) )
      LOBYTE(ProcessTelemetryInfo) = 0;
    if ( (_BYTE)ProcessTelemetryInfo )
    {
      v58 = 16LL;
      v57 = &v32;
      tlgCreate1Sz_wchar_t((__int64)v59, a2);
      v60 = &v23;
      v23 = v72;
      v62 = &v29;
      v61 = v18;
      v64 = &v24;
      v65 = v18;
      v66 = &v25;
      v30 = a7;
      v68 = &v30;
      v70 = &v31;
      v67 = v18;
      v29 = a4;
      v63 = v19;
      v24 = v12;
      v25 = v13;
      v69 = v19;
      v31 = v8;
      v71 = 8LL;
      LOBYTE(ProcessTelemetryInfo) = tlgWriteTransfer_EtwWriteTransfer(
                                       (__int64)&dword_140E074B8,
                                       (unsigned __int8 *)byte_1400487A9,
                                       0LL,
                                       0LL,
                                       0xAu,
                                       &v56);
    }
  }
  return ProcessTelemetryInfo;
}
