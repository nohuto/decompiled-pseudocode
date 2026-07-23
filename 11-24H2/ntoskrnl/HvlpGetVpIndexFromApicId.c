/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1405818C0
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1405816C0 (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x140584720 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // r14
  __int16 v7; // ax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v13 = 0LL;
  v10 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v13, 1, 0LL, 16LL);
  v5 = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v10, 2, 0LL, 4LL);
  *v4 = -1LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = a1;
  v7 = HvcallInitiateHypercall(154);
  if ( !v7 )
    v5 = *(_DWORD *)v6;
  *a2 = v5;
  v8 = v7 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v10);
  HvlpReleaseHypercallPage((unsigned int *)&v13);
  return v8;
}
