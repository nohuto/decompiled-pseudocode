/*
 * XREFs of ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C01403A4
 * Callers:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009A598 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(DC *this, __int64 a2)
{
  __int64 result; // rax

  CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
