/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1409CF320
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140372210 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
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
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 *v18; // [rsp+20h] [rbp-38h]
  ULONG_PTR *v19; // [rsp+28h] [rbp-30h] BYREF

  if ( !qword_140EEFB30 )
  {
    v14 = __rdtsc();
    v15 = 41929663 * ((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) >> 4);
    qword_140EEFB30 = v15;
    if ( !v15 )
      qword_140EEFB30 = 1LL;
    v16 = __rdtsc();
    qword_140EEFB38 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) >> 4)) ^ 0xC3FLL;
    qword_140EEFB40 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140EEFB40 )
  {
    v18 = &xmmword_140FC63E0;
    v19 = &xmmword_140FC62A0;
    if ( !qword_140EEFB48 )
    {
      if ( !(_DWORD)xmmword_140FC62B0 )
        goto LABEL_12;
      qword_140EEFB48 = (unsigned int)KiTableInformation;
    }
    if ( (_DWORD)xmmword_140FC62B0 && (_BYTE)KdDebuggerNotPresent )
    {
      v0 = 0;
      v1 = &v19;
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
      if ( v0 != qword_140EEFB48 )
      {
        if ( qword_140EEFB00 )
          goto LABEL_13;
        qword_140EEFB00 = (unsigned int)__ROR4__(1085440, 204);
        xmmword_140EEFB08 = 0LL;
        qword_140EEFB18 = 266LL;
        qword_140EEFB20 = v4;
      }
    }
LABEL_12:
    if ( !qword_140EEFB00 )
    {
LABEL_16:
      qword_140EEFB40 = MEMORY[0xFFFFF78000000008]
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
    qword_140EEFB28 = 3812160LL;
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
      v12 = *(_QWORD *)(v10 + 8);
      ObpRemoveObjectRoutine(v10, 1);
      v10 = v12;
    }
    while ( v12 && v12 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      result = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( result == 1 )
        break;
    }
  }
  _InterlockedOr(v17, 0);
  if ( ObpRemoveObjectWait )
    return ExfUnblockPushLock((__int64)&ObpRemoveObjectWait, 0LL);
  return result;
}
