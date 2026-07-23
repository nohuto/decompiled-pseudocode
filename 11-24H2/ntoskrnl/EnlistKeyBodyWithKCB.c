/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x140990790
 * Callers:
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnlistKeyBodyWithKCB(signed __int64 a1, char a2)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v7; // rax
  __int64 **v8; // rcx

  v2 = (__int64 *)(a1 + 32);
  v3 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  v4 = 0;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  while ( v4 < 4 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v4 + 136), a1, 0LL) )
      goto LABEL_6;
    ++v4;
  }
  if ( (a2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 8) + 120LL;
    v8 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 128LL);
    if ( *v8 != (__int64 *)v7 )
      __fastfail(3u);
    *v2 = v7;
    v2[1] = (__int64)v8;
    *v8 = v2;
    *(_QWORD *)(v7 + 8) = v2;
LABEL_6:
    *(_WORD *)(a1 + 48) |= 0x40u;
    return v3;
  }
  return (unsigned int)-1073741267;
}
