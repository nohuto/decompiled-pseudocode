/*
 * XREFs of PsCreateMinimalProcess @ 0x140769B14
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     PspCreatePicoProcess @ 0x14076A1B0 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14076B328 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x14078F410 (VmCreateMemoryProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 *     PspCreateSecureSystemProcess @ 0x140C23B20 (PspCreateSecureSystemProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeKvaShadowingActive @ 0x1404A82EC (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkCreateMinimalProcess @ 0x1406FB318 (DbgkCreateMinimalProcess.c)
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x14076A474 (PspSetMinimalProcessName.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     PspGetMemoryPartitionContext @ 0x1408D8120 (PspGetMemoryPartitionContext.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408F1B10 (PspDeleteCreateProcessContext.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     PspCreateObjectHandle @ 0x1409BBD2C (PspCreateObjectHandle.c)
 *     PspDeleteMemoryPartitionContext @ 0x1409BD0FC (PspDeleteMemoryPartitionContext.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PsAssignProcessToJobObject @ 0x140A0E780 (PsAssignProcessToJobObject.c)
 *     MmSynchronizeAddressPolicy @ 0x140A849C4 (MmSynchronizeAddressPolicy.c)
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
  char v23; // al
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int16 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  PVOID v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _QWORD *v33; // [rsp+C0h] [rbp-40h]
  struct _ACCESS_STATE AccessState; // [rsp+D0h] [rbp-30h] BYREF
  int v35; // [rsp+250h] [rbp+150h]
  __int64 v36; // [rsp+258h] [rbp+158h]
  __int128 v37; // [rsp+260h] [rbp+160h] BYREF
  __int128 v38; // [rsp+270h] [rbp+170h]
  __int64 v39; // [rsp+280h] [rbp+180h]
  _OWORD v40[3]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v41[496]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v12 = a9;
  v30 = a10;
  v33 = a12;
  v32 = a3;
  v31 = a2;
  v39 = 0LL;
  v29 = a5;
  v28 = (__int64)a9;
  v26 = 0;
  v37 = 0LL;
  v38 = 0LL;
  memset(v40, 0, sizeof(v40));
  memset_0(&AccessState, 0, 0x190uLL);
  v27 = 0LL;
  Object = 0LL;
  v15 = 0;
  v16 = 0LL;
  memset_0(v41, 0, sizeof(v41));
  if ( a5 )
    v15 = 1;
  else
    v29 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v17 = a6 | 0x800;
  if ( !a11
    || (v39 = 0LL,
        *((_QWORD *)&v38 + 1) = a11,
        *((_QWORD *)&v37 + 1) = 131085LL,
        *(_QWORD *)&v38 = 2LL,
        *(_QWORD *)&v37 = 40LL,
        Process = PspBuildCreateProcessContext(&v37, 0LL, 0LL, v41),
        Process >= 0) )
  {
    MemoryPartitionContext = PspGetMemoryPartitionContext(a1, v17, (unsigned int)&v28, a9 != 0LL, (__int64)&v27);
    v16 = v27;
    Process = MemoryPartitionContext;
    if ( MemoryPartitionContext >= 0 )
    {
      v21 = v30;
      LOBYTE(v20) = a4;
      if ( v27 )
        v21 = v27;
      Process = PspAllocateProcess(
                  a1,
                  0,
                  0,
                  v20,
                  0,
                  0,
                  0LL,
                  (__int64)v29,
                  v17,
                  a7,
                  (__int64)v41,
                  v15,
                  v21,
                  (__int64)&v26,
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
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v40);
            MmSynchronizeAddressPolicy(Object);
            KiUnstackDetachProcess((__int64)v40, 0LL);
          }
          v12 = (void *)v28;
          v22 = Object;
          v16 = v27;
        }
        if ( v31 )
        {
          PspSetMinimalProcessName(v22, v31);
          v22 = Object;
        }
        memset_0(&AccessState, 0, 0x190uLL);
        v23 = 1;
        if ( (_BYTE)v26 )
          v23 = 3;
        Process = PspInsertProcess(v22, 0LL, v23, v32, &AccessState);
        if ( Process >= 0 )
        {
          v15 |= 4u;
          if ( !v12 || (Process = PsAssignProcessToJobObject(v12, (ULONG_PTR)Object), Process >= 0) )
          {
            DbgkCreateMinimalProcess((volatile signed __int32 *)Object);
            v15 |= 2u;
            v35 |= 0x200u;
            Process = PspCreateObjectHandle(Object, &AccessState, PsProcessType);
            if ( Process >= 0 )
            {
              v15 &= ~4u;
              *v33 = v36;
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
    SeDeleteAccessState(&AccessState);
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
  PspDeleteCreateProcessContext(v41);
  if ( (v15 & 1) == 0 )
    ObfDereferenceObject(v29);
  return (unsigned int)Process;
}
