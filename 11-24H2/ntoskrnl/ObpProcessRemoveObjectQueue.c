/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1409C2460
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 */

__int64 ObpProcessRemoveObjectQueue()
{
  int v0; // r8d
  ULONG_PTR **v1; // r11
  int v2; // r10d
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // r9d
  int *v7; // rsi
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 result; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 *v19; // [rsp+20h] [rbp-38h]
  ULONG_PTR *v20; // [rsp+28h] [rbp-30h] BYREF

  if ( !qword_140EF0030 )
  {
    v15 = __rdtsc();
    v16 = 41929663 * ((((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) >> 4);
    qword_140EF0030 = v16;
    if ( !v16 )
      qword_140EF0030 = 1LL;
    v17 = __rdtsc();
    qword_140EF0038 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4)) ^ 0xC3FLL;
    qword_140EF0040 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140EF0040 )
  {
    v19 = &xmmword_140FC7420;
    v20 = &xmmword_140FC72E0;
    if ( !qword_140EF0048 )
    {
      if ( !(_DWORD)xmmword_140FC72F0 )
        goto LABEL_12;
      qword_140EF0048 = (unsigned int)KiTableInformation;
    }
    if ( (_DWORD)xmmword_140FC72F0 && (_BYTE)KdDebuggerNotPresent )
    {
      v0 = 0;
      v1 = &v20;
      v2 = 2;
      do
      {
        v3 = 0;
        v4 = **v1;
        v5 = *((_DWORD *)*v1 + 4);
        v6 = v0 + v4 + (unsigned int)*v1;
        if ( v5 )
        {
          v7 = (int *)**v1;
          do
          {
            v8 = *v7;
            ++v3;
            v9 = *v7++;
            v6 = v3 * ((v8 + *(_DWORD *)((v9 >> 4) + v4)) ^ v6);
          }
          while ( v3 < v5 );
        }
        --v1;
        v0 += 2 * v6;
        --v2;
      }
      while ( v2 );
      if ( v0 != qword_140EF0048 )
      {
        if ( qword_140EF0000 )
          goto LABEL_13;
        qword_140EF0000 = (unsigned int)__ROR4__(1085440, 204);
        xmmword_140EF0008 = 0LL;
        qword_140EF0018 = 266LL;
        qword_140EF0020 = v4;
      }
    }
LABEL_12:
    if ( !qword_140EF0000 )
    {
LABEL_16:
      qword_140EF0040 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_17;
    }
LABEL_13:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(
        &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
        (PKDEFERRED_ROUTINE)KiSchedulerDpc,
        &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
    qword_140EF0028 = 3812160LL;
    KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    goto LABEL_16;
  }
  while ( 1 )
  {
LABEL_17:
    v10 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v11 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v10);
      if ( v11 )
        ObpHandleRevocationBlockRemoveObject(v11);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v10);
      v13 = *(_QWORD *)(v10 + 8);
      LOBYTE(v12) = 1;
      ObpRemoveObjectRoutine(v10, v12);
      v10 = v13;
    }
    while ( v13 && v13 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      result = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( result == 1 )
        break;
    }
  }
  _InterlockedOr(v18, 0);
  if ( ObpRemoveObjectWait )
    return ExfUnblockPushLock((__int64)&ObpRemoveObjectWait, 0LL);
  return result;
}
