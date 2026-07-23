/*
 * XREFs of MiLogHotPatchOperation @ 0x1407F3E18
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x14043EDB8 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperation(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        unsigned __int16 *a6,
        int a7,
        int a8)
{
  _UNKNOWN **v8; // rax
  _KPROCESS *Process; // rdi
  __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int8 *v16; // rdx
  int v17; // eax
  unsigned int *v18; // rax
  int v19; // eax
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D8h]
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  int v29; // [rsp+60h] [rbp-A8h] BYREF
  int v30; // [rsp+64h] [rbp-A4h] BYREF
  int v31; // [rsp+68h] [rbp-A0h] BYREF
  int v32; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v33; // [rsp+70h] [rbp-98h] BYREF
  int v34; // [rsp+74h] [rbp-94h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  const CHAR *v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  _BYTE v42[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  int *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  int *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  __int64 v55; // [rsp+138h] [rbp+30h]
  int v56; // [rsp+140h] [rbp+38h] BYREF
  int v57; // [rsp+144h] [rbp+3Ch]
  int *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  _DWORD *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  __int64 v68; // [rsp+198h] [rbp+90h]
  _DWORD v69[2]; // [rsp+1A0h] [rbp+98h] BYREF
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  int *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  __int64 *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+220h] [rbp+118h] BYREF

  v8 = &retaddr;
  v36 = 0LL;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    LOBYTE(v8) = MiFillLogProcessInfo((__int64)&Process[2].ReadyListHead.Blink, &v38, &v36);
    v14 = *(_QWORD *)&qword_140E37658;
    if ( a8 )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u )
      {
        LOBYTE(v8) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL);
        if ( (_BYTE)v8 )
        {
          LODWORD(v35) = (unsigned int)PsGetProcessId(Process);
          p_ProcessId = (unsigned int *)&v35;
          v41 = 4LL;
          tlgCreate1Sz_char((__int64)v42, v36);
          v43 = &v34;
          v16 = (unsigned __int8 *)&byte_1400581B1;
          v34 = a7;
          v45 = &v33;
          v47 = &v32;
          v31 = *(_DWORD *)(a1 + 56);
          v49 = &v31;
          v30 = *(_DWORD *)(a1 + 60);
          v51 = &v30;
          v53 = &v56;
          v55 = *(_QWORD *)(a1 + 48);
          v56 = *(unsigned __int16 *)(a1 + 40);
          v29 = *(_DWORD *)(a1 + 64);
          v58 = &v29;
          v60 = &v28;
          v27 = *a5;
          v62 = &v27;
          v26 = a5[1];
          v64 = &v26;
          v66 = v69;
          v68 = *((_QWORD *)a6 + 1);
          v69[0] = *a6;
          v25 = *(_DWORD *)(a1 + 16);
          v70 = &v25;
          v19 = (*(_DWORD *)(a1 + 68) >> 1) & 1;
          v44 = 4LL;
          ProcessId = v19;
          v18 = &ProcessId;
          v33 = a2;
          v46 = 4LL;
          v32 = a3;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 2LL;
          v57 = 0;
          v28 = a4;
          goto LABEL_9;
        }
      }
    }
    else if ( **(_DWORD **)&qword_140E37658 > 5u )
    {
      LOBYTE(v8) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL);
      if ( (_BYTE)v8 )
      {
        ProcessId = (unsigned int)PsGetProcessId(Process);
        p_ProcessId = &ProcessId;
        v41 = 4LL;
        tlgCreate1Sz_char((__int64)v42, v36);
        v43 = &v25;
        v16 = (unsigned __int8 *)&word_140057F4E;
        v25 = a7;
        v45 = &v26;
        v47 = &v27;
        v28 = *(_DWORD *)(a1 + 56);
        v49 = &v28;
        v29 = *(_DWORD *)(a1 + 60);
        v51 = &v29;
        v53 = &v56;
        v55 = *(_QWORD *)(a1 + 48);
        v56 = *(unsigned __int16 *)(a1 + 40);
        v30 = *(_DWORD *)(a1 + 64);
        v58 = &v30;
        v60 = &v31;
        v32 = *a5;
        v62 = &v32;
        v33 = a5[1];
        v64 = &v33;
        v66 = v69;
        v68 = *((_QWORD *)a6 + 1);
        v69[0] = *a6;
        v34 = *(_DWORD *)(a1 + 16);
        v70 = &v34;
        v17 = (*(_DWORD *)(a1 + 68) >> 1) & 1;
        v44 = 4LL;
        LODWORD(v35) = v17;
        v18 = (unsigned int *)&v35;
        v26 = a2;
        v46 = 4LL;
        v27 = a3;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 2LL;
        v57 = 0;
        v31 = a4;
LABEL_9:
        v72 = v18;
        LOWORD(v23) = WORD2(Process[3].PerProcessorCycleTimes);
        v74 = &v23;
        v37 = 2164260864LL;
        v76 = &v37;
        v59 = 4LL;
        v67 = 2LL;
        v65 = 4LL;
        v63 = 4LL;
        v61 = 4LL;
        v69[1] = 0;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 2LL;
        v77 = 8LL;
        LOBYTE(v8) = tlgWriteEx_EtwWriteEx(v14, v16, v15, 1u, v21, v22, 0x15u, &v39);
      }
    }
  }
  return (char)v8;
}
