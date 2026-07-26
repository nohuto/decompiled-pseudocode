/*
 * XREFs of ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140017C90
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x140017150 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ndisNblTrackerAreNblsOutstandingOnComponent @ 0x140017CF0 (ndisNblTrackerAreNblsOutstandingOnComponent.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisNblTrackerVerifyNoNblsHeld(ULONG_PTR BugCheckParameter3)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
  {
    if ( (unsigned __int8)ndisNblTrackerAreNblsOutstandingOnComponent(BugCheckParameter3, i) )
    {
      if ( !ndisNblTrackerLeakedNblDisposition )
        ndisBugCheckEx(0x27uLL, 1uLL, BugCheckParameter3, 0LL);
      if ( ndisNblTrackerLeakedNblDisposition == 2 && !(_BYTE)KdDebuggerNotPresent )
        __int2c();
      return;
    }
  }
}
