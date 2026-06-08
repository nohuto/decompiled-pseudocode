/*
 * XREFs of UpdateKernelPlatformStates @ 0x140037624
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400284B0 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x140039E00 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14000E480 (memmove.c)
 *     memset @ 0x14000E780 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400324E8 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003E514 (ProcLibTracePlatformIdleStates.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // r14
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  int v5; // r13d
  unsigned int v6; // r15d
  PVOID v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Pool2; // rax
  int v10; // r13d
  unsigned int *v11; // rbp
  signed __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  size_t v16; // r8
  int v17; // edx
  PVOID v18; // rbp
  int ProcessorNumberFromIndex; // ebx
  size_t v20; // rbx
  int v21; // edx
  unsigned int v22; // r12d
  _BYTE *v23; // r14
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r10
  __int64 v27; // rdx
  int v28; // edx
  char v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v32 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1400155D4;
    v33 = dword_1400155D4;
    v8 = (48 * v6 + 51) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_1400155D4, 1919119952LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v7, (int)(48 * v6 + 48));
      if ( v6 )
      {
        v10 = 8 * v5;
        v11 = v3 + 16;
        v12 = (_BYTE *)v7 - (_BYTE *)v3;
        v13 = v6;
        do
        {
          v14 = v8;
          v8 += v10;
          v15 = (char *)v3 + v14;
          v16 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v15;
          memmove(v15, *(const void **)((char *)v11 + v12 + 24), v16);
          v11 += 12;
          --v13;
        }
        while ( v13 );
        v5 = v33;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  v18 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        4,
        24,
        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
    }
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_29:
    *((_BYTE *)v3 + 40) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_140015918)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          3,
          26,
          (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155E8,
        0LL);
      v18 = Src;
      Src = v3;
      v3 = 0LL;
      ProcLibTracePlatformIdleStates(0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400155E8);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
    if ( !v4 )
    {
LABEL_35:
      if ( !v3 )
        goto LABEL_37;
      goto LABEL_36;
    }
LABEL_34:
    ExFreePoolWithTag(v4, (ULONG)1919119952);
    goto LABEL_35;
  }
  v20 = (unsigned int)(16 * v5 + 40);
  v4 = (unsigned int *)ExAllocatePool2(256LL, v20, 1919119952LL);
  if ( v4 )
  {
    v22 = 0;
    if ( v6 )
    {
      v23 = v3 + 15;
      do
      {
        memset(v4, 0, v20);
        LOBYTE(v24) = 1;
        *v4 = v22;
        v4[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))qword_140015970)(
                    *(_QWORD *)(a1 + 1120),
                    v4,
                    v24) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v4);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_34;
          v32 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1400155E8,
            0LL);
          *((_DWORD *)v23 - 1) = v4[5];
          *(_DWORD *)v23 = v4[6];
          *(v23 - 7) = *((_BYTE *)v4 + 16);
          if ( *((_QWORD *)v4 + 1) )
          {
            *(v23 - 8) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(ULONG *)(*((_QWORD *)v4 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v23 - 3);
            if ( ProcessorNumberFromIndex < 0 )
            {
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                qword_1400155E8);
              goto LABEL_34;
            }
          }
          memset(*(void **)(v23 + 28), 0, 8LL * *((unsigned int *)v23 + 1));
          v25 = v4[7];
          v26 = 0LL;
          for ( *((_DWORD *)v23 + 1) = v25; (unsigned int)v26 < *((_DWORD *)v23 + 1); v26 = (unsigned int)(v26 + 1) )
          {
            v27 = *(_QWORD *)(v23 + 28);
            *(_DWORD *)(v27 + 8 * v26) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v26 + 10] + 56LL);
            *(_BYTE *)(v27 + 8 * v26 + 4) = v4[4 * (unsigned int)v26 + 12];
            *(_BYTE *)(v27 + 8 * v26 + 6) = BYTE2(v4[4 * (unsigned int)v26 + 12]);
            *(_BYTE *)(v27 + 8 * v26 + 5) = BYTE1(v4[4 * (unsigned int)v26 + 12]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1400155E8);
          v20 = (unsigned int)(16 * v5 + 40);
        }
        ++v22;
        v23 += 48;
      }
      while ( v22 < v6 );
      if ( v32 )
        goto LABEL_29;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      4,
      25,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_36:
  ExFreePoolWithTag(v3, (ULONG)1919119952);
LABEL_37:
  if ( v18 )
    ExFreePoolWithTag(v18, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
