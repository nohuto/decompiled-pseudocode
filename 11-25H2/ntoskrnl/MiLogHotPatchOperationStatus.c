/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x1407E3E1C
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1407E1334 (MiApplyHotPatchToDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiFillLogProcessInfo @ 0x140448538 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A1010 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int16 *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  int v17; // r11d
  _KPROCESS *Process; // r13
  __int64 v19; // r15
  unsigned int v20; // r9d
  __int64 v21; // r10
  int v22; // r11d
  bool v23; // zf
  int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D8h]
  ULONG v26; // [rsp+38h] [rbp-D0h]
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v30[12]; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  const CHAR *v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING *v35; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  unsigned int *v40; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-38h]
  unsigned int *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  __int64 *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  unsigned int *Buffer; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  __int64 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  __int64 *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]

  v31 = __PAIR64__(a2, a1);
  p_DestinationString = a3;
  v33 = 0LL;
  DestinationString = 0LL;
  if ( !*(_QWORD *)&qword_140E372D8 )
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
      if ( **(_DWORD **)&qword_140E372D8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
        return;
      v45 = 2LL;
      v14 = (__int16 *)&byte_14005567B;
      v23 = (_DWORD)v13 == 6;
    }
    else
    {
      if ( a5 != 2 && a5 != 5 )
      {
        if ( a5 != 3 )
        {
          if ( a5 == 4 )
          {
            if ( **(_DWORD **)&qword_140E372D8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
              return;
            *(_DWORD *)&v30[4] = a4;
            p_ProcessId = (unsigned int *)&v30[4];
            v14 = (__int16 *)byte_140056263;
            v39 = 4LL;
            v40 = &ProcessId;
            v15 = v13;
            ProcessId = v16;
            v42 = (unsigned int *)&v28;
            v44 = &v47;
            Buffer = (unsigned int *)p_DestinationString->Buffer;
            LODWORD(v47) = p_DestinationString->Length;
            v32 = 2164260864LL;
            v48 = &v32;
            v26 = 8;
            v41 = 4LL;
            v28 = a2;
            v43 = 4LL;
            v45 = 2LL;
            HIDWORD(v47) = v17;
            v49 = 8LL;
          }
          else
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            MiFillLogProcessInfo((__int64)&Process[2].ReadyListHead.Blink, &v34, &v33);
            v19 = *(_QWORD *)&qword_140E372D8;
            if ( **(_DWORD **)&qword_140E372D8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
              return;
            *(_DWORD *)&v30[4] = (unsigned int)PsGetProcessId(Process);
            v39 = 4LL;
            p_ProcessId = (unsigned int *)&v30[4];
            tlgCreate1Sz_char((__int64)&v40, v33);
            ProcessId = a4;
            v42 = &ProcessId;
            v14 = &word_1400561B6;
            v15 = v19;
            v28 = v31;
            v44 = (__int64 *)&v28;
            *(_DWORD *)v30 = HIDWORD(v31);
            Buffer = (unsigned int *)v30;
            v48 = &v51;
            v50 = (__int64 *)p_DestinationString->Buffer;
            LODWORD(v51) = p_DestinationString->Length;
            LOWORD(v27) = WORD2(Process[3].PerProcessorCycleTimes);
            v52 = (__int64 *)&v27;
            v32 = 2164260864LL;
            v54 = &v32;
            v26 = 11;
            v43 = 4LL;
            v45 = 4LL;
            v47 = 4LL;
            v49 = 2LL;
            HIDWORD(v51) = v13;
            v53 = 2LL;
            v55 = 8LL;
          }
LABEL_31:
          tlgWriteEx_EtwWriteEx(v15, (unsigned __int8 *)v14, v13, 1u, v24, v25, v26, v37);
          return;
        }
        v11 = KeGetCurrentThread()->ApcState.Process;
        MiFillLogProcessInfo((__int64)&v11[2].ReadyListHead.Blink, &v34, &v33);
        v12 = *(_QWORD *)&qword_140E372D8;
        if ( **(_DWORD **)&qword_140E372D8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
          return;
        ProcessId = (unsigned int)PsGetProcessId(v11);
        p_ProcessId = &ProcessId;
        v39 = 4LL;
        tlgCreate1Sz_char((__int64)&v40, v33);
        v28 = a4;
        v42 = (unsigned int *)&v28;
        v14 = &word_14005610E;
        v15 = v12;
        *(_QWORD *)v30 = v31;
        v44 = (__int64 *)v30;
        Buffer = (unsigned int *)&v30[4];
        v48 = (__int64 *)&v35;
        LOWORD(v27) = WORD2(v11[3].PerProcessorCycleTimes);
        v50 = (__int64 *)&v27;
        v32 = 2164260864LL;
        v52 = &v32;
        v26 = 10;
        v45 = 4LL;
        v47 = 4LL;
        v35 = p_DestinationString;
        v49 = 8LL;
        v51 = 2LL;
        v53 = 8LL;
LABEL_30:
        v43 = 4LL;
        goto LABEL_31;
      }
      if ( **(_DWORD **)&qword_140E372D8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
        return;
      v45 = 2LL;
      v14 = (__int16 *)&dword_140055704;
      v23 = (_DWORD)v13 == 5;
    }
    v28 = a2;
    p_ProcessId = (unsigned int *)&v30[4];
    v40 = &ProcessId;
    v41 = 4LL;
    ProcessId = v20;
    v39 = 4LL;
    v42 = (unsigned int *)&v28;
    v15 = v21;
    *(_DWORD *)&v30[4] = a4;
    v44 = &v47;
    LOBYTE(v27) = v23;
    Buffer = (unsigned int *)p_DestinationString->Buffer;
    LODWORD(v47) = p_DestinationString->Length;
    v48 = (__int64 *)&v27;
    v32 = 2164260864LL;
    v50 = &v32;
    v26 = 9;
    v51 = 8LL;
    v49 = 1LL;
    HIDWORD(v47) = v22;
    goto LABEL_30;
  }
  v8 = KeGetCurrentThread()->ApcState.Process;
  MiFillLogProcessInfo((__int64)&v8[2].ReadyListHead.Blink, &v34, &v33);
  v9 = *(_QWORD *)&qword_140E372D8;
  if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 0x400000000020LL) )
  {
    HIDWORD(v31) = (unsigned int)PsGetProcessId(v8);
    v39 = 4LL;
    p_ProcessId = (unsigned int *)&v31 + 1;
    tlgCreate1Sz_char((__int64)&v40, v33);
    *(_DWORD *)v30 = a4;
    v42 = (unsigned int *)v30;
    v28 = v31;
    v43 = 4LL;
    v44 = (__int64 *)&v28;
    Buffer = &ProcessId;
    v48 = &v51;
    v50 = (__int64 *)p_DestinationString->Buffer;
    LODWORD(v51) = p_DestinationString->Length;
    LOWORD(v27) = WORD2(v8[3].PerProcessorCycleTimes);
    v52 = (__int64 *)&v27;
    *(_QWORD *)&v30[4] = 2164260864LL;
    v54 = (__int64 *)&v30[4];
    v45 = 4LL;
    ProcessId = a2;
    v47 = 4LL;
    v49 = 2LL;
    HIDWORD(v51) = v10;
    v53 = 2LL;
    v55 = 8LL;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)byte_1400558E9, v10, v10 + 1, v24, v25, 0xBu, v37);
  }
}
