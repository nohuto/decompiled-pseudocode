/*
 * XREFs of MouseClassEnableGlobalPort @ 0x1C000E984
 * Callers:
 *     MouseClassPlugPlayNotification @ 0x1C000EA80 (MouseClassPlugPlayNotification.c)
 * Callees:
 *     MouEnableDisablePort @ 0x1C000EFB0 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassEnableGlobalPort(__int64 a1, char a2)
{
  unsigned int v4; // edi
  unsigned int i; // r8d
  char *v6; // rsi
  char v7; // bl
  __int64 v8; // rcx

  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_10;
      v6 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i;
      if ( !v6[19] && *((_QWORD *)v6 + 1) == a1 )
        break;
    }
    if ( !v6 )
    {
LABEL_10:
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      return 3221225486LL;
    }
    v7 = v6[16];
    v6[16] = a2;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( a2 != v7 )
    {
      LOBYTE(v8) = a2;
      return (unsigned int)MouEnableDisablePort(v8, 0LL, a1, v6);
    }
  }
  return v4;
}
