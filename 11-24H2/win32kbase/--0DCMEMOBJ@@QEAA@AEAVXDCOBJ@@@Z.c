/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140175260
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C52C8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, struct XDCOBJ *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = v3;
  v5 = HmgAllocFast(v3);
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = *(_QWORD *)this;
    *(_QWORD *)(v6 + 1112) = 0LL;
    *(_QWORD *)(v6 + 1120) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*(DC **)a2, this);
  }
  return this;
}
