/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C02084E8
 * Callers:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C000B2B0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008C630 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CBD8 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C018E700 (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C018EFB4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194448 (RIMIDECreatePointerDeviceInfo.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C01F7BC8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // r14
  char *v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r8

  v3 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v4 = dword_1C028FE70 * (unsigned int)(unsigned __int16)a1;
    v5 = gpKernelHandleTable;
    v8 = a1 >> 16;
    v6 = (char *)qword_1C028FE68 + (unsigned int)v4;
    v7 = 3 * ((__int64)(unsigned int)v4 >> 5);
    LOWORD(v8) = v8 & 0x7FFF;
    if ( ((_WORD)v8 == *((_WORD *)v6 + 13)
       || (_WORD)v8 == 0x7FFF
       || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v4, a2, v8))
      && (v6[25] & 1) == 0
      && v6[24] == 12 )
    {
      return v5[v7];
    }
  }
  return v3;
}
