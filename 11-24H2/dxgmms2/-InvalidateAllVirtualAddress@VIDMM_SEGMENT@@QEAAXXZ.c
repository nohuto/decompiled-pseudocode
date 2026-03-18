/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1401050C4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B206C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  VIDMM_SEGMENT *v2; // r14
  VIDMM_SEGMENT *v3; // rax
  _QWORD *v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v11; // rdx
  VIDMM_CPU_HOST_APERTURE *v12; // rdi
  __int64 v13; // [rsp+50h] [rbp-78h]
  _QWORD *v14; // [rsp+58h] [rbp-70h]
  _QWORD *v15; // [rsp+60h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 3968;
  }
  v2 = (VIDMM_SEGMENT *)*((_QWORD *)this + 24);
  while ( v2 != (VIDMM_SEGMENT *)((char *)this + 192) )
  {
    v3 = v2;
    v2 = *(VIDMM_SEGMENT **)v2;
    v15 = (_QWORD *)((char *)v3 + 16);
    v4 = (_QWORD *)*((_QWORD *)v3 + 2);
    if ( (_QWORD *)*v15 != v15 )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        v14 = v5 + 2;
        v6 = (_QWORD *)v5[2];
        if ( (_QWORD *)*v14 != v14 )
        {
          do
          {
            v7 = (__int64 *)*(v6 - 7);
            v6 = (_QWORD *)*v6;
            v8 = *v7;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v8 + 328, 0LL);
            *(_QWORD *)(v8 + 336) = KeGetCurrentThread();
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 136));
            if ( (*(_BYTE *)(v8 + 36) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v8;
                WdLogGlobalForLineNumber = 4018;
              }
              KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v8 + 48) + 8LL), &ApcState);
              v10 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 3), v8, 3u, 0LL, 0LL, 0LL, 0LL, 1, *(_QWORD *)v8);
              if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741558 )
              {
                g_DxgMmsBugcheckExportIndex = 1;
                WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v10, 0LL);
                WdLogGlobalForLineNumber = 195;
                JUMPOUT(0x140105372LL);
              }
              *(_BYTE *)(v8 + 36) &= ~1u;
              *(_DWORD *)(v8 + 24) |= 0x200000u;
              KeUnstackDetachProcess(&ApcState);
            }
            v13 = *(_QWORD *)v8;
            v11 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(*(_QWORD *)v8 + 192LL);
            if ( v11 )
            {
              v12 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 69);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v12, v11);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v12, *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v13 + 192));
              *(_QWORD *)(v13 + 192) = 0LL;
            }
            *(_QWORD *)(v8 + 336) = 0LL;
            ExReleasePushLockExclusiveEx(v8 + 328, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 136));
          }
          while ( v6 != v14 );
        }
      }
      while ( v4 != v15 );
    }
  }
}
