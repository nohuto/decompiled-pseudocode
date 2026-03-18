/*
 * XREFs of ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x140078F98
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1400783F8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMapping(HOSTVMMONITORMAPPING *this, struct _LUID a2)
{
  struct _LUID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___(this, &v3);
}
