/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009EFF4
 * Callers:
 *     ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x140091570 (-SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this)
{
  int v2; // edi
  char *v3; // r13
  char *v4; // rbx
  char *v5; // r12
  _QWORD **v6; // r12
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  _QWORD **v9; // r15
  _QWORD *v10; // r14
  struct VIDMM_ALLOC *v11; // rdx
  __int64 v12; // r8
  VIDMM_SEGMENT *v14; // r14
  char *v15; // rsi
  int v16; // eax
  VIDMM_SEGMENT *v17; // r14
  char *v18; // rsi
  int v19; // eax
  VIDMM_PHYSICAL_ADAPTER *v20; // [rsp+50h] [rbp-98h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-90h] BYREF
  struct _KAPC_STATE v22; // [rsp+88h] [rbp-60h] BYREF

  v2 = 0;
  v3 = (char *)this + 192;
  v4 = (char *)*((_QWORD *)this + 24);
  v20 = *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 40232LL)
                                   + 8LL * *((unsigned __int16 *)this + 210));
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == v3 )
      break;
    v4 = *(char **)v4;
    v6 = (_QWORD **)(v5 + 16);
    v7 = *v6;
    while ( 1 )
    {
      v8 = v7;
      if ( v7 == v6 )
        break;
      v7 = (_QWORD *)*v7;
      v9 = (_QWORD **)(v8 + 2);
      v10 = *v9;
      while ( v10 != v9 )
      {
        v11 = (struct VIDMM_ALLOC *)(v10 - 7);
        v10 = (_QWORD *)*v10;
        v12 = **(_QWORD **)v11;
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 392) + 16LL) || (**(_DWORD **)(v12 + 392) & 0x20000) != 0)
          && *(_DWORD *)(v12 + 184) )
        {
          return (unsigned int)-1071775486;
        }
        if ( *(_DWORD *)(v12 + 184) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 3), v11);
      }
    }
  }
  v14 = (VIDMM_SEGMENT *)*((_QWORD *)this + 1);
  while ( v14 != (VIDMM_SEGMENT *)((char *)this + 8) )
  {
    v15 = (char *)v14 - 264;
    v14 = *(VIDMM_SEGMENT **)v14;
    if ( (v15[36] & 1) != 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 136));
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v15 + 6) + 8LL), &ApcState);
      v16 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 3), v15, 3LL);
      v2 = v16;
      if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741558 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v16, 0LL);
        WdLogGlobalForLineNumber = 195;
        break;
      }
      if ( v16 == -1073741558 )
      {
        *((_DWORD *)v15 + 6) |= 0x200000u;
        v2 = 0;
      }
      v15[36] &= ~1u;
      KeUnstackDetachProcess(&ApcState);
      DXGFASTMUTEX::Release((struct _KTHREAD **)v15 + 17);
    }
  }
  if ( v2 >= 0 )
  {
    v17 = (VIDMM_SEGMENT *)*((_QWORD *)this + 27);
    while ( v17 != (VIDMM_SEGMENT *)((char *)this + 216) )
    {
      v18 = (char *)v17 - 264;
      v17 = *(VIDMM_SEGMENT **)v17;
      if ( *((_DWORD *)v18 + 46) )
      {
        VIDMM_PHYSICAL_ADAPTER::EvictResources(v20, *(struct VIDMM_PHYSICAL_ALLOC **)v18, 1u, 0, 0, 0LL);
      }
      else if ( (v18[36] & 1) != 0 )
      {
        memset(&v22, 0, sizeof(v22));
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v18 + 136));
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v18 + 6) + 8LL), &v22);
        v19 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 3), v18, 3LL);
        v2 = v19;
        if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741558 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v19, 0LL);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x14009F36ALL);
        }
        if ( v19 == -1073741558 )
        {
          *((_DWORD *)v18 + 6) |= 0x200000u;
          v2 = 0;
        }
        v18[36] &= ~1u;
        KeUnstackDetachProcess(&v22);
        DXGFASTMUTEX::Release((struct _KTHREAD **)v18 + 17);
      }
    }
  }
  return (unsigned int)v2;
}
