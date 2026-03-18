/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x140212BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x14020E21C (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 result; // rax
  void **v6; // rdi
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // esi

  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1301;
    return result;
  }
  v6 = (void **)((char *)this + 24);
  if ( a2->PartitionCount != *((_DWORD *)this + 3) )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v6);
    v8 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL, v7);
    *v6 = (void *)v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1311;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for virtual GPUs",
        1311LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  v10 = ADAPTER_RENDER::DdiSetGpuPartitionCount(*((ADAPTER_RENDER **)this + 4), a2, a3);
  if ( v10 < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v6);
    *((_DWORD *)this + 3) = 0;
    *v6 = 0LL;
  }
  return (unsigned int)v10;
}
