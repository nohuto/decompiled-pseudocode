/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x180186BD0
 * Callers:
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18028C9BC (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180186E20 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  if ( !RtlDeleteElementGenericTable(Table, this) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
