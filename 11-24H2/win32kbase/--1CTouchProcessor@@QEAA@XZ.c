/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1400D0A6C
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400D08EC (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x14020DD24 (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1401486A0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x140152E4C (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(char **this)
{
  *this = (char *)&CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  GreDeleteFastMutex(this[16]);
  this[16] = 0LL;
  this[17] = 0LL;
  tagDomLock::LockUnInitialize((tagDomLock *)(this + 4));
  *this = (char *)&CBaseProcessor::`vftable';
}
