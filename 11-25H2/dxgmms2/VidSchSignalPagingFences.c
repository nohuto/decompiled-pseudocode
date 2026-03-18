/*
 * XREFs of VidSchSignalPagingFences @ 0x1400F3440
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14002B6D0 (VidSchSignalSyncObjectsFromCpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  int v8; // r8d
  _QWORD *v9; // rdx
  __int64 *v10; // r9
  unsigned int v11; // edi
  __int64 v13; // rax

  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 55) )
  {
    if ( a5 == -1 )
    {
      v8 = *(_DWORD *)(a1 + 76);
      if ( a6 )
        v10 = *(__int64 **)(a1 + 344);
      else
        v10 = *(__int64 **)(a1 + 320);
    }
    else
    {
      v8 = 1;
      if ( a6 )
        v13 = *(_QWORD *)(a1 + 344);
      else
        v13 = *(_QWORD *)(a1 + 320);
      v10 = (__int64 *)(v13 + 8LL * a5);
    }
    return VidSchSignalSyncObjectsFromGpu(v11, (__int64)v9, v8, v10, 1u, (__int64)a2, 0, a3, 0);
  }
  v9 = *(_QWORD **)(a1 + 336);
  if ( *v9 )
  {
    if ( a5 == -1 )
    {
      v11 = *(_DWORD *)(a1 + 76);
    }
    else
    {
      v11 = 1;
      v9 += a5;
    }
    return VidSchSignalSyncObjectsFromGpu(v11, (__int64)v9, v8, v10, 1u, (__int64)a2, 0, a3, 0);
  }
  return VidSchSignalSyncObjectsFromCpu(1u, a2, 0, (char *)a3);
}
