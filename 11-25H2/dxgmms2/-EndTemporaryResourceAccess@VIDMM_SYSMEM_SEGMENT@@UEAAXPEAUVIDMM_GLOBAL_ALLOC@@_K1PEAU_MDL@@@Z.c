/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400FF300
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned __int64 LogicalAddress; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1252;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 40107LL) )
  {
    if ( a5 != *((struct _MDL **)this + 38) )
    {
      LogicalAddress = VidMmiGetLogicalAddress(a2[44], a3);
      SysMmUnmapIommuRange(
        *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
        LogicalAddress,
        a5,
        0);
    }
  }
}
