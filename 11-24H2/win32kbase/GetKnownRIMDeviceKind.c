/*
 * XREFs of GetKnownRIMDeviceKind @ 0x140143F70
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020C73C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14020D128 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKnownRIMDeviceKind(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d
  int v3; // edx
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(_QWORD *)(a1 + 32);
        if ( (*(_DWORD *)(v4 + 256) & 0x80u) != 0 )
        {
          switch ( *(_DWORD *)(*(_QWORD *)(v4 + 528) + 24LL) )
          {
            case 1:
            case 2:
            case 3:
            case 4:
              return 3;
            case 5:
            case 6:
              return 5;
            case 7:
              return 4;
          }
        }
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v2;
}
