/*
 * XREFs of imp_WdfMemoryCopyToBuffer @ 0x140072E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall imp_WdfMemoryCopyToBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *SourceMemory,
        unsigned __int64 SourceOffset,
        void *Buffer,
        size_t NumBytesToCopyTo)
{
  unsigned int v7; // edi
  _FX_DRIVER_GLOBALS *v8; // rax
  IFxMemory *v9; // rbx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  IFxMemory *pSource; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  pSource = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)SourceMemory,
    0x100Au,
    (void **)&pSource);
  v8 = pSource->GetDriverGlobals(pSource);
  if ( !Buffer )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( !NumBytesToCopyTo )
  {
    v7 = -1073741811;
    WPP_IFR_SF_D(v8, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
    return v7;
  }
  v9 = pSource;
  v10 = pSource->GetBufferSize(pSource);
  v11 = (char *)v9->GetBuffer(v9);
  if ( !v11 )
    return (unsigned int)-1073741811;
  if ( SourceOffset )
  {
    if ( SourceOffset >= v10 )
      return (unsigned int)-1073741789;
    v11 += SourceOffset;
    v10 -= SourceOffset;
  }
  if ( NumBytesToCopyTo > v10 )
    return (unsigned int)-1073741789;
  memmove(Buffer, v11, NumBytesToCopyTo);
  return v7;
}
