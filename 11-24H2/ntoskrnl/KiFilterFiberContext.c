/*
 * XREFs of KiFilterFiberContext @ 0x140BE1530
 * Callers:
 *     KeInitAmd64SpecificState @ 0x140BE0B80 (KeInitAmd64SpecificState.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExInitializeNPagedLookasideList @ 0x140454990 (ExInitializeNPagedLookasideList.c)
 *     KeKeepData @ 0x14047A848 (KeKeepData.c)
 *     KdDisableDebugger @ 0x1405AC870 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405AC9B0 (KdEnableDebugger.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     KiSwInterruptPresent @ 0x140BE0BD4 (KiSwInterruptPresent.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r15
  NTSTATUS v12; // eax
  char v13; // di
  unsigned __int64 v14; // rax
  unsigned __int128 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int128 v18; // rax
  NTSTATUS v19; // eax
  char v20; // cl
  int v21; // eax
  NTSTATUS v22; // eax
  char v23; // cl
  int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // rdx
  _DWORD Parameter[4]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v29; // [rsp+50h] [rbp-79h]
  int v30; // [rsp+58h] [rbp-71h]
  char v31; // [rsp+5Ch] [rbp-6Dh]
  _DWORD v32[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v33; // [rsp+70h] [rbp-59h]
  int v34; // [rsp+78h] [rbp-51h]
  char v35; // [rsp+7Ch] [rbp-4Dh]
  _DWORD v36[4]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v37; // [rsp+90h] [rbp-39h]
  int v38; // [rsp+98h] [rbp-31h]
  char v39; // [rsp+9Ch] [rbp-2Dh]
  __int64 v40; // [rsp+A0h] [rbp-29h]
  __int64 v41; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+130h] [rbp+67h] BYREF
  __int64 v44; // [rsp+138h] [rbp+6Fh]
  __int64 v45; // [rsp+140h] [rbp+77h]
  __int64 v46; // [rsp+148h] [rbp+7Fh]

  v2 = KdDisableDebugger();
  KeKeepData();
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v44 = *((_QWORD *)&v4 + 1);
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  if ( !*(_QWORD *)&MaxDataSize && !a1 && !__2c )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, sub_140507CD0, &__24);
        ObfDereferenceObject(CallbackObject);
        if ( __24 )
          __2c = 1;
        ExInitializeNPagedLookasideList(&stru_140E0F340, 0LL, 0LL, 0x200u, 0xB38uLL, 0x746E494Bu, 0);
      }
    }
  }
  v6 = __rdtsc();
  v7 = (__ROR8__(v6, 3) ^ v6) * (unsigned __int128)0x7010008004002001uLL;
  v45 = *((_QWORD *)&v7 + 1);
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  Parameter[2] = (v5 < 6) + 1;
  v29 = a1;
  v30 = 1;
  v31 = 0;
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v46 = *((_QWORD *)&v10 + 1);
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  Parameter[1] = v11;
  Parameter[0] = v9 % 0xD;
  v12 = KeExpandKernelStackAndCallout(sub_140C0A680, Parameter, 0xC000uLL);
  v13 = v31;
  if ( v12 < 0 )
    v13 = 0;
  v31 = v13;
  if ( v13 )
  {
    if ( v5 >= 6 )
      goto LABEL_21;
    v14 = __rdtsc();
    v15 = (__ROR8__(v14, 3) ^ v14) * (unsigned __int128)0x7010008004002001uLL;
    v40 = *((_QWORD *)&v15 + 1);
    v16 = ((unsigned __int64)v15 ^ *((_QWORD *)&v15 + 1)) % 0xD;
    do
    {
      v17 = __rdtsc();
      v18 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
      v41 = *((_QWORD *)&v18 + 1);
    }
    while ( (_DWORD)v11 && ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6 == (_DWORD)v11 );
    v32[0] = v16;
    v32[1] = ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6;
    v32[2] = (v5 < 6) + 1;
    v33 = a1;
    v34 = 0;
    v35 = 0;
    v19 = KeExpandKernelStackAndCallout(sub_140C0A680, v32, 0xC000uLL);
    v20 = v35;
    if ( v19 < 0 )
      v20 = 0;
    v35 = v20;
    v13 = v20;
    if ( v20 )
    {
LABEL_21:
      if ( *(_QWORD *)&MaxDataSize )
        goto LABEL_29;
      if ( a1 )
        goto LABEL_37;
      if ( (int)KiSwInterruptPresent() < 0 && !__2c )
      {
LABEL_30:
        if ( qword_141008660 )
          ExFreePool(qword_141008660);
        v24 = 24;
        v25 = &__25;
        v26 = 3LL;
        do
        {
          *v25 = 0LL;
          v24 -= 8;
          ++v25;
          --v26;
        }
        while ( v26 );
        for ( ; v24; --v24 )
        {
          *(_BYTE *)v25 = 0;
          v25 = (__int64 *)((char *)v25 + 1);
        }
        __2e = 0;
        __26 = 0;
        __27 = 0LL;
        dword_140E0F280 = 0;
        qword_141008080 = 0LL;
        goto LABEL_37;
      }
      v36[0] = 0;
      v36[1] = 7;
      v36[2] = 1;
      v37 = 0LL;
      v21 = KiSwInterruptPresent();
      v39 = 0;
      v38 = (v21 >> 31) & 8;
      v22 = KeExpandKernelStackAndCallout(sub_140C0A680, v36, 0xC000uLL);
      v23 = v39;
      if ( v22 < 0 )
        v23 = 0;
      v39 = v23;
      v13 = v23;
    }
    if ( !v13 )
      goto LABEL_37;
LABEL_29:
    if ( a1 )
      goto LABEL_37;
    goto LABEL_30;
  }
LABEL_37:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v13 != 0;
}
