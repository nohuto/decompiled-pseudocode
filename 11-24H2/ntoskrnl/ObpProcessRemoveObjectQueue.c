/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1409D2630
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 *v21; // [rsp+20h] [rbp-38h]
  ULONG_PTR *v22; // [rsp+28h] [rbp-30h] BYREF

  if ( !qword_140EEFDF0 )
  {
    v17 = __rdtsc();
    v18 = 41929663 * ((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4);
    qword_140EEFDF0 = v18;
    if ( !v18 )
      qword_140EEFDF0 = 1LL;
    v19 = __rdtsc();
    qword_140EEFDF8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) >> 4)) ^ 0xC3FLL;
    qword_140EEFE00 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140EEFE00 )
  {
    v21 = &xmmword_140FC63A0;
    v22 = &xmmword_140FC62A0;
    if ( !qword_140EEFE08 )
    {
      if ( !(_DWORD)xmmword_140FC62B0 )
        goto LABEL_12;
      qword_140EEFE08 = (unsigned int)KiTableInformation;
    }
    if ( (_DWORD)xmmword_140FC62B0 && (_BYTE)KdDebuggerNotPresent )
    {
      v0 = 0;
      v1 = &v22;
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
      if ( v0 != qword_140EEFE08 )
      {
        if ( qword_140EEFDC0 )
          goto LABEL_13;
        qword_140EEFDC0 = (unsigned int)__ROR4__(1085440, 204);
        xmmword_140EEFDC8 = 0LL;
        qword_140EEFDD8 = 266LL;
        qword_140EEFDE0 = v4;
      }
    }
LABEL_12:
    if ( !qword_140EEFDC0 )
    {
LABEL_16:
      qword_140EEFE00 = MEMORY[0xFFFFF78000000008]
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
    qword_140EEFDE8 = 3812160LL;
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
      v15 = *(_QWORD *)(v10 + 8);
      LOBYTE(v12) = 1;
      ObpRemoveObjectRoutine(v10, v12, v13, v14);
      v10 = v15;
    }
    while ( v15 && v15 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      result = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( result == 1 )
        break;
    }
  }
  _InterlockedOr(v20, 0);
  if ( ObpRemoveObjectWait )
    return ExfUnblockPushLock((__int64)&ObpRemoveObjectWait, 0LL);
  return result;
}
