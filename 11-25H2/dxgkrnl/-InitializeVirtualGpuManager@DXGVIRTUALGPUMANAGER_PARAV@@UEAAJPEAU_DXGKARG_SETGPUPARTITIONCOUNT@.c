/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x140210040
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  if ( a2->PartitionCount > *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 4800LL) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 862;
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 867;
    return 3221225485LL;
  }
  if ( a2->PartitionCount > *((_DWORD *)this + 3) )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
    v6 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v6 = -1LL;
    v7 = operator new[](v6, 0x4B677844u, 256LL, v5);
    *((_QWORD *)this + 3) = v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 876;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for virtual GPUs",
        876LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
