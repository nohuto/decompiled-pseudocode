/*
 * XREFs of MiInsertNewZeroThread @ 0x140690A00
 * Callers:
 *     MiStartZeroEngineThreads @ 0x14080010C (MiStartZeroEngineThreads.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteZeroThreadContext @ 0x140412560 (MiDeleteZeroThreadContext.c)
 *     MiIncrementZeroEngineThread @ 0x1404137CC (MiIncrementZeroEngineThread.c)
 *     MiRemoveThreadFromEngineLists @ 0x140413E2C (MiRemoveThreadFromEngineLists.c)
 *     MiEngineAffinity @ 0x14046C2B0 (MiEngineAffinity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x1407FFE14 (MiMakeSpaceForConductorListZeroThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140847A60 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertNewZeroThread(_QWORD *P)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  PVOID v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  NTSTATUS SpaceForConductorListZeroThread; // esi
  KIRQL v7; // al
  unsigned int v8; // ecx
  unsigned __int8 v9; // r12
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  KIRQL v12; // r12
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+60h] [rbp-20h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  v1 = P[42];
  v2 = P;
  v3 = 0LL;
  v16 = 0LL;
  Object = 0LL;
  v4 = *(_QWORD *)(v1 + 176);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 184LL) + 128LL);
  SpaceForConductorListZeroThread = MiMakeSpaceForConductorListZeroThread(v4, &v16);
  if ( SpaceForConductorListZeroThread < 0 )
    goto LABEL_21;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v1 + 208) + 15280LL));
  v8 = *(_DWORD *)(v1 + 4);
  v9 = v7;
  if ( v8 >= *(_DWORD *)(v1 + 8) )
  {
    SpaceForConductorListZeroThread = -1073741523;
  }
  else
  {
    *(_DWORD *)(v1 + 4) = v8 + 1;
    v10 = v2 + 52;
    v11 = *(_QWORD **)(v1 + 200);
    if ( *v11 != v1 + 192 )
      __fastfail(3u);
    *v10 = v1 + 192;
    v2[53] = v11;
    *v11 = v10;
    *(_QWORD *)(v1 + 200) = v10;
    MiIncrementZeroEngineThread((__int64)v2);
  }
  MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(v1 + 208) + 15280LL), v9);
  if ( SpaceForConductorListZeroThread < 0 )
  {
    SpaceForConductorListZeroThread = 0;
LABEL_21:
    MiDeleteZeroThreadContext(v2, 0);
    return (unsigned int)SpaceForConductorListZeroThread;
  }
  v17 = *(_OWORD *)*MiEngineAffinity(v1);
  SpaceForConductorListZeroThread = PsCreateSystemThreadEx(
                                      &Handle,
                                      0x1FFFFFLL,
                                      0LL,
                                      v5,
                                      0LL,
                                      MiBackgroundZeroNodePages,
                                      v2,
                                      &v17,
                                      0LL);
  if ( SpaceForConductorListZeroThread >= 0 )
  {
    SpaceForConductorListZeroThread = ObReferenceObjectByHandleWithTag(
                                        Handle,
                                        0x1FFFFFu,
                                        (POBJECT_TYPE)PsThreadType,
                                        0,
                                        0x655A6D4Du,
                                        &Object,
                                        0LL);
    ObCloseHandle(Handle, 0);
    v3 = Object;
  }
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v1 + 208) + 15280LL));
  if ( SpaceForConductorListZeroThread < 0 )
  {
    MiRemoveThreadFromEngineLists(v2);
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 31) )
      *(_BYTE *)(v1 + 31) = 1;
    *v16 = v3;
    if ( !v2[41] )
    {
      v2[41] = v3;
      v3 = 0LL;
    }
    ++*(_DWORD *)(v4 + 60);
    v2 = 0LL;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(v1 + 208) + 15280LL), v12);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x655A6D4Du);
  if ( v2 )
    goto LABEL_21;
  return (unsigned int)SpaceForConductorListZeroThread;
}
