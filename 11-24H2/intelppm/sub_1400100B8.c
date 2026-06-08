/*
 * XREFs of sub_1400100B8 @ 0x1400100B8
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140006390 @ 0x140006390 (sub_140006390.c)
 */

char sub_1400100B8()
{
  _DWORD *v1; // r10

  LOBYTE(_RAX) = sub_140006390();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *v1 = _RAX;
    v1[1] = _RBX;
    v1[2] = _RCX;
    v1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  return _RAX;
}
