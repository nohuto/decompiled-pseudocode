/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400FF3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 LogicalAddress; // rax
  int v13; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1181;
  }
  v10 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 40107LL) )
  {
    if ( a5 != *((struct _MDL **)this + 38) )
    {
      LogicalAddress = VidMmiGetLogicalAddress(a2[44], a3);
      v13 = SysMmMapIommuRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
              LogicalAddress,
              a5,
              0);
      v10 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(3LL, v13);
        WdLogGlobalForLineNumber = 1198;
      }
    }
  }
  return v10;
}
