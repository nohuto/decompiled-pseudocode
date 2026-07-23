/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x1407F4298
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1407F17A4 (MiApplyHotPatchToDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3738 (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x14043EDB8 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogHotPatchOperationStatus(
        unsigned int a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5)
{
  UNICODE_STRING *p_DestinationString; // rdi
  _KPROCESS *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  _KPROCESS *v11; // r13
  __int64 v12; // r15
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  int v17; // r11d
  _KPROCESS *Process; // r13
  __int64 p_Blink; // rcx
  __int64 v20; // r15
  unsigned int v21; // r9d
  __int64 v22; // r10
  int v23; // r11d
  bool v24; // zf
  int v25; // [rsp+28h] [rbp-E0h]
  int v26; // [rsp+30h] [rbp-D8h]
  ULONG v27; // [rsp+38h] [rbp-D0h]
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v31[12]; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  const CHAR *v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  unsigned int *v41; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-38h]
  unsigned int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  __int64 *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 *Buffer; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  __int64 *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  __int64 *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]

  v32 = __PAIR64__(a2, a1);
  p_DestinationString = a3;
  v34 = 0LL;
  DestinationString = 0LL;
  if ( !*(_QWORD *)&qword_140E37658 )
    return;
  if ( !a3 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    p_DestinationString = &DestinationString;
  }
  if ( a5 )
  {
    if ( a5 == 1 || a5 == 6 )
    {
      if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
        return;
      v46 = 2LL;
      v14 = (char *)&byte_140058099;
      v24 = (_DWORD)v13 == 6;
    }
    else
    {
      if ( a5 != 2 && a5 != 5 )
      {
        if ( a5 != 3 )
        {
          if ( a5 == 4 )
          {
            if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
              return;
            *(_DWORD *)&v31[4] = a4;
            p_ProcessId = (unsigned int *)&v31[4];
            v14 = &byte_14005788F;
            v40 = 4LL;
            v41 = &ProcessId;
            v15 = v13;
            ProcessId = v16;
            v43 = (unsigned int *)&v29;
            v45 = &v48;
            Buffer = (__int64 *)p_DestinationString->Buffer;
            LODWORD(v48) = p_DestinationString->Length;
            v33 = 2164260864LL;
            v49 = &v33;
            v27 = 8;
            v42 = 4LL;
            v29 = a2;
            v44 = 4LL;
            v46 = 2LL;
            HIDWORD(v48) = v17;
            v50 = 8LL;
          }
          else
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
            if ( a5 == 7 )
            {
              MiFillLogProcessInfo(p_Blink, &v35, &v34);
              v20 = *(_QWORD *)&qword_140E37658;
              if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
                return;
              *(_DWORD *)&v31[4] = (unsigned int)PsGetProcessId(Process);
              v40 = 4LL;
              p_ProcessId = (unsigned int *)&v31[4];
              tlgCreate1Sz_char((__int64)&v41, v34);
              ProcessId = a4;
              v43 = &ProcessId;
              v14 = (char *)word_14005764A;
              v29 = v32;
              v45 = (__int64 *)&v29;
              *(_DWORD *)v31 = HIDWORD(v32);
              Buffer = (__int64 *)v31;
              v49 = &v52;
              v51 = (__int64 *)p_DestinationString->Buffer;
              LODWORD(v52) = p_DestinationString->Length;
              LOWORD(v28) = WORD2(Process[3].PerProcessorCycleTimes);
              v53 = (__int64 *)&v28;
              v33 = 2164260864LL;
              v55 = &v33;
              v27 = 11;
              v44 = 4LL;
              v48 = 4LL;
              v50 = 2LL;
              HIDWORD(v52) = v13;
              v54 = 2LL;
              v56 = 8LL;
            }
            else
            {
              MiFillLogProcessInfo(p_Blink, &v35, &v34);
              v20 = *(_QWORD *)&qword_140E37658;
              if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
                return;
              *(_DWORD *)&v31[4] = (unsigned int)PsGetProcessId(Process);
              p_ProcessId = (unsigned int *)&v31[4];
              v40 = 4LL;
              tlgCreate1Sz_char((__int64)&v41, v34);
              v14 = &byte_14005759F;
              ProcessId = v32;
              v43 = &ProcessId;
              v29 = HIDWORD(v32);
              v45 = (__int64 *)&v29;
              Buffer = &v33;
              v49 = (__int64 *)v31;
              LOWORD(v28) = WORD2(Process[3].PerProcessorCycleTimes);
              v51 = (__int64 *)&v28;
              v36 = 2164260864LL;
              v53 = &v36;
              v27 = 10;
              v44 = 4LL;
              v33 = (__int64)p_DestinationString;
              v48 = 8LL;
              *(_DWORD *)v31 = a4;
              v50 = 4LL;
              v52 = 2LL;
              v54 = 8LL;
            }
            v46 = 4LL;
            v15 = v20;
          }
LABEL_36:
          tlgWriteEx_EtwWriteEx(v15, (unsigned __int8 *)v14, v13, 1u, v25, v26, v27, v38);
          return;
        }
        v11 = KeGetCurrentThread()->ApcState.Process;
        MiFillLogProcessInfo((__int64)&v11[2].ReadyListHead.Blink, &v35, &v34);
        v12 = *(_QWORD *)&qword_140E37658;
        if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
          return;
        ProcessId = (unsigned int)PsGetProcessId(v11);
        p_ProcessId = &ProcessId;
        v40 = 4LL;
        tlgCreate1Sz_char((__int64)&v41, v34);
        v29 = a4;
        v43 = (unsigned int *)&v29;
        v14 = &byte_1400577E7;
        v15 = v12;
        *(_QWORD *)v31 = v32;
        v45 = (__int64 *)v31;
        Buffer = (__int64 *)&v31[4];
        v49 = &v36;
        LOWORD(v28) = WORD2(v11[3].PerProcessorCycleTimes);
        v51 = (__int64 *)&v28;
        v33 = 2164260864LL;
        v53 = &v33;
        v27 = 10;
        v46 = 4LL;
        v48 = 4LL;
        v36 = (__int64)p_DestinationString;
        v50 = 8LL;
        v52 = 2LL;
        v54 = 8LL;
LABEL_35:
        v44 = 4LL;
        goto LABEL_36;
      }
      if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
        return;
      v46 = 2LL;
      v14 = (char *)word_140058122;
      v24 = (_DWORD)v13 == 5;
    }
    v29 = a2;
    p_ProcessId = (unsigned int *)&v31[4];
    v41 = &ProcessId;
    v42 = 4LL;
    ProcessId = v21;
    v40 = 4LL;
    v43 = (unsigned int *)&v29;
    v15 = v22;
    *(_DWORD *)&v31[4] = a4;
    v45 = &v48;
    LOBYTE(v28) = v24;
    Buffer = (__int64 *)p_DestinationString->Buffer;
    LODWORD(v48) = p_DestinationString->Length;
    v49 = (__int64 *)&v28;
    v33 = 2164260864LL;
    v51 = &v33;
    v27 = 9;
    v52 = 8LL;
    v50 = 1LL;
    HIDWORD(v48) = v23;
    goto LABEL_35;
  }
  v8 = KeGetCurrentThread()->ApcState.Process;
  MiFillLogProcessInfo((__int64)&v8[2].ReadyListHead.Blink, &v35, &v34);
  v9 = *(_QWORD *)&qword_140E37658;
  if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
  {
    HIDWORD(v32) = (unsigned int)PsGetProcessId(v8);
    v40 = 4LL;
    p_ProcessId = (unsigned int *)&v32 + 1;
    tlgCreate1Sz_char((__int64)&v41, v34);
    *(_DWORD *)v31 = a4;
    v43 = (unsigned int *)v31;
    v29 = v32;
    v44 = 4LL;
    v45 = (__int64 *)&v29;
    Buffer = (__int64 *)&ProcessId;
    v49 = &v52;
    v51 = (__int64 *)p_DestinationString->Buffer;
    LODWORD(v52) = p_DestinationString->Length;
    LOWORD(v28) = WORD2(v8[3].PerProcessorCycleTimes);
    v53 = (__int64 *)&v28;
    *(_QWORD *)&v31[4] = 2164260864LL;
    v55 = (__int64 *)&v31[4];
    v46 = 4LL;
    ProcessId = a2;
    v48 = 4LL;
    v50 = 2LL;
    HIDWORD(v52) = v10;
    v54 = 2LL;
    v56 = 8LL;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)byte_140058307, v10, v10 + 1, v25, v26, 0xBu, v38);
  }
}
