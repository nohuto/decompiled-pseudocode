/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x140104CE0
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010B060 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v11; // rcx

  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 15) = a4;
  v5 = 4LL * a4;
  if ( !is_mul_ok(a4, 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x36346956u, 258LL);
  v7 = 0;
  *((_QWORD *)this + 5) = v6;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 14);
    if ( v8 != 1 )
    {
      do
      {
        v9 = v7++;
        *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v9) = v7;
        v8 = *((_DWORD *)this + 14);
      }
      while ( v7 < v8 - 1 );
    }
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(v8 - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1400817D4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 113;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
}
