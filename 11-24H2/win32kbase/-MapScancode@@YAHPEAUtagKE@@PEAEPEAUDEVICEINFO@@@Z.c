/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1400C8800
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1400C88E8 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, unsigned __int8 *a2, struct DEVICEINFO *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int16 v9; // bx
  __int16 *i; // rax
  __int16 v11; // ax

  if ( (unsigned int)IsRemoteConnection() )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v6) + 12896) )
  {
    v9 = *(unsigned __int8 *)a1 | (*a2 << 8);
    for ( i = (__int16 *)(*(_QWORD *)(W32GetUserSessionState(v7) + 12896) + 12LL); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == v9 )
      {
        v11 = *i;
        *(_BYTE *)a1 = v11;
        *a2 = HIBYTE(v11);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
