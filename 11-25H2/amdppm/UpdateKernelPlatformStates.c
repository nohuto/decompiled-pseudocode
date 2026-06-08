/*
 * XREFs of UpdateKernelPlatformStates @ 0x140036420
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400272B0 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x140038BB0 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memmove @ 0x14000D7C0 (memmove.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400312E8 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003D2C4 (ProcLibTracePlatformIdleStates.c)
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
  int ProcessorNumberFromIndex; // ebx
  size_t v19; // rbx
  int v20; // edx
  unsigned int i; // r15d
  __int64 v22; // r8
  unsigned int *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rdx
  int v27; // edx
  char v31; // [rsp+90h] [rbp+18h]

  v31 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400145A8,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1400145A4;
    v8 = (48 * v6 + 51) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_1400145A4, 1919119952LL);
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400145A8);
  v17 = 0LL;
  if ( !v4 )
  {
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
  if ( !v2 )
    goto LABEL_29;
  v19 = (unsigned int)(16 * v5 + 40);
  v3 = (unsigned int *)ExAllocatePool2(256LL, v19, 1919119952LL);
  if ( v3 )
  {
    for ( i = 0; i < v6; ++i )
    {
      memset(v3, 0, v19);
      LOBYTE(v22) = 1;
      *v3 = i;
      v3[8] = v5;
      if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))qword_140014940)(
                  *(_QWORD *)(a1 + 1120),
                  v3,
                  v22) >= 0 )
      {
        ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v3);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_34;
        v31 = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1400145B8,
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
              qword_1400145B8);
            goto LABEL_34;
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
          qword_1400145B8);
        v19 = (unsigned int)(16 * v5 + 40);
      }
    }
    if ( !v31 )
    {
      ProcessorNumberFromIndex = 0;
      goto LABEL_34;
    }
LABEL_29:
    *((_BYTE *)v4 + 40) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1400148E8)(v4);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          3,
          26,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
          ProcessorNumberFromIndex);
      }
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
      qword_1400145A8);
    if ( !v3 )
    {
LABEL_35:
      if ( !v4 )
        goto LABEL_37;
      goto LABEL_36;
    }
LABEL_34:
    ExFreePoolWithTag(v3, (ULONG)1919119952);
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      4,
      25,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_36:
  ExFreePoolWithTag(v4, (ULONG)1919119952);
LABEL_37:
  if ( v17 )
    ExFreePoolWithTag(v17, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
