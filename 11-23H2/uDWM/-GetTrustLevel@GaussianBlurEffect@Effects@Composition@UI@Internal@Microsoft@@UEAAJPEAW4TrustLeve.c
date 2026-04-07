/*
 * XREFs of ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180059B80
 * Callers:
 *     ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180066D40 (-GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x180066D60 (-GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetTrustLevel(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
