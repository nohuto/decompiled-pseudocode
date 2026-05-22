/*
 * XREFs of ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x180097440
 * Callers:
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180139980 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __noreturn msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow(void)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = 1;
  throw (msl::utilities::SafeIntException *)&pExceptionObject;
}
