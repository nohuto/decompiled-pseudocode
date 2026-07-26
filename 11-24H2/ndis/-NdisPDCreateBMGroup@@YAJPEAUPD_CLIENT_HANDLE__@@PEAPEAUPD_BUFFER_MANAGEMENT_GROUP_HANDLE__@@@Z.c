/*
 * XREFs of ?NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x14013A3D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateBMGroup(struct PD_CLIENT_HANDLE__ *a1, struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **a2)
{
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v2; // rsi
  unsigned int v4; // edi
  _QWORD *PoolWithTag; // rax
  struct PD_CLIENT_HANDLE__ *v6; // rbx
  struct KPushLockBase *v7; // rdx
  _QWORD *v8; // rax
  struct PD_CLIENT_HANDLE__ **v9; // rcx
  KLockThisExclusive v11; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      70,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  }
  v4 = 0;
  *v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6D41444Eu);
  v6 = (struct PD_CLIENT_HANDLE__ *)PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = qword_14011CF58;
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    v8 = PoolWithTag + 3;
    v8[1] = v8;
    *v8 = v8;
    *((_QWORD *)v6 + 6) = (char *)v6 + 40;
    *((_QWORD *)v6 + 5) = (char *)v6 + 40;
    *((_QWORD *)v6 + 2) = a1;
    KLockThisExclusive::KLockThisExclusive(&v11, v7);
    v9 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 5);
    if ( *v9 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 32) )
      __fastfail(3u);
    *((_QWORD *)v6 + 1) = v9;
    *(_QWORD *)v6 = (char *)a1 + 32;
    *v9 = v6;
    *((_QWORD *)a1 + 5) = v6;
    KLockHolder::~KLockHolder(&v11);
    *v2 = v6;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x47u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*v2,
      v4);
  return v4;
}
