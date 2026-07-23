/*
 * XREFs of PsCreateMinimalProcess @ 0x1407798C4
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     PspCreatePicoProcess @ 0x140779F60 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14077AD78 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x14079E8E0 (VmCreateMemoryProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     PspCreateSecureSystemProcess @ 0x140C36F2C (PspCreateSecureSystemProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkCreateMinimalProcess @ 0x140704DB8 (DbgkCreateMinimalProcess.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x14077A224 (PspSetMinimalProcessName.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     PspGetMemoryPartitionContext @ 0x1408D7C70 (PspGetMemoryPartitionContext.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspCreateObjectHandle @ 0x140A0B3A0 (PspCreateObjectHandle.c)
 *     PsAssignProcessToJobObject @ 0x140A103D0 (PsAssignProcessToJobObject.c)
 *     PspDeleteMemoryPartitionContext @ 0x140A67FDC (PspDeleteMemoryPartitionContext.c)
 *     MmSynchronizeAddressPolicy @ 0x140A84ED8 (MmSynchronizeAddressPolicy.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        int a7,
        __int64 a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  void *v12; // r15
  unsigned int v15; // ebx
  __int64 v16; // r14
  int v17; // r12d
  int Process; // esi
  int MemoryPartitionContext; // eax
  int v20; // r9d
  __int64 v21; // rax
  _BYTE *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int16 v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  PVOID v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  _QWORD *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36[48]; // [rsp+D0h] [rbp-30h] BYREF
  int v37; // [rsp+250h] [rbp+150h]
  __int64 v38; // [rsp+258h] [rbp+158h]
  __int128 v39; // [rsp+260h] [rbp+160h] BYREF
  __int128 v40; // [rsp+270h] [rbp+170h]
  __int64 v41; // [rsp+280h] [rbp+180h]
  _OWORD v42[3]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v43[528]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v12 = a9;
  v32 = a10;
  v35 = a12;
  v34 = a3;
  v33 = a2;
  v41 = 0LL;
  v31 = a5;
  v30 = (__int64)a9;
  v28 = 0;
  v39 = 0LL;
  v40 = 0LL;
  memset(v42, 0, sizeof(v42));
  memset_0(v36, 0, 0x190uLL);
  v29 = 0LL;
  Object = 0LL;
  v15 = 0;
  v16 = 0LL;
  memset_0(v43, 0, sizeof(v43));
  if ( a5 )
    v15 = 1;
  else
    v31 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v17 = a6 | 0x800;
  if ( !a11
    || (v41 = 0LL,
        *((_QWORD *)&v40 + 1) = a11,
        *((_QWORD *)&v39 + 1) = 131085LL,
        *(_QWORD *)&v40 = 2LL,
        *(_QWORD *)&v39 = 40LL,
        Process = PspBuildCreateProcessContext(&v39, 0LL, 0LL, v43),
        Process >= 0) )
  {
    MemoryPartitionContext = PspGetMemoryPartitionContext(a1, v17, (unsigned int)&v30, a9 != 0LL, (__int64)&v29);
    v16 = v29;
    Process = MemoryPartitionContext;
    if ( MemoryPartitionContext >= 0 )
    {
      v21 = v32;
      LOBYTE(v20) = a4;
      if ( v29 )
        v21 = v29;
      Process = PspAllocateProcess(
                  a1,
                  0,
                  0,
                  v20,
                  0,
                  0,
                  0LL,
                  (__int64)v31,
                  v17,
                  a7,
                  (__int64)v43,
                  v15,
                  v21,
                  (__int64)&v28,
                  (__int64)&Object);
      if ( Process >= 0 )
      {
        if ( a8 )
          *((_QWORD *)Object + 200) = a8;
        v22 = Object;
        if ( (*((_DWORD *)Object + 383) & 1) != 0 && !*((_QWORD *)Object + 200) && (unsigned int)KeKvaShadowingActive() )
        {
          v22[352] = 1;
          if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 383, 0xEu) )
          {
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v42);
            MmSynchronizeAddressPolicy(Object);
            KiUnstackDetachProcess((__int64)v42, 0, v23, v24);
          }
          v12 = (void *)v30;
          v22 = Object;
          v16 = v29;
        }
        if ( v33 )
        {
          PspSetMinimalProcessName(v22, v33);
          v22 = Object;
        }
        memset_0(v36, 0, 0x190uLL);
        v25 = 1;
        if ( (_BYTE)v28 )
          v25 = 3;
        Process = PspInsertProcess(v22, 0LL, v25, v34, (__int64)v36);
        if ( Process >= 0 )
        {
          v15 |= 4u;
          if ( !v12 || (Process = PsAssignProcessToJobObject(v12, (ULONG_PTR)Object), Process >= 0) )
          {
            DbgkCreateMinimalProcess((volatile signed __int32 *)Object);
            v15 |= 2u;
            v37 |= 0x200u;
            Process = PspCreateObjectHandle(Object, v36, PsProcessType);
            if ( Process >= 0 )
            {
              v15 &= ~4u;
              *v35 = v38;
            }
          }
        }
        else
        {
          PspRundownSingleProcess(Object);
        }
      }
      else
      {
        Object = 0LL;
      }
    }
  }
  if ( (v15 & 2) != 0 )
    SeDeleteAccessState(v36);
  if ( Object )
  {
    if ( v15 >= 4 )
    {
      if ( *((_QWORD *)Object + 200) )
        PsTerminateProcess(Object, (unsigned int)Process);
      else
        PsTerminateMinimalProcess((PRKPROCESS)Object, Process);
    }
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  }
  if ( v16 )
    PspDeleteMemoryPartitionContext(v16);
  PspDeleteCreateProcessContext(v43);
  if ( (v15 & 1) == 0 )
    ObfDereferenceObject(v31);
  return (unsigned int)Process;
}
