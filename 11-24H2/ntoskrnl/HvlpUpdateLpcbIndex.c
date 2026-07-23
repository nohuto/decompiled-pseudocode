/*
 * XREFs of HvlpUpdateLpcbIndex @ 0x140582C18
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpUpdateLpcbIndex(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  _QWORD *v6; // rax
  __int16 v7; // bx
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 4);
  result = 0LL;
  v11 = 0LL;
  if ( v2 != a2 )
  {
    LODWORD(v11) = a2;
    v8 = 0LL;
    v9 = 0LL;
    LODWORD(v10) = 0;
    v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 40LL);
    *(_OWORD *)(v6 + 1) = v11;
    *(_DWORD *)v6 = v2;
    *(_OWORD *)(v6 + 3) = 0LL;
    *((_DWORD *)v6 + 1) = 2;
    v7 = HvcallInitiateHypercall(121);
    HvlpReleaseHypercallPage((unsigned int *)&v8);
    result = v7 != 0 ? 0xC0000001 : 0;
    if ( !v7 )
      *(_DWORD *)(a1 + 4) = a2;
  }
  return result;
}
