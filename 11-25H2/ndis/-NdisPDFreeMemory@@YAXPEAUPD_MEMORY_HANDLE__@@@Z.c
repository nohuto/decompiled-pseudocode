/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x140145840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1401446CC (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDFreeMemory(NDIS_PD_MEM_BLOCK *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockThisExclusive v4; // [rsp+30h] [rbp-28h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      88,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)P);
  KLockThisExclusive::KLockThisExclusive(&v4, qword_140127008);
  v2 = *(_QWORD **)P;
  if ( *(NDIS_PD_MEM_BLOCK **)(*(_QWORD *)P + 8LL) != P || (v3 = (PVOID *)*((_QWORD *)P + 1), *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *(_QWORD *)P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(P);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      89,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)P);
}
