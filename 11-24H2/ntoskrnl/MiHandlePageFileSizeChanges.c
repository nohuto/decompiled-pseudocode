/*
 * XREFs of MiHandlePageFileSizeChanges @ 0x1403EE2E4
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiProcessingPageExtendComplete @ 0x1403EE778 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReduction @ 0x1403EF264 (MiAttemptPageFileReduction.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiExtendPagingFiles @ 0x1407EF718 (MiExtendPagingFiles.c)
 */

__int64 __fastcall MiHandlePageFileSizeChanges(__int64 a1)
{
  _QWORD **v2; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  struct _KEVENT *v6; // rbx
  __int128 v7; // xmm0
  KIRQL v8; // al
  struct _KEVENT *v9; // rcx
  _OWORD v11[5]; // [rsp+20h] [rbp-78h] BYREF
  struct _KEVENT *v12; // [rsp+70h] [rbp-28h]

  memset_0(v11, 0, 0x58uLL);
  v2 = (_QWORD **)(a1 + 1960);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == v2 )
      return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v3);
    if ( (_QWORD **)v4[1] != v2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v6 = (struct _KEVENT *)(v4 - 1);
    v5[1] = v2;
    if ( v6[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v3);
        MiAttemptPageFileReduction(v6);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
        v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
      }
      if ( (v6[3].Header.SignalState & 0x10000000) == 0 )
      {
        v9 = v6 + 2;
LABEL_16:
        KeSetEvent(v9, 0, 0);
      }
    }
    else
    {
      v11[0] = *(_OWORD *)&v6->Header.Lock;
      v11[1] = *(_OWORD *)&v6->Header.WaitListHead.Blink;
      v11[2] = v6[1].Header.WaitListHead;
      v11[3] = *(_OWORD *)&v6[2].Header.Lock;
      v7 = *(_OWORD *)&v6[2].Header.WaitListHead.Blink;
      v12 = v6;
      v11[4] = v7;
      v6[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v3);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
      {
        MiExtendPagingFiles(v11);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
      }
      v8 = MiProcessingPageExtendComplete(v11, v6, a1);
      --*(_DWORD *)(a1 + 2444);
      v3 = v8;
      if ( *(_DWORD *)(a1 + 2440) )
      {
        v9 = (struct _KEVENT *)(a1 + 2448);
        goto LABEL_16;
      }
    }
  }
}
