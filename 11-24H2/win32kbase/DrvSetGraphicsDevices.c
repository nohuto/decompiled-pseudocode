/*
 * XREFs of DrvSetGraphicsDevices @ 0x14004C8A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14004B01C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(size_t *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  StringCchCopyW(*(unsigned __int16 **)(v2 + 2896), *(unsigned int *)(v2 + 2904), a1);
  if ( UserIsConsoleConnection() )
  {
    *(_DWORD *)(v2 + 1180) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 1176) = 0;
    *(_DWORD *)(v2 + 1256) = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1LL);
  v4 = *(_QWORD *)(v2 + 1768);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 1573024));
  return result;
}
