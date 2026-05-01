/*
 * XREFs of ??$Unmarshal@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180459E2C
 * Callers:
 *     ??R_lambda_ed42f4eeaf68fb958003b003b23892ea_@@QEAA@XZ @ 0x18045D380 (--R_lambda_ed42f4eeaf68fb958003b003b23892ea_@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall CMarshaledInterface::Unmarshal<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  return CMarshaledInterface::_Unmarshal(this, &GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931, a2, 0);
}
