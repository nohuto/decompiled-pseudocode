/*
 * XREFs of ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AA0EC
 * Callers:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401A9AC8 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401A9B8C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 */

void __fastcall Win32JobObject::HandleConvertToGui(Win32JobObject *this, struct tagPROCESSINFO *a2)
{
  int ProcessEffectiveUILimits; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)this);
  if ( ProcessEffectiveUILimits )
  {
    v5 = 0LL;
    v4[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v4);
    Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions((__int64)this, ProcessEffectiveUILimits);
    if ( v4[0] )
      --*(_DWORD *)(v5 + 28);
  }
}
