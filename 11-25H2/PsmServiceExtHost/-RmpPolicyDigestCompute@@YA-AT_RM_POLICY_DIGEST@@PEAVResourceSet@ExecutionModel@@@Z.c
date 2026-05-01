/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002A42C
 * Callers:
 *     ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A290 (-RmpActivityHostComputeDigest@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v2 = 0x11000002000LL;
  if ( (*(_BYTE *)(a1 + 1378) & 8) != 0
    || (v5 = *(int *)(a1 + 1336), (unsigned int)v5 <= 0x27) && (v6 = 0x8800001000LL, _bittest64(&v6, v5)) )
  {
    v3 = 2;
  }
  else if ( (*(_BYTE *)(a1 + 1376) & 0x10) != 0
         || (v8 = *(int *)(a1 + 1336), (unsigned int)v8 <= 0x28) && _bittest64(&v2, v8) )
  {
    v3 = 4;
  }
  else
  {
    v3 = 1;
  }
  if ( (*(_BYTE *)(a1 + 1376) & 0x10) == 0
    && ((v7 = *(int *)(a1 + 1336), (unsigned int)v7 > 0x28) || !_bittest64(&v2, v7))
    || (*(_BYTE *)(a1 + 1378) & 0x40) != 0 )
  {
    v3 |= 8u;
  }
  return v3 | (8
             * (*(_WORD *)(a1 + 1376) & 8 | (2
                                           * (*(_WORD *)(a1 + 1376) & 3 | (8 * ((*(_DWORD *)(a1 + 1332) >> 3) & 1 | 2))))));
}
