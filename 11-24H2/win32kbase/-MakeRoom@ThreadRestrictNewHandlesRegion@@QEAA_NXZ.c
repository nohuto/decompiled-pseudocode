/*
 * XREFs of ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x1400E2118
 * Callers:
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C1DD0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x1401C2448 (PREALLOCMEM2.c)
 */

char __fastcall ThreadRestrictNewHandlesRegion::MakeRoom(ThreadRestrictNewHandlesRegion *this)
{
  __int64 v1; // rax
  _OWORD *v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rsi
  _OWORD *v7; // rax

  v1 = *((_QWORD *)this + 4);
  if ( *((_QWORD *)this + 3) != v1 )
    return 1;
  v4 = (_OWORD *)((char *)this + 48);
  v5 = (_OWORD *)*((_QWORD *)this + 5);
  v6 = 2 * v1;
  if ( v5 == v4 )
  {
    v7 = (_OWORD *)PALLOCMEM((unsigned int)(8 * v1), 0x6E727447u);
    if ( v7 )
    {
      *v7 = *v4;
      v7[1] = v4[1];
LABEL_6:
      *((_QWORD *)this + 5) = v7;
      *((_QWORD *)this + 4) = v6;
      return 1;
    }
  }
  else
  {
    v7 = (_OWORD *)PREALLOCMEM2(v5);
    if ( v7 )
      goto LABEL_6;
  }
  return 0;
}
