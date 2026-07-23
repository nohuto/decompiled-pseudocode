/*
 * XREFs of KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1403A23C8
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AF90 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 *     ?KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints@@YAEPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@@Z @ 0x1403A28B4 (-KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints@@YAEPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOI.c)
 */

char __fastcall KiAdjustProcessIdealProcessorSetsForThreadCreation(unsigned __int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  unsigned int v4; // edx
  int v5; // r8d
  unsigned __int64 v6; // r9
  __int64 *v7; // r10
  int v8; // r11d
  _KI_PROCESS_CONCURRENCY_COUNT v9; // r13d
  unsigned __int16 v10; // di
  _KI_PROCESS_CONCURRENCY_COUNT v11; // esi
  unsigned __int16 **v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  unsigned __int16 *v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-28h]
  unsigned __int16 **v23; // [rsp+40h] [rbp-20h]
  struct _GROUP_AFFINITY v24; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+50h]
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v26; // [rsp+B8h] [rbp+58h] BYREF

  LOBYTE(v1) = KiCacheAwareScheduling;
  v21 = 0LL;
  v26 = 0LL;
  if ( (KiCacheAwareScheduling & 0x20) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 184);
    v22 = (__int64 *)(a1 + 184);
    v1 = *(_DWORD *)(v3 + 12);
    if ( (v1 & 1) == 0 )
    {
      v4 = (*(_DWORD *)v3 + 0x40000) ^ (*(_DWORD *)v3 ^ (*(_DWORD *)v3 + 0x40000)) & 0x3FFFF;
      *(_DWORD *)v3 = v4;
      if ( v4 >> 18 > KeMaximumProcessors )
        *(_DWORD *)v3 = (KeMaximumProcessors << 18) + 0x3FFFF;
      LOBYTE(v1) = KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints(
                     (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *)(v3 + 4),
                     (union _KI_PROCESS_CONCURRENCY_COUNT *)v3);
      if ( !(_BYTE)v1 )
      {
        v9.AllFields = v6;
        v10 = v6;
        LODWORD(v25) = v6;
        v11.AllFields = (v5 & HIDWORD(v6) | 0x20040000) - v8;
        HIDWORD(v25) = v11;
        if ( (unsigned __int16)v6 < (unsigned __int16)KiActiveGroups )
        {
          v12 = (unsigned __int16 **)(a1 + 80);
          v13 = a1 >> 12;
          v23 = v12;
          do
          {
            if ( v10 >= *(_WORD *)(v3 + 208) )
              v14 = v6;
            else
              v14 = *(_QWORD *)(v3 + 8LL * v10 + 216);
            v15 = *v12;
            v16 = *(_DWORD *)v3 >> 18;
            v24 = 0LL;
            v24.Group = v10;
            if ( v10 < *v15 )
              v6 = *(_QWORD *)&v15[4 * v10 + 4];
            v17 = *v7;
            v24.Mask = v6;
            KiSelectIdealProcessorSetForGroup(&v24, *(_WORD *)(v17 + 2LL * v10 + 80), v16, v13, &v21, &v26);
            v18 = v21;
            if ( v9.AllFields < v26.Low.AllFields )
              v9.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v26.Low;
            if ( v11.AllFields > v26.High.AllFields )
              v11.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v26.High;
            v6 = 0LL;
            if ( v14 != v21 )
            {
              *(_QWORD *)(8LL * v10 + v3 + 216) = v21;
              _BitScanForward64(&v19, v14 ^ v18);
              *(_WORD *)(v3 + 2LL * v10 + 16) = v19;
            }
            v7 = v22;
            ++v10;
            v12 = v23;
          }
          while ( v10 < (unsigned __int16)KiActiveGroups );
          v25 = __PAIR64__(v11.AllFields, v9.AllFields);
        }
        LOBYTE(v1) = v25;
        *(_QWORD *)(v3 + 4) = v25;
      }
    }
  }
  return v1;
}
