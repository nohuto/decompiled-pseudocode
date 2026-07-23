/*
 * XREFs of CmSiWaitForMultipleEvents @ 0x140669DA4
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall CmSiWaitForMultipleEvents(__int64 a1, __int64 a2)
{
  PVOID *p_Object; // rdx
  __int64 v4; // r9
  void **v5; // rbx
  void *v6; // rax
  PVOID Object; // [rsp+40h] [rbp-E18h] BYREF
  _BYTE v9[504]; // [rsp+48h] [rbp-E10h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-C18h] BYREF

  memset_0(v9, 0, sizeof(v9));
  p_Object = &Object;
  v4 = 4LL;
  v5 = (void **)(a2 + 8);
  do
  {
    v6 = *v5;
    v5 += 2;
    *p_Object++ = v6;
    --v4;
  }
  while ( v4 );
  return KeWaitForMultipleObjects(4u, &Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
}
