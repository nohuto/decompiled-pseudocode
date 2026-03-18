/*
 * XREFs of ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14009D238
 * Callers:
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009D2C0 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

CFlipManagerSignal *__fastcall CFlipManagerSignal::CFlipManagerSignal(
        CFlipManagerSignal *this,
        __int64 a2,
        char a3,
        struct FlipManagerTokenIFlipInfo *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  CFlipManagerSignal *result; // rax
  _QWORD *v9; // rdx

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &CFlipManagerSignal::`vftable';
  *((_QWORD *)this + 7) = a2;
  *((_BYTE *)this + 64) = a3;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() && a4 )
  {
    v6 = *((_QWORD *)a4 + 13);
    v7 = 0LL;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
    }
    *((_QWORD *)this + 3) = v7;
  }
  result = this;
  v9 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v9[1] = v9;
  *v9 = v9;
  return result;
}
