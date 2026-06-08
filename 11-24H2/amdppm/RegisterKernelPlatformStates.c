/*
 * XREFs of RegisterKernelPlatformStates @ 0x140037074
 * Callers:
 *     RegisterIdleComplete @ 0x140035608 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x14000E1B8 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memset @ 0x14000E780 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400324E8 (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x140039948 (PepQueryName.c)
 *     ProcLibTracePlatformIdleStates @ 0x14003E514 (ProcLibTracePlatformIdleStates.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r14
  int ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  int v6; // edx
  char *Pool2; // rdi
  int v8; // edx
  unsigned int *v9; // r15
  unsigned int v10; // r13d
  char *v11; // rbp
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v18; // rcx
  int v19; // r9d
  int v20; // r8d
  PVOID *v21; // rsi
  __int64 v22; // rbp

  v1 = a1;
  v2 = dword_1400155D4;
  if ( byte_140015EE8 && dword_140015EE4 > (unsigned int)dword_1400155D4 )
    v2 = dword_140015EE4;
  v3 = (unsigned int)dword_140015C6C;
  if ( !dword_140015C6C )
    return 0;
  v5 = (48 * dword_140015C6C + 51) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v5 + 8 * dword_140015C6C * v2, 1919119952LL);
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
        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  v9 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(16 * v2 + 40), 1919119952LL);
  if ( v9 )
  {
    v10 = 0;
    if ( (_DWORD)v3 )
    {
      v11 = Pool2 + 56;
      while ( 1 )
      {
        memset(v9, 0, (unsigned int)(16 * v2 + 40));
        *v9 = v10;
        v9[8] = v2;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_140015970)(
                                     *(_QWORD *)(v1 + 1120),
                                     v9,
                                     0LL);
        if ( ProcessorNumberFromIndex < 0 )
          break;
        ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v9);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_33;
        v1 = a1;
        PepQueryName(a1, v10, 27LL, v11 + 16);
        *(_DWORD *)v11 = v9[5];
        *((_DWORD *)v11 + 1) = v9[6];
        *(v11 - 3) = *((_BYTE *)v9 + 16);
        if ( *((_QWORD *)v9 + 1) )
        {
          *(v11 - 4) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(ULONG *)(*((_QWORD *)v9 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v11 - 2);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_33;
          v1 = a1;
        }
        v13 = v9[7];
        v14 = 0LL;
        v15 = v5;
        v5 += 8 * v2;
        *((_DWORD *)v11 + 2) = v13;
        *((_QWORD *)v11 + 4) = &Pool2[v15];
        if ( v13 )
        {
          do
          {
            v16 = *((_QWORD *)v11 + 4);
            *(_DWORD *)(v16 + 8 * v14) = *(_DWORD *)(*(_QWORD *)&v9[4 * (unsigned int)v14 + 10] + 56LL);
            *(_BYTE *)(v16 + 8 * v14 + 4) = v9[4 * (unsigned int)v14 + 12];
            *(_BYTE *)(v16 + 8 * v14 + 6) = BYTE2(v9[4 * (unsigned int)v14 + 12]);
            *(_BYTE *)(v16 + 8 * v14 + 5) = BYTE1(v9[4 * (unsigned int)v14 + 12]);
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *((_DWORD *)v11 + 2) );
        }
        ++v10;
        v11 += 48;
        if ( v10 >= (unsigned int)v3 )
          goto LABEL_24;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 18;
        LOBYTE(v12) = 3;
        v20 = 2;
LABEL_31:
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          v20,
          v19,
          (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
LABEL_24:
      *(_DWORD *)Pool2 = 82;
      *((_DWORD *)Pool2 + 1) = dword_140015C6C;
      *((_QWORD *)Pool2 + 4) = PepQueryPlatformStateResidency;
      IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
      v18 = PepIdleVmTest;
      if ( !IsAnyHypervisorPresent )
        v18 = PepIdleTest;
      *((_QWORD *)Pool2 + 1) = v18;
      *((_QWORD *)Pool2 + 2) = PepIdlePreExecute;
      *((_QWORD *)Pool2 + 3) = PepIdleComplete;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_140015918)(Pool2);
      if ( ProcessorNumberFromIndex < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v19 = 19;
        LOBYTE(v12) = 2;
        v20 = 3;
        goto LABEL_31;
      }
      Src = Pool2;
      Pool2 = 0LL;
      byte_140015C70 = 1;
      ProcLibTracePlatformIdleStates(0LL);
      ProcessorNumberFromIndex = 0;
    }
LABEL_33:
    ExFreePoolWithTag(v9, (ULONG)1919119952);
    if ( !Pool2 )
      return (unsigned int)ProcessorNumberFromIndex;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      4,
      17,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_34:
  if ( (_DWORD)v3 )
  {
    v21 = (PVOID *)(Pool2 + 80);
    v22 = v3;
    do
    {
      if ( *v21 )
        ExFreePoolWithTag(*v21, (ULONG)1919119952);
      v21 += 6;
      --v22;
    }
    while ( v22 );
  }
  ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
