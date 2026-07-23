/*
 * XREFs of PspInitializeQuotaBlock @ 0x140773E70
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     PspExpandLimit @ 0x1405E26A4 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405E2720 (PspInsertExpansionEntry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopQueryProcessorInitValues @ 0x14070F3F0 (IopQueryProcessorInitValues.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1409FFFE4 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, int *a2, _DWORD *a3)
{
  signed int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int *v9; // r15
  char v10; // cl
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG ActiveProcessorCount; // eax
  ULONG v18; // edx
  int v19; // r9d
  __int64 *v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h]

  memset_0(a3, 0, 0x240uLL);
  a3[129] = 1;
  a3[128] = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = PspDefaultResourceLimits;
  }
  v6 = 0;
  v7 = a3 + 16;
  v8 = 0LL;
  v9 = a2;
  while ( v6 < 4 )
  {
    v10 = PspResourceFlags[v8 * 8];
    if ( (v10 & 2) == 0 )
    {
      v11 = a2 ? *v9 : *(_QWORD *)(a1 + PspQuotaLimitOffsets[v8]);
      *v7 = v11;
      if ( (v10 & 1) != 0 )
      {
        if ( v11 == -1 )
        {
          *v7 = 0LL;
          PspInsertExpansionEntry((__int64)&PspQuotaExpansionDescriptors[14 * v6], (__int64)(v7 - 8));
        }
        else if ( v11 )
        {
          if ( !PspExpandLimit(v6) )
            return 3221225626LL;
          if ( !v6 )
          {
            v21 = 0LL;
            v22 = 0LL;
            if ( IopIrpCreditsEnabled < 1 && !_InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0) )
            {
              IopQueryProcessorInitValues((__int64)&v21);
              KeSynchronizeWithDynamicProcessors(v14, v13, v15, v16);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              v18 = 0;
              if ( ActiveProcessorCount )
              {
                v19 = HIDWORD(v22);
                v20 = KiProcessorBlock;
                do
                {
                  if ( *(_DWORD *)(*v20 + 11676) != 0x7FFFFFFF )
                    break;
                  ++v18;
                  *(_DWORD *)(*v20++ + 11676) = v19;
                }
                while ( v18 < ActiveProcessorCount );
              }
              _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
            }
          }
        }
      }
    }
    ++v6;
    v7 += 16;
    ++v9;
    ++v8;
  }
  return 0LL;
}
