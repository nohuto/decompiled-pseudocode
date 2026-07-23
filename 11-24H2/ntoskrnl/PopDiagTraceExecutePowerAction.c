/*
 * XREFs of PopDiagTraceExecutePowerAction @ 0x140A96D28
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     PsGetProcessImageFileName @ 0x140443BB0 (PsGetProcessImageFileName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PopDiagTraceExecutePowerAction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        ...)
{
  __int64 ProcessImageFileName; // rax
  const CHAR *v13; // rbx
  __int64 v14; // rcx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  BOOL v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  int v28; // [rsp+68h] [rbp-A0h] BYREF
  BOOL v29; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  int *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  int *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  int *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  int *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  int *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  BOOL *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  int *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  const CHAR *v57; // [rsp+158h] [rbp+50h]
  int v58; // [rsp+160h] [rbp+58h]
  int v59; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+168h] [rbp+60h] BYREF
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  int *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  int *v75; // [rsp+1F8h] [rbp+F0h]
  __int64 v76; // [rsp+200h] [rbp+F8h]
  int *v77; // [rsp+208h] [rbp+100h]
  __int64 v78; // [rsp+210h] [rbp+108h]
  int *v79; // [rsp+218h] [rbp+110h]
  __int64 v80; // [rsp+220h] [rbp+118h]
  int *v81; // [rsp+228h] [rbp+120h]
  __int64 v82; // [rsp+230h] [rbp+128h]
  BOOL *v83; // [rsp+238h] [rbp+130h]
  __int64 v84; // [rsp+240h] [rbp+138h]
  __int64 *v85; // [rsp+248h] [rbp+140h]
  __int64 v86; // [rsp+250h] [rbp+148h]
  char v87[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v88; // [rsp+268h] [rbp+160h]
  __int64 v89; // [rsp+270h] [rbp+168h]
  int v90; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v91; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v92; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v93; // [rsp+2D0h] [rbp+1C8h] BYREF

  v93 = a4;
  v92 = a3;
  v91 = a2;
  v90 = a1;
  v17 = a12 != 0;
  ProcessImageFileName = PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = (const CHAR *)ProcessImageFileName;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(ProcessImageFileName + v14) );
  v16 = v14 + 1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(ProcessImageFileName) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION);
    if ( (_BYTE)ProcessImageFileName )
    {
      UserData.Ptr = (ULONGLONG)&v90;
      *(_QWORD *)&UserData.Size = 4LL;
      v33 = &v91;
      v34 = 4LL;
      v35 = &v92;
      v36 = 4LL;
      v37 = &v93;
      v39 = &a5;
      v41 = &a6;
      v43 = &a7;
      v45 = &a8;
      v47 = &a9;
      v49 = &a10;
      v51 = &a11;
      v53 = &v17;
      v55 = &v16;
      v58 = v16;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v57 = v13;
      v59 = 0;
      LOBYTE(ProcessImageFileName) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION, 0LL, 0xEu, &UserData);
    }
  }
  if ( dword_140E07680 )
  {
    if ( (qword_140E07690 & 0x800000000000LL) != 0 )
    {
      LOBYTE(ProcessImageFileName) = 0;
      if ( (qword_140E07698 & 0x800000000000LL) == qword_140E07698 && (unsigned int)dword_140E07680 > 5 )
      {
        LOBYTE(ProcessImageFileName) = tlgKeywordOn((__int64)&dword_140E07680, 0x800000000000LL);
        if ( (_BYTE)ProcessImageFileName )
        {
          v18 = v90;
          v62 = 4LL;
          v61 = &v18;
          v19 = v91;
          v63 = &v19;
          v20 = v92;
          v65 = &v20;
          v21 = v93;
          v67 = &v21;
          v22 = a5;
          v69 = &v22;
          v23 = a6;
          v71 = &v23;
          v24 = a7;
          v73 = &v24;
          v25 = a8;
          v75 = &v25;
          v26 = a9;
          v77 = &v26;
          v27 = a10;
          v79 = &v27;
          v28 = a11;
          v81 = &v28;
          v29 = v17;
          v83 = &v29;
          LODWORD(v30) = v16;
          v85 = &v30;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          tlgCreate1Sz_char((__int64)v87, v13);
          v31 = 0x1000000LL;
          v88 = &v31;
          v89 = 8LL;
          LOBYTE(ProcessImageFileName) = tlgWriteTransfer_EtwWriteTransfer(
                                           (__int64)&dword_140E07680,
                                           (unsigned __int8 *)&dword_140049C24,
                                           0LL,
                                           0LL,
                                           0x11u,
                                           &v60);
        }
      }
    }
  }
  return ProcessImageFileName;
}
