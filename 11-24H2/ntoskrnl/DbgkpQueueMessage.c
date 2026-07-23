/*
 * XREFs of DbgkpQueueMessage @ 0x1408F3750
 * Callers:
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpQueueMessage(PVOID Object, char *a2, __int64 a3, int a4, PRKEVENT Event)
{
  __int64 v10; // r12
  __int64 Pool2; // rax
  _BYTE *v12; // r14
  _OWORD *v13; // rbx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  struct _FAST_MUTEX *v18; // r12
  struct _LIST_ENTRY *Blink; // rcx
  int v20; // edi
  __int128 v22; // xmm1
  int v23; // ecx
  int v24; // [rsp+30h] [rbp-1C8h]
  _BYTE v25[16]; // [rsp+40h] [rbp-1B8h] BYREF
  struct _KEVENT v26; // [rsp+50h] [rbp-1A8h] BYREF
  int v27; // [rsp+8Ch] [rbp-16Ch]

  memset_0(v25, 0, 0x168uLL);
  v10 = 2LL;
  v24 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    Pool2 = ExAllocatePool2(0x41uLL, 0x168uLL, 0x45676244u);
    v12 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 76) = a4 | 4;
    ObfReferenceObjectWithTag(Object, 0x4F676244u);
    ObfReferenceObjectWithTag(a2, 0x4F676244u);
    *((_QWORD *)v12 + 10) = KeGetCurrentThread();
  }
  else
  {
    v27 = a4;
    v12 = v25;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v23 = *(_DWORD *)(a3 + 40);
    Event = (PRKEVENT)*((_QWORD *)Object + 97);
    if ( (unsigned int)(v23 - 1) <= 1 && (a2[1440] & 0x40) != 0 )
      Event = 0LL;
    if ( v23 == 5 )
    {
      if ( ((unsigned __int8)a4 & (unsigned __int8)a2[1440] & 0x40) != 0 )
        Event = 0LL;
    }
    else if ( (v23 == 3 || v23 == 4) && a2[1440] < 0 )
    {
      Event = 0LL;
    }
    KeInitializeEvent(&v26, SynchronizationEvent, 0);
  }
  v13 = v12 + 88;
  *((_QWORD *)v12 + 7) = Object;
  v14 = v12 + 88;
  *((_QWORD *)v12 + 8) = a2;
  v15 = (_OWORD *)a3;
  v16 = 2LL;
  do
  {
    *v14 = *v15;
    v14[1] = v15[1];
    v14[2] = v15[2];
    v14[3] = v15[3];
    v14[4] = v15[4];
    v14[5] = v15[5];
    v14[6] = v15[6];
    v14 += 8;
    v17 = v15[7];
    v15 += 8;
    *(v14 - 1) = v17;
    --v16;
  }
  while ( v16 );
  *v14 = *v15;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)(a2 + 1288);
  if ( Event )
  {
    v18 = (struct _FAST_MUTEX *)&Event[1];
    ExAcquireFastMutex((PKGUARDED_MUTEX)&Event[1]);
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      v20 = -1073740972;
    }
    else
    {
      Blink = Event[3].Header.WaitListHead.Blink;
      if ( Blink->Flink != &Event[3].Header.WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)Event + 80;
      *((_QWORD *)v12 + 1) = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
      Event[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
      if ( !v24 )
        KeSetEvent(Event, 0, 0);
      v20 = 0;
    }
    KeReleaseGuardedMutex(v18);
    v10 = 2LL;
  }
  else
  {
    v20 = -1073740973;
  }
  if ( v24 )
  {
    if ( v20 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(v12 + 16, Executive, 0, 0, 0LL);
      v20 = *((_DWORD *)v12 + 18);
      do
      {
        *(_OWORD *)a3 = *v13;
        *(_OWORD *)(a3 + 16) = v13[1];
        *(_OWORD *)(a3 + 32) = v13[2];
        *(_OWORD *)(a3 + 48) = v13[3];
        *(_OWORD *)(a3 + 64) = v13[4];
        *(_OWORD *)(a3 + 80) = v13[5];
        *(_OWORD *)(a3 + 96) = v13[6];
        a3 += 128LL;
        v22 = v13[7];
        v13 += 8;
        *(_OWORD *)(a3 - 16) = v22;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)a3 = *v13;
    }
  }
  return (unsigned int)v20;
}
