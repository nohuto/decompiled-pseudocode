/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140141924
 * Callers:
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 * Callees:
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        __int64 a3,
        struct _RECTL *a4)
{
  struct EPATHOBJ *v5; // rdx
  RGNMEMOBJ *v6; // rcx
  unsigned int v7; // r8d

  Prediction::CFixPred::CFixPred(this);
  RGNMEMOBJ::vCreate(v6, v5, v7, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
