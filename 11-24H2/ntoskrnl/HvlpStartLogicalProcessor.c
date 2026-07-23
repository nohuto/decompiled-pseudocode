/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1405829C8
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1405816C0 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // r14
  __int64 result; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int16 v13; // ax
  __int16 v14; // bx
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v19 = 0LL;
  *(_OWORD *)a4 = 0LL;
  LODWORD(v20) = 0;
  *(_OWORD *)(a4 + 16) = 0LL;
  v16 = 0LL;
  v5 = a2;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v15 = 0LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a3] + 2);
  while ( 1 )
  {
    result = HvlpDepositPages(v7, a2, 0, 0);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage((__int64)&v18, 1, 0LL, 16LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v15, 2, 0LL, 56LL);
    v11 = KeNodeBlock[v7];
    v12 = v10;
    *v9 = a1;
    v9[1] = v5;
    v9[2] = *(_DWORD *)(v11 + 4);
    v9[3] = -2147483647;
    v13 = HvcallInitiateHypercall(118);
    v14 = v13;
    if ( v13 != 11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v12;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v12 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)v12 + 2);
      *(_QWORD *)(a4 + 48) = v12[6];
      *(_WORD *)a4 = v13;
    }
    HvlpReleaseHypercallPage((unsigned int *)&v15);
    HvlpReleaseHypercallPage((unsigned int *)&v18);
    if ( v14 != 11 )
      return v14 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
