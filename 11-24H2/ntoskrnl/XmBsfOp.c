/*
 * XREFs of XmBsfOp @ 0x140460B30
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

__int64 __fastcall XmBsfOp(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  int v3; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 16) | 0x40;
  *(_DWORD *)(a1 + 16) = v3;
  while ( v2 )
  {
    if ( (v2 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 16) = v3 & 0xFFFFFFBF;
      return XmStoreResult(a1, v1);
    }
    ++v1;
    v2 >>= 1;
  }
  return XmStoreResult(a1, v1);
}
