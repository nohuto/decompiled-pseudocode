/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x14012AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AC48 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     IsPublicPointerDevice @ 0x14012AEC4 (IsPublicPointerDevice.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x14020F678 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  void *v5; // rsi
  __int64 v6; // rcx
  CTouchProcessor *v7; // rcx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    v5 = *(void **)a2;
    if ( *(_QWORD *)(W32GetUserSessionState(this) + 3264) )
    {
      W32GetUserSessionState(v6);
      CTouchProcessor::OnRimDeviceOpened(v7, v5);
    }
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v2;
}
