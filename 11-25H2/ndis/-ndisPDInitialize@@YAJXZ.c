/*
 * XREFs of ?ndisPDInitialize@@YAJXZ @ 0x140197BD8
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     ??0KPushLock@@QEAA@XZ @ 0x1401735C0 (--0KPushLock@@QEAA@XZ.c)
 */

__int64 ndisPDInitialize(void)
{
  KPushLock *PoolWithTag; // rax
  KPushLock *v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  PoolWithTag = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    KPushLock::KPushLock(PoolWithTag);
    v3[1029] = v2;
    ++v3;
    v3[1] = v3;
    *v3 = v3;
    *(_DWORD *)&v1[3].m_Lock.0 = 0x10000;
    v1[4].m_Lock.Value = (unsigned __int64)&v1[5];
    RtlClearAllBits((PRTL_BITMAP)&v1[3]);
    RtlSetBit((PRTL_BITMAP)&v1[3], 0);
    qword_140127008 = v1;
    v1[1031].m_Lock.Value = (unsigned __int64)&v1[1030];
    v1[1030].m_Lock.Value = (unsigned __int64)&v1[1030];
    return 0LL;
  }
  else
  {
    qword_140127008 = 0LL;
    return 3221225626LL;
  }
}
