/*
 * XREFs of ??_GPositionAdjustmentHistory@@UEAAPEAXI@Z @ 0x180219800
 * Callers:
 *     <none>
 * Callees:
 *     ??1PositionAdjustmentHistory@@UEAA@XZ @ 0x1802CBC94 (--1PositionAdjustmentHistory@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PositionAdjustmentHistory *__fastcall PositionAdjustmentHistory::`scalar deleting destructor'(
        PositionAdjustmentHistory *this,
        char a2)
{
  PositionAdjustmentHistory::~PositionAdjustmentHistory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
