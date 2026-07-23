/*
 * XREFs of HvlQueryNumaDistance @ 0x140580A40
 * Callers:
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]

  v3 = a2;
  v4 = a1;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v16, 1, 0LL, 8LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v13, 2, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v4] + 2)] + 4);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 2)] + 4);
  v9 = HvcallInitiateHypercall(120);
  if ( v9 )
    v10 = -1LL;
  else
    v10 = *v7;
  *a3 = v10;
  v11 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v13);
  HvlpReleaseHypercallPage((unsigned int *)&v16);
  return v11;
}
