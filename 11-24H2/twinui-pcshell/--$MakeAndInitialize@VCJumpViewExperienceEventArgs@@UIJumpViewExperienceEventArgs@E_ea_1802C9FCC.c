/*
 * XREFs of ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@@Z @ 0x1802C9FCC
 * Callers:
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180242590 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x180394350 (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
        __int64 *a1,
        HSTRING *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
           (void **)a1,
           a2);
}
