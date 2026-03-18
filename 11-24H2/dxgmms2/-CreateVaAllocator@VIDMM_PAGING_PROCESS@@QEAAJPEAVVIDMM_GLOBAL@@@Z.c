/*
 * XREFs of ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009A0EC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400A9028 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  __int64 i; // rdi
  CVirtualAddressAllocator *v5; // rax
  CVirtualAddressAllocator *v6; // r10
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v11; // rcx

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40936) & 0xE) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1736); i = (unsigned int)(i + 1) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5029) + 8 * i) + 476LL) & 0xD) != 0 )
      {
        v5 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
        if ( v5 )
          v6 = CVirtualAddressAllocator::CVirtualAddressAllocator(v5);
        else
          v6 = 0LL;
        *((_QWORD *)this + i + 4) = v6;
        if ( !v6 )
        {
          _InterlockedIncrement(&dword_14008186C);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 9523;
          DxgkLogInternalTriageEvent(v11, 262145LL);
          return 3221225495LL;
        }
        v7 = CVirtualAddressAllocator::InitializeVaAllocator(
               v6,
               1LL << *((_DWORD *)a2 + 10232),
               4096 << *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5029) + 8 * i) + 108LL),
               a2,
               g_pVidMmSystemProcess);
        v8 = v7;
        if ( v7 < 0 )
        {
          WdLogSingleEntry2(1LL, *((_QWORD *)this + i + 4), v7);
          WdLogGlobalForLineNumber = 9533;
          DxgkLogInternalTriageEvent(v9, 0x40000LL);
          return v8;
        }
      }
    }
  }
  return 0LL;
}
