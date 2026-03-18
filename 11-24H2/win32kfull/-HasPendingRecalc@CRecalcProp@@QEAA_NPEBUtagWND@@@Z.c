/*
 * XREFs of ?HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z @ 0x140252424
 * Callers:
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140252494 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14019A6C4 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14019A800 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CRecalcProp::HasPendingRecalc(struct CRecalcState **this, const struct tagWND *a2, __int64 a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v6; // edx
  char v7; // bl
  char ShouldSkipRecalcForWindow; // al

  IsEnabledDeviceUsageNoInline = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(
                                   this,
                                   a2,
                                   a3);
  v6 = *((_DWORD *)this + 6);
  v7 = 1;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( v6 == 1 )
    {
      ShouldSkipRecalcForWindow = CRecalcProp::ShouldSkipRecalcForWindow(a2, this[4]);
      goto LABEL_6;
    }
    return 0;
  }
  if ( v6 != 1 )
    return 0;
  ShouldSkipRecalcForWindow = CRecalcProp::IsWindowEligibleForRecalc(a2);
LABEL_6:
  if ( ShouldSkipRecalcForWindow && (*((_DWORD *)a2 + 95) & 0x10) == 0 )
    return 0;
  return v7;
}
