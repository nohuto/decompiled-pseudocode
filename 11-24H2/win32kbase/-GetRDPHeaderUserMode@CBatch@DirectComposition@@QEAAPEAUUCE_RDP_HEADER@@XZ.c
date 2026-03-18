/*
 * XREFs of ?GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ @ 0x1400B9CEC
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B95D8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B98DC (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

struct UCE_RDP_HEADER *__fastcall DirectComposition::CBatch::GetRDPHeaderUserMode(DirectComposition::CBatch *this)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 17);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 18);
  v4 = v1[6];
  if ( !v4 )
  {
    v6 = v1[2];
    v7 = v1[3];
    v10 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    if ( (int)MmMapViewOfSection(v7, *(_QWORD *)(v6 + 16), &v8, 0LL, 4096LL, &v10, &v9, 2, 0x400000, 2) < 0 )
      return (struct UCE_RDP_HEADER *)v2;
    v4 = v8;
    v1[6] = v8;
  }
  return (struct UCE_RDP_HEADER *)(v4 + v3);
}
