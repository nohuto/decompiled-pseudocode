/*
 * XREFs of IsRmRpsInitializePresent @ 0x1800735DC
 * Callers:
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180077EC4 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180073156 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E81B4 == 1 )
    return 1;
  if ( dword_1800E81B4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"VX", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800E81B4 = 2 - (v1 != 0);
  return result;
}
