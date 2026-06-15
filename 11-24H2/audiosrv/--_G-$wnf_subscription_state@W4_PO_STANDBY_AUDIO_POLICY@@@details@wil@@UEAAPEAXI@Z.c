/*
 * XREFs of ??_G?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@UEAAPEAXI@Z @ 0x18009BA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18009BA9C (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall wil::details::wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
