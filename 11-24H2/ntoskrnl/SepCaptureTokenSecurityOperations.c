/*
 * XREFs of SepCaptureTokenSecurityOperations @ 0x140479258
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14088BDFC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityOperations(_DWORD *a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned int v5; // edi
  unsigned int v7; // ebx
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  __int64 Pool2; // rdx
  __int64 v11; // [rsp+28h] [rbp-20h]

  v5 = a2;
  v7 = 0;
  if ( !a3 )
  {
    *a4 = (__int64)a1;
    return 0LL;
  }
  if ( *a1 == 1 )
  {
    v8 = 4LL;
    v11 = 4LL;
    v5 = 1;
  }
  else
  {
    if ( !a2 )
      return 3221225485LL;
    v8 = 4LL * a2;
    if ( is_mul_ok(4uLL, a2) )
    {
      v11 = 4LL * a2;
      result = 0LL;
    }
    else
    {
      v8 = -1LL;
      v11 = -1LL;
      result = 3221225621LL;
    }
    if ( (int)result < 0 )
      return result;
  }
  if ( v8 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v8 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a1 + v8) < a1 )
      v8 = v11;
  }
  Pool2 = ExAllocatePool2(0x100uLL, v8, 0x704F6553u);
  if ( Pool2 )
  {
    while ( v7 < v5 )
    {
      *(_DWORD *)(Pool2 + 4LL * v7) = a1[v7];
      ++v7;
    }
    *a4 = Pool2;
    return 0LL;
  }
  return 3221225495LL;
}
