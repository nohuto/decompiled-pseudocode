/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x14013A820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1401397E4 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDFreeBufferSet(_QWORD *P)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  int v5; // edx
  _QWORD *v6; // rsi
  NDIS_PD_MEM_BLOCK *v7; // rbp
  KLockThisExclusive v8; // [rsp+40h] [rbp-38h] BYREF

  v2 = P;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      83,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)P);
  KLockThisExclusive::KLockThisExclusive(&v8, qword_14011CF58);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v8);
  do
  {
    v6 = v2 + 8;
    v7 = (NDIS_PD_MEM_BLOCK *)v2;
    v2 = (_QWORD *)v2[8];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        29,
        84,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)P,
        (char)v7);
    }
    *v6 = 0LL;
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v7);
  }
  while ( v2 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      85,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)P);
}
