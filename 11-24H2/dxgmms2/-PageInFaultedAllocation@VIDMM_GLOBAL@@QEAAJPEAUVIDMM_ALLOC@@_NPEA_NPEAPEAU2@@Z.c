/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400B1040
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0CC8 (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400B09E0 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  int v8; // esi
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int16 v13; // bx
  __int64 v14; // r9
  __int64 v15; // rdx
  int inited; // eax

  v8 = 0;
  *a5 = 0LL;
  v9 = **a2;
  v10 = (__int64 *)(a2 + 7);
  v11 = a2[7];
  if ( (__int64 *)v11[1] != v10 || (v12 = (__int64 **)v10[1], *v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
  a2[8] = 0LL;
  *v10 = 0LL;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  v13 = *((_WORD *)a2[12] + 4);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  if ( v13 != 3 )
  {
    if ( (*(_DWORD *)(v9 + 24) & 0x200000) != 0 )
    {
      v8 = -1071775466;
    }
    else
    {
      LOBYTE(v14) = a3;
      v8 = VIDMM_GLOBAL::PageInOneAllocation(
             this,
             a2,
             (**(_DWORD **)(v9 + 392) & 0x20000) != 0 ? 5 : 0,
             v14,
             a4,
             a5,
             0,
             -1LL);
      if ( v8 != -1071775466 )
        goto LABEL_6;
    }
    if ( !_bittest((const signed __int32 *)(v9 + 24), 0x1Cu) )
      goto LABEL_10;
    inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)a2, 0, a4, a5);
    *(_DWORD *)(v9 + 24) &= ~0x200000u;
    v8 = inited;
LABEL_6:
    if ( v8 >= 0 )
    {
      v15 = **a2;
      *(_BYTE *)(v15 + 42) = 1;
      if ( !_bittest((const signed __int32 *)(v15 + 24), 0x1Cu)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 64LL) + 104LL) & 0x1001) == 0 )
      {
        *(_BYTE *)(v15 + 43) = 1;
      }
      return (unsigned int)v8;
    }
LABEL_10:
    WdLogSingleEntry2(3LL, a2, v8);
    WdLogGlobalForLineNumber = 17434;
  }
  return (unsigned int)v8;
}
