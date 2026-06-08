/*
 * XREFs of DecodeAcpiIdleState @ 0x140025754
 * Callers:
 *     DecodeAcpi2CState @ 0x1400256FC (DecodeAcpi2CState.c)
 *     RegisterHvLpiStates @ 0x1400276CC (RegisterHvLpiStates.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x14003111C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHiddenIdleStates @ 0x1400354B0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x1400362C4 (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003DADC (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1400063C8 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     AcpiTranslateAccessSize @ 0x14002C6E8 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        char *a6,
        _BYTE *a7,
        __int64 a8)
{
  void (__fastcall *v9)(_QWORD *, __int64, _QWORD *); // r13
  __int64 v12; // r10
  int v13; // ecx
  char v14; // cl
  const char *v15; // rdx
  unsigned __int16 v16; // r9
  int v17; // ecx
  __int64 v18; // xmm1_8
  void *v19; // rdx
  char v20; // r8
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // r9
  int v24; // eax
  unsigned int v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+68h] [rbp-8h]
  int v30; // [rsp+C0h] [rbp+50h]

  v9 = 0LL;
  v26 = -1073741823;
  *a5 = 0LL;
  v12 = a1;
  if ( a3 == -1 )
  {
    v30 = 3;
  }
  else
  {
    v13 = a3;
    if ( a3 >= 3 )
      v13 = 3;
    v30 = v13;
  }
  if ( qword_1400157A8 )
  {
    v26 = qword_1400157A8(v12, a2, a3);
    if ( (v26 & 0x80000000) == 0 )
    {
LABEL_39:
      if ( a8 && HIBYTE(word_140015EE9) )
      {
        *(_QWORD *)(a8 + 24) = HvRequestIdle;
        *(_QWORD *)(a8 + 64) = HvIdleDecode;
        *(_QWORD *)(a8 + 32) = *a5;
        *(_DWORD *)(a8 + 40) = v30;
        *(_QWORD *)(a8 + 56) = *a5;
      }
      return v26;
    }
    v12 = a1;
  }
  v14 = *a2;
  v15 = "LPI";
  if ( a3 != -1 )
    v15 = "C";
  if ( v14 != 127 )
  {
    if ( v14 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        goto LABEL_46;
      }
      return v26;
    }
    if ( a3 < 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 15;
        goto LABEL_46;
      }
      return v26;
    }
    if ( a3 != 2 && a3 != -1 )
    {
      v22 = *((_DWORD *)a2 + 2);
      v27 = *(_QWORD *)a2;
      v28 = v22;
      AcpiTranslateAccessSize(&v27, v15);
      v23 = C3IdleCheck;
      v18 = v27;
      v19 = C3Idle;
      v20 = 0;
      v9 = DecodeRegisterContext;
      v17 = v28;
      *a5 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
      *(_WORD *)a5 = WORD2(v27);
LABEL_33:
      v26 = 0;
      if ( a8 )
      {
        *(_QWORD *)(a8 + 32) = v18;
        *(_DWORD *)(a8 + 40) = v17;
        *(_BYTE *)(a8 + 80) = 1;
        *(_QWORD *)(a8 + 16) = v23;
        *(_QWORD *)(a8 + 24) = v19;
        *(_QWORD *)(a8 + 64) = v9;
      }
      if ( a6 )
        *a6 = v20;
      if ( a7 )
        *a7 = 1;
      goto LABEL_39;
    }
    v24 = *((_DWORD *)a2 + 2);
    v27 = *(_QWORD *)a2;
    v28 = v24;
    AcpiTranslateAccessSize(&v27, v15);
    v19 = C2Idle;
    v18 = v27;
    v20 = 0;
    v21 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
    v17 = v28;
    goto LABEL_31;
  }
  if ( a2[1] == 1 )
  {
    if ( a2[2] != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 13;
LABEL_46:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v16,
          (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids,
          v15);
        return v26;
      }
      return v26;
    }
    v17 = *((_DWORD *)a2 + 2);
    v18 = *(_QWORD *)a2;
    v27 = *(_QWORD *)a2;
    if ( HIDWORD(v27) )
    {
      LODWORD(v27) = 134219777;
      v17 = 0;
      v18 = v27;
    }
    v19 = IoHaltC1Idle;
    v20 = 1;
    v21 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
LABEL_31:
    *a5 = v21;
    v9 = DecodeRegisterContext;
    *(_WORD *)a5 = WORD2(v27);
    goto LABEL_32;
  }
  if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v12 + 280) & 0x20E0000000000LL) != 0 )
  {
    v18 = *(_QWORD *)a2;
    v19 = C1Idle;
    v17 = *((_DWORD *)a2 + 2);
    *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
    v20 = 1;
LABEL_32:
    v23 = 0LL;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 14;
    goto LABEL_46;
  }
  return v26;
}
