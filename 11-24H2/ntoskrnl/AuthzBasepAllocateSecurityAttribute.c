/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x1403B9250
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1403B8A94 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_WORD *__fastcall AuthzBasepAllocateSecurityAttribute(unsigned __int16 *a1)
{
  ULONG_PTR v2; // rdx
  ULONG_PTR v3; // rcx
  _WORD *result; // rax
  _WORD *v5; // rbx
  unsigned int v6; // eax
  const void *v7; // rdx
  unsigned __int64 v8; // rdi

  v2 = *a1 + 112LL;
  v3 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v3 = 64LL;
  result = (_WORD *)ExAllocatePool2(v3, v2, 0x74416553u);
  v5 = result;
  if ( result )
  {
    memset_0(result, 0, 0x70uLL);
    v5[17] = *a1;
    *((_QWORD *)v5 + 5) = v5 + 56;
    v6 = (unsigned __int16)v5[17];
    v7 = (const void *)*((_QWORD *)a1 + 1);
    if ( *a1 <= (unsigned __int16)v6 )
      v6 = *a1;
    v8 = v6;
    v5[16] = v6;
    memmove(v5 + 56, v7, v6);
    if ( (unsigned __int64)(unsigned __int16)v5[16] + 2 <= (unsigned __int16)v5[17] )
      v5[(v8 >> 1) + 56] = 0;
    *((_QWORD *)v5 + 10) = v5 + 36;
    *((_QWORD *)v5 + 9) = v5 + 36;
    *((_QWORD *)v5 + 13) = v5 + 48;
    *((_QWORD *)v5 + 12) = v5 + 48;
    return v5;
  }
  return result;
}
