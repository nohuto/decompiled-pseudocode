/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102FF4
 * Callers:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     VidSchSwitchFromContext @ 0x1400E42E0 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1400E44D0 (VidSchSwitchFromDevice.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)a2 + 8);
  if ( (*((_DWORD *)a2 + 6) & 0x20000000) != 0 )
  {
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 800);
      if ( v3 )
        VidSchSwitchFromDevice(v3);
    }
  }
  else if ( v2 && (*(_DWORD *)(v2 + 392) & 0x10) == 0 )
  {
    v4 = *(_QWORD *)(v2 + 256);
    if ( v4 )
      VidSchSwitchFromContext(v4);
  }
}
