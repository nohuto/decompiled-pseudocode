/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800A6F98
 * Callers:
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::dtor$3 @ 0x180162DF1 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--dtor$3.c)
 *     _GetCapabilityUsageSession_::_1_::dtor$3 @ 0x1801678F4 (_GetCapabilityUsageSession_--_1_--dtor$3.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$3 @ 0x180168C51 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
