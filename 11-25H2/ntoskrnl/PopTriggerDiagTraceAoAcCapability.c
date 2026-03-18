/*
 * XREFs of PopTriggerDiagTraceAoAcCapability @ 0x140C1EFB8
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopTriggerDiagTraceAoAcCapability(unsigned __int8 a1)
{
  int v1; // ebx
  int v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v1 = a1;
  if ( PopTriggerDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopTriggerDiagHandle, &POP_TRIGGER_ETW_AOAC_CAPABILITY) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = v1;
      UserData.Size = 4;
      EtwWriteEx(PopTriggerDiagHandle, &POP_TRIGGER_ETW_AOAC_CAPABILITY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
