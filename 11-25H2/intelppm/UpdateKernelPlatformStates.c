/*
 * XREFs of UpdateKernelPlatformStates @ 0x14003FD54
 * Callers:
 *     PepUpdatePlatformStateWorker @ 0x14003A440 (PepUpdatePlatformStateWorker.c)
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140010040 (memmove.c)
 *     memset @ 0x140010340 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400403A0 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x1400405EC (ProcLibTracePlatformIdleStates.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // bp
  unsigned int *v3; // rsi
  unsigned int *v4; // rdi
  int v5; // r13d
  unsigned int v6; // r12d
  PVOID v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Pool2; // rax
  signed __int64 v10; // rbx
  unsigned int *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  size_t v15; // r8
  int v16; // edx
  PVOID v17; // r14
  size_t v18; // rbx
  int v19; // edx
  unsigned int i; // r15d
  __int64 v21; // r8
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned int *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rdx
  char v30; // [rsp+90h] [rbp+18h]

  v30 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019188,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_140019184;
    v8 = (48 * v6 + 51) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_140019184, 1919119952LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v7, (int)(48 * v6 + 48));
      if ( v6 )
      {
        v10 = (_BYTE *)v7 - (_BYTE *)v4;
        v11 = v4 + 16;
        v12 = v6;
        do
        {
          v13 = v8;
          v8 += 8 * v5;
          v14 = (char *)v4 + v13;
          v15 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v14;
          memmove(v14, *(const void **)((char *)v11 + v10 + 24), v15);
          v11 += 12;
          --v12;
        }
        while ( v12 );
        v3 = 0LL;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  v17 = 0LL;
  if ( v4 )
  {
    if ( v2 )
    {
      v18 = (unsigned int)(16 * v5 + 40);
      v3 = (unsigned int *)ExAllocatePool2(256LL, v18, 1919119952LL);
      if ( !v3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            4,
            25,
            (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
        }
        ProcessorNumberFromIndex = -1073741670;
LABEL_36:
        ExFreePoolWithTag(v4, (ULONG)1919119952);
LABEL_26:
        if ( v17 )
          ExFreePoolWithTag(v17, (ULONG)1919119952);
        return (unsigned int)ProcessorNumberFromIndex;
      }
      for ( i = 0; i < v6; ++i )
      {
        memset(v3, 0, v18);
        LOBYTE(v21) = 1;
        *v3 = i;
        v3[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))qword_140019520)(
                    *(_QWORD *)(a1 + 1120),
                    v3,
                    v21) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState(v3);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_24;
          v30 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_140019198,
            0LL);
          v23 = &v4[12 * i + 12];
          v23[2] = v3[5];
          v23[3] = v3[6];
          *((_BYTE *)v23 + 5) = *((_BYTE *)v3 + 16);
          if ( *((_QWORD *)v3 + 1) )
          {
            *((_BYTE *)v23 + 4) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(ULONG *)(*((_QWORD *)v3 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)&v4[12 * i + 12]);
            if ( ProcessorNumberFromIndex < 0 )
            {
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                qword_140019198);
              goto LABEL_24;
            }
          }
          memset(*((void **)v23 + 5), 0, 8LL * v23[4]);
          v24 = v3[7];
          v25 = 0LL;
          for ( v23[4] = v24; (unsigned int)v25 < v23[4]; v25 = (unsigned int)(v25 + 1) )
          {
            v26 = *((_QWORD *)v23 + 5);
            *(_DWORD *)(v26 + 8 * v25) = *(_DWORD *)(*(_QWORD *)&v3[4 * (unsigned int)v25 + 10] + 56LL);
            *(_BYTE *)(v26 + 8 * v25 + 4) = v3[4 * (unsigned int)v25 + 12];
            *(_BYTE *)(v26 + 8 * v25 + 6) = BYTE2(v3[4 * (unsigned int)v25 + 12]);
            *(_BYTE *)(v26 + 8 * v25 + 5) = BYTE1(v3[4 * (unsigned int)v25 + 12]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_140019198);
          v18 = (unsigned int)(16 * v5 + 40);
        }
      }
      if ( v30 )
        goto LABEL_21;
      ProcessorNumberFromIndex = 0;
    }
    else
    {
LABEL_21:
      *((_BYTE *)v4 + 40) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_140019188,
        0LL);
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1400194C8)(v4);
      if ( ProcessorNumberFromIndex < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x1Au,
            (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
            ProcessorNumberFromIndex);
      }
      else
      {
        v17 = Src;
        Src = v4;
        v4 = 0LL;
        ProcLibTracePlatformIdleStates(0LL);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_140019188);
      if ( !v3 )
      {
LABEL_25:
        if ( !v4 )
          goto LABEL_26;
        goto LABEL_36;
      }
    }
LABEL_24:
    ExFreePoolWithTag(v3, (ULONG)1919119952);
    goto LABEL_25;
  }
  ProcessorNumberFromIndex = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      4,
      24,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
