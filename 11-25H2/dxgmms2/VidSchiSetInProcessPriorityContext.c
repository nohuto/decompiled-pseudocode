/*
 * XREFs of VidSchiSetInProcessPriorityContext @ 0x140045334
 * Callers:
 *     VidSchSetInProcessPriorityContext @ 0x140106E80 (VidSchSetInProcessPriorityContext.c)
 * Callees:
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1400463F4 (McTemplateK0pdd_EtwWriteTransfer.c)
 *     VidSchiNotifyContextPriorityChange @ 0x140106458 (VidSchiNotifyContextPriorityChange.c)
 */

__int64 __fastcall VidSchiSetInProcessPriorityContext(__int64 a1, int a2)
{
  char v4; // di
  __int64 v5; // rcx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // eax
  __int64 v11; // r9
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1984), &LockHandle);
  v8 = *(_DWORD *)(a1 + 408);
  if ( v8 != a2 )
  {
    v4 = 1;
    if ( bTracingEnabled && (byte_140081241 & 1) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      if ( !v11 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        LODWORD(v11) = a1;
      McTemplateK0pdd_EtwWriteTransfer(v8, v6, v7, v11, v8, a2);
    }
    v9 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 408) = a2;
    if ( (v9 & 1) != 0 )
    {
      if ( a2 == 1 )
      {
        v12 = (_QWORD *)(a1 + 416);
        v13 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v14 = *v13;
          if ( *(_QWORD **)(*v13 + 8LL) == v13 )
          {
            *v12 = v14;
            *(_QWORD *)(a1 + 424) = v13;
            *(_QWORD *)(v14 + 8) = v12;
            *v13 = v12;
            goto LABEL_5;
          }
        }
        else
        {
          v15 = (_QWORD *)v13[1];
          if ( (_QWORD *)*v15 == v13 )
          {
            *v12 = v13;
            *(_QWORD *)(a1 + 424) = v15;
            *v15 = v12;
            v13[1] = v12;
            goto LABEL_5;
          }
        }
      }
      else
      {
        v16 = (_QWORD *)(a1 + 416);
        v17 = *(_QWORD *)(a1 + 416);
        if ( *(_QWORD *)(v17 + 8) == a1 + 416 )
        {
          v18 = *(_QWORD **)(a1 + 424);
          if ( (_QWORD *)*v18 == v16 )
          {
            *v18 = v17;
            *(_QWORD *)(v17 + 8) = v18;
            *(_QWORD *)(a1 + 424) = 0LL;
            *v16 = 0LL;
            goto LABEL_5;
          }
        }
      }
      __fastfail(3u);
    }
  }
LABEL_5:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    VidSchiNotifyContextPriorityChange(a1);
  return 0LL;
}
