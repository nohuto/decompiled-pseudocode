/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1400D4F00
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x140002B20 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003B460 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncDevice @ 0x1400D4B10 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041A54 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041C7C (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041DF0 (-DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x140042768 (-IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiControlVSync @ 0x1400D5680 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi
  struct _VIDSCH_GLOBAL *v13; // rdx
  int v14; // r8d
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rcx

  v4 = 0;
  v5 = a4;
  v9 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10328;
    goto LABEL_16;
  }
  v10 = *((unsigned int *)a1 + 10);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= (unsigned int)v10 )
  {
    WdLogSingleEntry2(1LL, a4, v10);
    WdLogGlobalForLineNumber = 10336;
LABEL_16:
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    return 0LL;
  }
  if ( !*((_BYTE *)a1 + 2468) )
    v5 = 4294967293LL;
LABEL_3:
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1344), 1u);
  if ( a3 )
  {
    v12 = (unsigned int *)((char *)a1 + 2080);
  }
  else
  {
    DerementRequestVSyncReasonAdapter(a2, (__int64)a1, v5);
    v12 = (unsigned int *)((char *)a1 + 2080);
    DecrementRequestVSyncCount((unsigned int *)a1 + 520, v13, v14);
  }
  if ( !*((_BYTE *)a1 + 2468) )
  {
    if ( *v12 )
      goto LABEL_7;
    v18 = 4294967293LL;
LABEL_23:
    LOBYTE(v11) = a3;
    v9 = VidSchiControlVSync(a1, v11, a3 != 0 ? 0x10000 : 0, v18);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 == -3 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      do
      {
        if ( !*((_DWORD *)a1 + v4 + 520) )
        {
          LOBYTE(v11) = a3;
          v9 = VidSchiControlVSync(a1, v11, a3 != 0 ? 0x10000 : 0, v4);
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 10) );
      v12 = (unsigned int *)((char *)a1 + 2080);
    }
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + v5 + 520) )
  {
    v18 = (unsigned int)v5;
    goto LABEL_23;
  }
LABEL_7:
  if ( a3 )
  {
    if ( v9 >= 0 )
    {
      IncrementRequestVSyncCount(v12, a1, v5);
      IncrementRequestVSyncReasonAdapter(a2, v16, v17);
    }
  }
  ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1344));
  return (unsigned int)v9;
}
