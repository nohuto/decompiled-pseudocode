/*
 * XREFs of CmSiExtendSection @ 0x1404AE490
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140968314 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1406A9110 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
