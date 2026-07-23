/*
 * XREFs of SepBuildCapPolicyTable @ 0x140607C74
 * Callers:
 *     SepRmCapUpdateWrkr @ 0x140796160 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14047C520 (RtlpCreateHashTable.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SepRegOpenKey @ 0x140A245B4 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepBuildCapPolicyTable(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-20h] BYREF
  HANDLE v5; // [rsp+28h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-10h] BYREF

  *a2 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  if ( (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies",
              0x201u,
              &KeyHandle) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
              0x201u,
              &v5) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
              0x201u,
              &Handle) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = SepReadAndPopulateCapes(v5);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ZwClose(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v2;
}
