/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x14013A2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDCloseQueue(struct PD_QUEUE_HANDLE__ ***a1)
{
  struct PD_QUEUE_HANDLE__ **v2; // rcx
  struct PD_QUEUE_HANDLE__ **v3; // rax
  KLockThisExclusive v4; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      96,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  KLockThisExclusive::KLockThisExclusive(&v4, qword_14011CF58);
  v2 = *a1;
  if ( (*a1)[1] != (struct PD_QUEUE_HANDLE__ *)a1 || (v3 = a1[1], *v3 != (struct PD_QUEUE_HANDLE__ *)a1) )
    __fastfail(3u);
  *v3 = (struct PD_QUEUE_HANDLE__ *)v2;
  v2[1] = (struct PD_QUEUE_HANDLE__ *)v3;
  *a1 = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(a1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      97,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
}
