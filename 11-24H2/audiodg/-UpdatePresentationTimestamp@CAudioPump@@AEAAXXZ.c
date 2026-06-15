/*
 * XREFs of ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x14001E8D0
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x14001F610 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14001FDD0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioPump::UpdatePresentationTimestamp(CAudioPump *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v5[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h]

  v4 = 0LL;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(this, &AudioCore_Pump_GetCurrentPaddingStart, this);
  (*(void (__fastcall **)(_QWORD, __int64 *, _OWORD *))(**((_QWORD **)this + 26) + 24LL))(
    *((_QWORD *)this + 26),
    &v4,
    v5);
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pxx_EtwEventWriteTransfer(v3, v2, this, v4, 0LL);
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), v5);
}
