/*
 * XREFs of ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1401472F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x140144650 (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDStopEC(struct PD_EC_HANDLE__ *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR *v3; // rdi
  __int64 v4; // rcx
  struct PD_EC_HANDLE__ **v5; // rax
  void *v6; // rcx
  int v7; // edx
  KLockThisExclusive v8; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (ULONG_PTR *)((char *)a1 + 24);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Cu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      *v3,
      CurrentThread);
  if ( (struct _KTHREAD *)*v3 != CurrentThread )
    ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)a1 + 2), *v3);
  KLockThisExclusive::KLockThisExclusive(&v8, qword_140127008);
  v4 = *(_QWORD *)a1;
  if ( *(struct PD_EC_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v5 = (struct PD_EC_HANDLE__ **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct PD_EC_HANDLE__ *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v8);
  v6 = (void *)*v3;
  *((_QWORD *)a1 + 2) = 0LL;
  ObfDereferenceObject(v6);
  *v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      29,
      93,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  }
  NDIS_PD_EC::`scalar deleting destructor'((char *)a1);
}
