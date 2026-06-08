/*
 * XREFs of sub_140006350 @ 0x140006350
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140006390 @ 0x140006390 (sub_140006390.c)
 */

__int64 sub_140006350()
{
  __int64 result; // rax
  _DWORD *v1; // r10

  result = sub_140006390();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *v1 = result;
    v1[1] = _RBX;
    v1[2] = _RCX;
    v1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  return result;
}
