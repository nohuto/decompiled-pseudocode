/*
 * XREFs of UpdateGraphicsDeviceList @ 0x14004CAB0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x140147E70 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x140156D70 (SafeDisableMDEV.c)
 *     xxxUserResetDisplayDevice @ 0x14019E84C (xxxUserResetDisplayDevice.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
