/*
 * XREFs of CmpKeySecurityIncrementReferenceCount @ 0x140494ECC
 * Callers:
 *     CmpReferenceSecurityNode @ 0x1407DD7B0 (CmpReferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCheckKey @ 0x14088506C (CmpCheckKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
