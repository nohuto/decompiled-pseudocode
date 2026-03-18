/*
 * XREFs of VidSchControlVSyncDevice @ 0x1400D4B10
 * Callers:
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1400D3D40 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateDevice @ 0x1400D48E0 (VidSchTerminateDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041A54 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041C7C (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x140042670 (-IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_V.c)
 *     ?DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x140044138 (-DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VI.c)
 *     VidSchControlVSyncAdapter @ 0x1400D4F00 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v8; // r15d
  struct _VIDSCH_GLOBAL **v9; // r14
  __int64 v10; // rbp
  unsigned int *v11; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r14d

  v4 = a4;
  v8 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10419;
    goto LABEL_18;
  }
  v9 = (struct _VIDSCH_GLOBAL **)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 32);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) )
  {
    WdLogSingleEntry2(1LL, a4, *((unsigned int *)*v9 + 10));
    WdLogGlobalForLineNumber = 10428;
LABEL_18:
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 0LL;
  }
  if ( !*(_BYTE *)(v10 + 2468) )
  {
    v4 = -3;
    v9 = (struct _VIDSCH_GLOBAL **)(a1 + 32);
  }
LABEL_3:
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1224), 1u);
  if ( a3 )
  {
    v11 = (unsigned int *)(a1 + 1328);
  }
  else
  {
    if ( a2 < 4 )
      DerementRequestVSyncReasonDevice(a2, a1, v10, v4);
    v11 = (unsigned int *)(a1 + 1328);
    DecrementRequestVSyncCount((unsigned int *)(a1 + 1328), *v9, v4);
  }
  if ( !*(_BYTE *)(v10 + 2468) )
  {
    if ( *v11 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( v4 == -3 )
  {
    v14 = 0;
    if ( *(_DWORD *)(v10 + 40) )
    {
      do
      {
        if ( !*(_DWORD *)(a1 + 4LL * v14 + 1328) )
          v8 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v10);
        ++v14;
      }
      while ( v14 < *(_DWORD *)(v10 + 40) );
      v11 = (unsigned int *)(a1 + 1328);
    }
    goto LABEL_8;
  }
  if ( !*(_DWORD *)(a1 + 4LL * v4 + 1328) )
LABEL_7:
    v8 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v10);
LABEL_8:
  if ( a3 && v8 >= 0 )
  {
    IncrementRequestVSyncCount(v11, *(struct _VIDSCH_GLOBAL **)(a1 + 32), v4);
    if ( a2 != 4 )
      IncrementRequestVSyncReasonDevice(a2, a1, v10, v4);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 1224));
  return (unsigned int)v8;
}
