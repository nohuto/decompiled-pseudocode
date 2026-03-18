/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1400D9780
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x140022AC0 (VidSchiSendToExecutionQueue.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D94C0 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiGetVSyncSuspended @ 0x140038208 (VidSchiGetVSyncSuspended.c)
 *     VidSchiSetVSyncSuspended @ 0x140039DBC (VidSchiSetVSyncSuspended.c)
 *     VidSchiControlVSync @ 0x1400D9A20 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // bp
  int v5; // edi
  char VSyncSuspended; // di
  char v7; // al
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r9

  v2 = a2;
  if ( a1 )
  {
    if ( a2 >= *((_DWORD *)a1 + 10) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 10013;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL);
      return 0;
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1344), 1u);
      v4 = 0;
      if ( (unsigned int)v2 >= *((_DWORD *)a1 + 10) )
      {
        WdLogSingleEntry1(1LL, v2);
        WdLogGlobalForLineNumber = 9936;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL);
      }
      else
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1344), 1u);
        v5 = *((_DWORD *)a1 + 616);
        ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1344));
        if ( _bittest(&v5, v2) )
        {
          VSyncSuspended = VidSchiGetVSyncSuspended((__int64)a1, v2);
          if ( VSyncSuspended )
          {
            v11 = *((unsigned __int8 *)a1 + 2468);
            if ( (_BYTE)v11 )
              v12 = *((_DWORD *)a1 + v2 + 520);
            else
              v12 = *((_DWORD *)a1 + 520);
            if ( v12 )
            {
              v13 = (unsigned int)v2;
              if ( !(_BYTE)v11 )
                v13 = 4294967293LL;
              LOBYTE(v11) = 1;
              VidSchiControlVSync(a1, v11, 65539LL, v13);
            }
            else
            {
              VidSchiSetVSyncSuspended((__int64)a1, v2, 0);
            }
          }
          v7 = *((_BYTE *)a1 + 2468);
          if ( v7 )
            v4 = *((_BYTE *)a1 + v2 + 2064);
          else
            v4 = *((_BYTE *)a1 + 2064);
          if ( v4 && !VSyncSuspended )
          {
            if ( v7 )
              _InterlockedExchange((volatile __int32 *)a1 + v2 + 632, 1);
            else
              _InterlockedExchange((volatile __int32 *)a1 + 632, 1);
          }
          if ( *((_BYTE *)a1 + 59) && v4 )
          {
            v9 = *((_QWORD *)a1 + 2);
            v10 = 0LL;
            if ( (*(_DWORD *)(v9 + 2976) & 0x10) != 0 )
              v10 = (unsigned int)v2;
            if ( (unsigned int)v10 < 0x10 )
            {
              if ( *(_DWORD *)(v9 + 4 * v10 + 3152) )
                VidSchiSetInterruptTargetPresentId(a1, v2, 0, 0LL, 1, 0);
            }
          }
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1344));
      return v4;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10004;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL);
    return 0;
  }
}
