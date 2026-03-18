/*
 * XREFs of EtwpAllocGuidEntry @ 0x1408998F8
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14089A850 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocGuidEntry(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  PVOID v7; // rdi
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  result = ExAllocatePool2(0x40uLL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(result + 32) = 1LL;
    *(_OWORD *)(result + 40) = *a2;
    v6 = (_QWORD *)(result + 56);
    v6[1] = v6;
    *v6 = v6;
    v5[3] = v5 + 2;
    v5[2] = v5 + 2;
    v5[52] = 0LL;
    v5[51] = 0LL;
    v5[49] = a1;
    EtwpGetSecurityDescriptorByGuid(a2, &P);
    v7 = P;
    if ( (int)ObLogSecurityDescriptor(P) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    if ( v7 && v7 != (PVOID)WmipDefaultAccessSd && v7 != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(v7, 0);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5[49] + 4120LL));
    return (__int64)v5;
  }
  return result;
}
