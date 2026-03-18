/*
 * XREFs of CmpKeySecurityIncrementReferenceCount @ 0x1404960C4
 * Callers:
 *     CmpReferenceSecurityNode @ 0x1407CDFF0 (CmpReferenceSecurityNode.c)
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpKeySecurityIncrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax

  v4 = 0;
  if ( !a4 && !*(_DWORD *)(a1 + 12) )
    KeBugCheckEx(0x51u, 4uLL, 6uLL, a2, a3);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 + 1 < v5 )
    return (unsigned int)-1073741675;
  else
    *(_DWORD *)(a1 + 12) = v5 + 1;
  return v4;
}
