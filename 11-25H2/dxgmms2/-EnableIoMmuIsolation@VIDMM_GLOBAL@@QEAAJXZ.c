/*
 * XREFs of ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x140093094
 * Callers:
 *     VidMmEnableIoMmuIsolation @ 0x14004C530 (VidMmEnableIoMmuIsolation.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x14009B7F0 (-EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EnableIoMmuIsolation(__int64 ***this)
{
  unsigned __int16 i; // si
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 j; // bx
  __int64 **k; // rsi
  struct _MDL *v8; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v10; // eax
  DXGAUTOPUSHLOCKFASTEXCLUSIVE *v11; // rcx
  __int64 **m; // rsi
  struct _MDL *v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 **n; // rsi
  struct _MDL *v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // eax
  _BYTE v20[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v22[24]; // [rsp+40h] [rbp-68h] BYREF

  if ( ((_BYTE)this[5117] & 0xC) == 0 )
  {
    if ( KeGetCurrentThread() != (struct _KTHREAD *)(*this)[1] )
    {
      memset(&v22[1], 0, 0x54uLL);
      v22[0] = 130;
      return VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v22, 1);
    }
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); ++i )
    {
      v4 = VIDMM_PHYSICAL_ADAPTER::EnableIommuIsolation((VIDMM_PHYSICAL_ADAPTER *)this[5029][i]);
      v5 = v4;
      if ( v4 < 0 )
      {
        WdLogSingleEntry1(3LL, v4);
        WdLogGlobalForLineNumber = 29276;
        return v5;
      }
    }
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, 0xFFFFFFFF);
    for ( j = 0; (unsigned int)j < *((_DWORD *)this + 1736); ++j )
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources((VIDMM_PHYSICAL_ADAPTER *)this[5029][j], 1, 1);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v20,
      (struct DXGPUSHLOCKFAST *)(this + 470),
      1);
    for ( k = this[466]; k != (__int64 **)(this + 466); k = (__int64 **)*k )
    {
      v8 = (struct _MDL *)k[5];
      LogicalAddress = VidMmiGetLogicalAddress(k[6], 0LL);
      v10 = SysMmMapIommuRange((struct SYSMM_ADAPTER *)this[3][28], LogicalAddress, v8, 0);
      v5 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 29332;
LABEL_16:
        v11 = (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v20;
LABEL_27:
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release(v11);
        return v5;
      }
    }
    for ( m = this[468]; m != (__int64 **)(this + 468); m = (__int64 **)*m )
    {
      v13 = (struct _MDL *)m[8];
      v14 = VidMmiGetLogicalAddress(m[9], 0LL);
      v15 = SysMmMapIommuRange((struct SYSMM_ADAPTER *)this[3][28], v14, v13, 0);
      v5 = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(3LL, v15);
        WdLogGlobalForLineNumber = 29349;
        goto LABEL_16;
      }
    }
    *((_BYTE *)this + 40109) = 1;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v20);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v21,
      (struct DXGPUSHLOCKFAST *)(this + 5016),
      1);
    for ( n = this[5014]; n != (__int64 **)(this + 5014); n = (__int64 **)*n )
    {
      v17 = (struct _MDL *)n[6];
      v18 = VidMmiGetLogicalAddress(n[7], 0LL);
      v19 = SysMmMapIommuRange((struct SYSMM_ADAPTER *)this[3][28], v18, v17, 0);
      v5 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(3LL, v19);
        v11 = (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v21;
        WdLogGlobalForLineNumber = 29375;
        goto LABEL_27;
      }
    }
    *((_BYTE *)this + 40152) = 1;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v21);
    *((_BYTE *)this + 40107) = 1;
  }
  return 0LL;
}
