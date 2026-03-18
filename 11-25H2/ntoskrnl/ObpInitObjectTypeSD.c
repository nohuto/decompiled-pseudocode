/*
 * XREFs of ObpInitObjectTypeSD @ 0x1407384A8
 * Callers:
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     ObpCreateDefaultObjectTypeSD @ 0x14073833C (ObpCreateDefaultObjectTypeSD.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  PVOID v4; // rbx
  int DefaultObjectTypeSD; // eax
  int v6; // edi
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  v9 = 0LL;
  P = a2;
  v4 = a2;
  if ( a2
    || (DefaultObjectTypeSD = ObpCreateDefaultObjectTypeSD((__int64 *)&P),
        v4 = P,
        v6 = DefaultObjectTypeSD,
        DefaultObjectTypeSD >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4);
    if ( v6 >= 0 )
    {
      if ( v9 )
        *(_QWORD *)(a1 - 8) = v9 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
