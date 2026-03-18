/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A46B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A4DC8 (-MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // edi
  unsigned __int64 LogicalAddress; // rax
  int v12; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1775;
  }
  v10 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 40107LL) )
  {
    if ( a5 != *((struct _MDL **)this + 38) )
    {
      LogicalAddress = VidMmiGetLogicalAddress(a2[46], a3);
      v12 = SysMmMapIommuRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
              LogicalAddress,
              a5,
              0);
      v10 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 1791;
      }
    }
  }
  VIDMM_APERTURE_SEGMENT::MapTemporaryResource(this, (struct VIDMM_GLOBAL_ALLOC *)a2, a3, a4, a5);
  return v10;
}
