/*
 * XREFs of RegisterKernelPlatformStates @ 0x140035E64
 * Callers:
 *     RegisterIdleComplete @ 0x140034408 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x14000D508 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400312E8 (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x140038704 (PepQueryName.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003D2C4 (ProcLibTracePlatformIdleStates.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r15
  int ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  int v6; // edx
  _DWORD *Pool2; // rdi
  size_t v8; // rbp
  int v9; // edx
  unsigned int *v10; // r14
  unsigned int i; // r13d
  int v12; // edx
  _DWORD *v13; // rbp
  unsigned int v14; // ecx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // r8d
  bool IsAnyHypervisorPresent; // al
  void *v21; // rcx
  PVOID *v22; // rsi
  __int64 v23; // rbp

  v1 = a1;
  v2 = dword_1400145A4;
  if ( byte_140014EB0 && dword_140014EAC > (unsigned int)dword_1400145A4 )
    v2 = dword_140014EAC;
  v3 = (unsigned int)dword_140014C3C;
  if ( !dword_140014C3C )
    return 0;
  v5 = (48 * dword_140014C3C + 51) & 0xFFFFFFFC;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v5 + 8 * dword_140014C3C * v2, 1919119952LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        4,
        16,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  v8 = (unsigned int)(16 * v2 + 40);
  v10 = (unsigned int *)ExAllocatePool2(256LL, v8, 1919119952LL);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        4,
        17,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
    }
    ProcessorNumberFromIndex = -1073741670;
LABEL_34:
    if ( (_DWORD)v3 )
    {
      v22 = (PVOID *)(Pool2 + 20);
      v23 = v3;
      do
      {
        if ( *v22 )
          ExFreePoolWithTag(*v22, (ULONG)1919119952);
        v22 += 6;
        --v23;
      }
      while ( v23 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    memset(v10, 0, v8);
    *v10 = i;
    v10[8] = v2;
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_140014940)(
                                 *(_QWORD *)(v1 + 1120),
                                 v10,
                                 0LL);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v18 = 18;
      LOBYTE(v12) = 3;
      v19 = 2;
      goto LABEL_26;
    }
    ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v10);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_33;
    v1 = a1;
    v13 = &Pool2[12 * i + 12];
    PepQueryName(a1, i, 27LL, v13 + 6);
    v13[2] = v10[5];
    v13[3] = v10[6];
    *((_BYTE *)v13 + 5) = *((_BYTE *)v10 + 16);
    if ( *((_QWORD *)v10 + 1) )
    {
      *((_BYTE *)v13 + 4) = 1;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                   *(ULONG *)(*((_QWORD *)v10 + 1) + 56LL),
                                   (PPROCESSOR_NUMBER)v13);
      if ( ProcessorNumberFromIndex < 0 )
        goto LABEL_33;
      v1 = a1;
    }
    v14 = v10[7];
    v15 = 0LL;
    v16 = v5;
    v5 += 8 * v2;
    v13[4] = v14;
    *((_QWORD *)v13 + 5) = (char *)Pool2 + v16;
    if ( v14 )
    {
      do
      {
        v17 = *((_QWORD *)v13 + 5);
        *(_DWORD *)(v17 + 8 * v15) = *(_DWORD *)(*(_QWORD *)&v10[4 * (unsigned int)v15 + 10] + 56LL);
        *(_BYTE *)(v17 + 8 * v15 + 4) = v10[4 * (unsigned int)v15 + 12];
        *(_BYTE *)(v17 + 8 * v15 + 6) = BYTE2(v10[4 * (unsigned int)v15 + 12]);
        *(_BYTE *)(v17 + 8 * v15 + 5) = BYTE1(v10[4 * (unsigned int)v15 + 12]);
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < v13[4] );
    }
    v8 = (unsigned int)(16 * v2 + 40);
  }
  *Pool2 = 82;
  Pool2[1] = dword_140014C3C;
  *((_QWORD *)Pool2 + 4) = PepQueryPlatformStateResidency;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v21 = PepIdleVmTest;
  if ( !IsAnyHypervisorPresent )
    v21 = PepIdleTest;
  *((_QWORD *)Pool2 + 1) = v21;
  *((_QWORD *)Pool2 + 2) = PepIdlePreExecute;
  *((_QWORD *)Pool2 + 3) = PepIdleComplete;
  ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_DWORD *))qword_1400148E8)(Pool2);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Src = Pool2;
    Pool2 = 0LL;
    ProcLibTracePlatformIdleStates(0LL);
    ProcessorNumberFromIndex = 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 19;
    LOBYTE(v12) = 2;
    v19 = 3;
LABEL_26:
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      v19,
      v18,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      ProcessorNumberFromIndex);
  }
LABEL_33:
  ExFreePoolWithTag(v10, (ULONG)1919119952);
  if ( Pool2 )
    goto LABEL_34;
  return (unsigned int)ProcessorNumberFromIndex;
}
