/*
 * XREFs of ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1403C2140
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x14003C564 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetNumericManufacturerIds(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  const unsigned __int8 *v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  const unsigned __int8 *v6; // rcx

  v3 = 0LL;
  v4 = **((_QWORD **)this + 3);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = (const unsigned __int8 *)(v4 + 24);
  if ( v5 >= 0x80 )
    v3 = v6;
  return EDIDV1_FillProductIdManufacturerName(v3, a2, a3);
}
