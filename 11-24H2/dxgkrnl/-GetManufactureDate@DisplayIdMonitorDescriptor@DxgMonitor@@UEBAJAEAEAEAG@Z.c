/*
 * XREFs of ?GetManufactureDate@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x140280E40
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1400970C4 (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetManufactureDate(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  int ManufactureDate; // eax
  unsigned int v4; // ebx
  __int64 result; // rax

  ManufactureDate = DisplayID_GetManufactureDate((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3);
  v4 = ManufactureDate;
  if ( ManufactureDate >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, ManufactureDate);
  result = v4;
  WdLogGlobalForLineNumber = 364;
  return result;
}
