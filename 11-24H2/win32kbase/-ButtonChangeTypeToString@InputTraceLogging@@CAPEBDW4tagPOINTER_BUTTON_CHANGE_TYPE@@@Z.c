/*
 * XREFs of ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400AF81C
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400ADA74 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400E2AF8 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x140104C6C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x14012CC40 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x14012F8DC (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1401EAD30 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x140200490 (-GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ButtonChangeTypeToString(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "ThirdDown";
    if ( !a1 )
      return "None";
    v2 = a1 - 1;
    if ( !v2 )
      return "FirstDown";
    v3 = v2 - 1;
    if ( !v3 )
      return "FirstUp";
    v4 = v3 - 1;
    if ( !v4 )
      return "SecondDown";
    if ( v4 == 1 )
      return "SecondUp";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "ThirdUp";
  v6 = v5 - 1;
  if ( !v6 )
    return "FourthDown";
  v7 = v6 - 1;
  if ( !v7 )
    return "FourthUp";
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      return "FifthUp";
    return "UNKNOWN";
  }
  return "FifthDown";
}
