/*
 * XREFs of RegisterKernelPlatformStates @ 0x140038AC4
 * Callers:
 *     RegisterIdleComplete @ 0x140037B28 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x140004BCC (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400403A0 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x1400405EC (ProcLibTracePlatformIdleStates.c)
 *     PepQueryName @ 0x140046CF8 (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  int v6; // edx
  _DWORD *Pool2; // rdi
  size_t v8; // rbp
  int v9; // edx
  unsigned int *v10; // r14
  unsigned int i; // r13d
  _DWORD *v12; // rbp
  unsigned int v13; // ecx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  bool IsAnyHypervisorPresent; // al
  void *v21; // rcx
  PVOID *v22; // rsi
  __int64 v23; // rbp

  v1 = a1;
  v2 = dword_140019184;
  if ( byte_140019A90 && dword_140019A8C > (unsigned int)dword_140019184 )
    v2 = dword_140019A8C;
  v3 = (unsigned int)dword_14001981C;
  if ( !dword_14001981C )
    return 0;
  v5 = (48 * dword_14001981C + 51) & 0xFFFFFFFC;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v5 + 8 * dword_14001981C * v2, 1919119952LL);
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
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_140019520)(
                                 *(_QWORD *)(v1 + 1120),
                                 v10,
                                 0LL);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v17 = 18;
      v18 = 3;
      v19 = 2;
      goto LABEL_26;
    }
    ProcessorNumberFromIndex = ValidatePlatformIdleState(v10);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_33;
    v1 = a1;
    v12 = &Pool2[12 * i + 12];
    PepQueryName(a1, i, 27LL, v12 + 6);
    v12[2] = v10[5];
    v12[3] = v10[6];
    *((_BYTE *)v12 + 5) = *((_BYTE *)v10 + 16);
    if ( *((_QWORD *)v10 + 1) )
    {
      *((_BYTE *)v12 + 4) = 1;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                   *(ULONG *)(*((_QWORD *)v10 + 1) + 56LL),
                                   (PPROCESSOR_NUMBER)v12);
      if ( ProcessorNumberFromIndex < 0 )
        goto LABEL_33;
      v1 = a1;
    }
    v13 = v10[7];
    v14 = 0LL;
    v15 = v5;
    v5 += 8 * v2;
    v12[4] = v13;
    *((_QWORD *)v12 + 5) = (char *)Pool2 + v15;
    if ( v13 )
    {
      do
      {
        v16 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v16 + 8 * v14) = *(_DWORD *)(*(_QWORD *)&v10[4 * (unsigned int)v14 + 10] + 56LL);
        *(_BYTE *)(v16 + 8 * v14 + 4) = v10[4 * (unsigned int)v14 + 12];
        *(_BYTE *)(v16 + 8 * v14 + 6) = BYTE2(v10[4 * (unsigned int)v14 + 12]);
        *(_BYTE *)(v16 + 8 * v14 + 5) = BYTE1(v10[4 * (unsigned int)v14 + 12]);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < v12[4] );
    }
    v8 = (unsigned int)(16 * v2 + 40);
  }
  *Pool2 = 82;
  Pool2[1] = dword_14001981C;
  *((_QWORD *)Pool2 + 4) = PepQueryPlatformStateResidency;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v21 = PepIdleVmTest;
  if ( !IsAnyHypervisorPresent )
    v21 = PepIdleTest;
  *((_QWORD *)Pool2 + 1) = v21;
  *((_QWORD *)Pool2 + 2) = PepIdlePreExecute;
  *((_QWORD *)Pool2 + 3) = PepIdleComplete;
  ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_DWORD *))qword_1400194C8)(Pool2);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Src = Pool2;
    Pool2 = 0LL;
    ProcLibTracePlatformIdleStates(0LL);
    ProcessorNumberFromIndex = 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 19;
    v18 = 2;
    v19 = 3;
LABEL_26:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      v17,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      ProcessorNumberFromIndex);
  }
LABEL_33:
  ExFreePoolWithTag(v10, (ULONG)1919119952);
  if ( Pool2 )
    goto LABEL_34;
  return (unsigned int)ProcessorNumberFromIndex;
}
