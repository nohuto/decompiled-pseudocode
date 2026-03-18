/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1402814B8
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140078198 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1400930D8 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x14028170C (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  unsigned int v2; // edx

  BLTQUEUE::Cleanup(this);
  CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>((char *)this + 1088, v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 832));
}
