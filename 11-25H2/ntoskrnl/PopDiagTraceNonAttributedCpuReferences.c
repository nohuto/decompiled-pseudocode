/*
 * XREFs of PopDiagTraceNonAttributedCpuReferences @ 0x140268E30
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14026A140 (PopUpdateNonAttributedCpuTimeReference.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceNonAttributedCpuReferences(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
}
