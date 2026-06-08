/*
 * XREFs of RegisterKernelIdleStates @ 0x14003D3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     RegisterIdleComplete @ 0x140037B28 (RegisterIdleComplete.c)
 *     RegisterKernelLpiStates @ 0x14003803C (RegisterKernelLpiStates.c)
 *     DeregisterKernelIdleDomains @ 0x14003D960 (DeregisterKernelIdleDomains.c)
 *     DisplayKernelIdleStates @ 0x14003DB50 (DisplayKernelIdleStates.c)
 *     RegisterKernelCStates @ 0x14003DCFC (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x14003DFE8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x14003E75C (RegisterKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  void *v1; // r15
  char v3; // r12
  __int64 v4; // rax
  int *v5; // rbp
  int v6; // ebp
  _DWORD *Pool2; // rsi
  struct _PROCESSOR_NUMBER *v8; // rax
  struct _PROCESSOR_NUMBER *v9; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v15; // r10
  unsigned int i; // r11d
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned __int16 v22; // r9
  int v23; // eax
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-30h]

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)((__int64 (*)(void))qword_140019700)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019188,
    0LL);
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 720) )
  {
    if ( qword_140019350 )
      qword_140019350(a1);
    *(_BYTE *)(a1 + 720) = 1;
    v3 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  v4 = *(_QWORD *)(a1 + 280);
  if ( (v4 & 0x200000200LL) != 0 )
  {
    v5 = *(int **)(a1 + 1144);
    if ( !v5 )
      return (unsigned int)-1073741823;
    v6 = *v5;
LABEL_6:
    if ( v6 )
      goto LABEL_7;
    return (unsigned int)-1073741823;
  }
  if ( (v4 & 0x20E0000000000LL) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 544);
    if ( !v24 )
      return (unsigned int)-1073741823;
    v6 = *(_DWORD *)(v24 + 16);
    goto LABEL_6;
  }
  if ( (v4 & 0x7F077) == 0 )
    return (unsigned int)-1073741637;
  v6 = 3;
LABEL_7:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(88 * v6 + 48), 1919119952LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = (struct _PROCESSOR_NUMBER *)ExAllocatePool2(64LL, (unsigned int)(32 * v6 + 104), 1919119952LL);
  v9 = v8;
  if ( v8 )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), v8 + 1);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_21;
    v9[24] = (struct _PROCESSOR_NUMBER)v6;
    *v9 = (struct _PROCESSOR_NUMBER)82;
    *(_QWORD *)&v9[2].Group = Pool2;
    Pool2[10] = v6;
    *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 1120);
    v11 = *(_QWORD *)(a1 + 280);
    if ( (v11 & 0x200000200LL) != 0 )
    {
      v12 = RegisterKernelPepIdleStatesV2(a1, v9, Pool2);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 10;
        goto LABEL_43;
      }
    }
    else if ( (v11 & 0x20E0000000000LL) != 0 )
    {
      v12 = RegisterKernelLpiStates(a1, (__int64)v9, (__int64)Pool2);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 11;
        goto LABEL_43;
      }
    }
    else if ( (v11 & 0x7F077) != 0 )
    {
      v12 = RegisterKernelCStates(a1, v9, Pool2);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 12;
LABEL_43:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v22,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
          v12);
      }
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    {
      v15 = 0LL;
      for ( i = 1; i <= 3; ++i )
      {
        v17 = 0LL;
        v18 = 0;
        if ( v9[24] )
        {
          do
          {
            v19 = 22LL * v18;
            v20 = *(_QWORD *)&Pool2[v19 + 12];
            if ( v20 )
            {
              v21 = *(unsigned __int8 *)(v20 + 12);
              if ( v21 > 3 )
                v21 = 3;
              if ( v21 == i && (!v17 || *(_DWORD *)(v20 + 16) < *(_DWORD *)(v17 + 16)) )
              {
                v17 = *(_QWORD *)&Pool2[v19 + 12];
                *((_BYTE *)Pool2 + v15 + 21) = v18;
              }
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)&v9[24] );
          if ( v17 )
            v15 = (unsigned int)(v15 + 1);
        }
      }
      *((_BYTE *)Pool2 + 20) = v15;
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x7F277LL) != 0 )
    {
      if ( !*((_BYTE *)Pool2 + 20) )
      {
        ProcessorNumberFromIndex = -1073741823;
        goto LABEL_21;
      }
    }
    else
    {
      v25 = (unsigned int)v9[24];
      *((_BYTE *)Pool2 + 21) = 0;
      if ( v25 > 2 )
        LOBYTE(v25) = 2;
      *((_BYTE *)Pool2 + 20) = v25;
      if ( (_BYTE)v25 == 2 )
        *((_BYTE *)Pool2 + 22) = LOBYTE(v9[24].Group) - 1;
    }
    DisplayKernelIdleStates(v9);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140019188,
      0LL);
    if ( (*(_QWORD *)(a1 + 280) & 0x100200000200LL) != 0 && *(_QWORD *)(a1 + 712) )
      HIBYTE(v9[4].Group) = 1;
    v13 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1400194B8)(v9);
    ProcessorNumberFromIndex = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = v13;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xDu,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
          v26);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_140019188);
    }
    else
    {
      v1 = *(void **)(a1 + 712);
      *(_QWORD *)(a1 + 712) = Pool2;
      if ( v3 )
        RegisterIdleComplete(a1);
      Pool2 = 0LL;
      if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 )
      {
        v23 = RegisterKernelIdleDomains(a1);
        if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xEu,
            (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
            v26);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_140019188);
      ProcessorNumberFromIndex = 0;
    }
LABEL_21:
    ExFreePoolWithTag(v9, (ULONG)1919119952);
    if ( !Pool2 )
      goto LABEL_22;
    goto LABEL_67;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_67:
  ExFreePoolWithTag(Pool2, (ULONG)1919119952);
LABEL_22:
  if ( v1 )
    ExFreePoolWithTag(v1, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
