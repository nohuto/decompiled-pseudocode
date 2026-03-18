/*
 * XREFs of ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1400CD238
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400CD020 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 * Callees:
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidMmRecordLock(struct _VIDMM_GLOBAL_STATISTICS *a1, char a2, __int64 a3, int a4)
{
  int v7; // esi

  v7 = a2 & 1;
  if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 108);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 109);
    if ( (a2 & 0x10) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 110);
    if ( (a2 & 2) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 111);
    if ( a2 < 0 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 112);
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 114);
  }
  else
  {
    ++*((_DWORD *)a1 + 108);
    if ( v7 )
      ++*((_DWORD *)a1 + 109);
    if ( (a2 & 0x10) != 0 )
      ++*((_DWORD *)a1 + 110);
    if ( (a2 & 2) != 0 )
      ++*((_DWORD *)a1 + 111);
    if ( a2 < 0 )
      ++*((_DWORD *)a1 + 112);
    if ( a4 )
      ++*((_DWORD *)a1 + 114);
  }
}
