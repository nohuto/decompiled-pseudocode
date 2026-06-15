/*
 * XREFs of ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140015CE0
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VCSerialWorkQueue@@$$V@std@@YA?AV?$shared_ptr@VCSerialWorkQueue@@@0@XZ @ 0x140015DD4 (--$make_shared@VCSerialWorkQueue@@$$V@std@@YA-AV-$shared_ptr@VCSerialWorkQueue@@@0@XZ.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140015EC0 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHostObject::StartSendingNotifications(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = this + 1;
  EnterCriticalSection(this + 1);
  try
  {
    if ( this[2].DebugInfo )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)0x8000FFFFLL);
      if ( v2 )
        LeaveCriticalSection(v2);
      result = 2147549183LL;
    }
    else
    {
      v3 = std::make_shared<CSerialWorkQueue,>(v6);
      std::shared_ptr<CSerialWorkQueue>::operator=(&this[2], v3);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
      if ( this[2].DebugInfo )
      {
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
          (const char *)0x8007000ELL);
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 2147942414LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x60,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
                           v4);
  }
  return result;
}
