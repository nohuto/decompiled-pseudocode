/*
 * XREFs of AccelInitializeDescriptor @ 0x1406643A0
 * Callers:
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     SmHwAcceleratorCreate @ 0x14079BD4C (SmHwAcceleratorCreate.c)
 *     SmHwInitializeAccelDescriptor @ 0x14079CECC (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     AccelQueryDescriptorSize @ 0x1406644E4 (AccelQueryDescriptorSize.c)
 */

__int64 __fastcall AccelInitializeDescriptor(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  result = AccelQueryDescriptorSize(a1, &v8);
  if ( (int)result < 0 )
    return result;
  if ( a2 < v8 )
    return 3221225485LL;
  *(_QWORD *)a3 = a1;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  *(_QWORD *)(a3 + 24) = a3 + 40;
  *(_DWORD *)(a3 + 16) = v7;
  *(_QWORD *)(a3 + 32) = -(__int64)*(unsigned int *)(*(_QWORD *)(a1 + 16) + 276LL) & (a3
                                                                                    + *(unsigned int *)(*(_QWORD *)(a1 + 16) + 276LL)
                                                                                    + *(unsigned int *)(*(_QWORD *)(a1 + 16) + 268LL)
                                                                                    + 39LL);
  return 0LL;
}
