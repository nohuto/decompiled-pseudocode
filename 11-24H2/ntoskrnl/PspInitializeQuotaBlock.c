/*
 * XREFs of PspInitializeQuotaBlock @ 0x140773C50
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     PspExpandLimit @ 0x1405E517C (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405E51F8 (PspInsertExpansionEntry.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopQueryProcessorInitValues @ 0x140711860 (IopQueryProcessorInitValues.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A03AB4 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed int v7; // esi
  __int64 *v8; // rdi
  __int64 v9; // r14
  int *v10; // r15
  char v11; // cl
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG ActiveProcessorCount; // eax
  int v19; // r9d
  __int64 *v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v23 = 0LL;
  memset_0(a3, 0, 0x240uLL);
  *((_DWORD *)a3 + 129) = 1;
  *((_DWORD *)a3 + 128) = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = PspDefaultResourceLimits;
  }
  v7 = 0;
  v8 = a3 + 8;
  v9 = 0LL;
  v10 = a2;
  while ( v7 < 4 )
  {
    v11 = PspResourceFlags[v9 * 8];
    if ( (v11 & 2) == 0 )
    {
      v12 = a2 ? *v10 : *(_QWORD *)(a1 + PspQuotaLimitOffsets[v9]);
      *v8 = v12;
      if ( (v11 & 1) != 0 )
      {
        if ( v12 == -1 )
        {
          *v8 = 0LL;
          PspInsertExpansionEntry((__int64)&PspQuotaExpansionDescriptors[14 * v7], (__int64)(v8 - 8));
        }
        else if ( v12 )
        {
          v23 = 0LL;
          if ( !PspExpandLimit(v7, v6, v12, (__int64)&v23) )
            return 3221225626LL;
          if ( !v7 )
          {
            v21 = 0LL;
            v22 = 0LL;
            if ( IopIrpCreditsEnabled < 1 && !_InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0) )
            {
              IopQueryProcessorInitValues((__int64)&v21);
              KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              v6 = 0LL;
              if ( ActiveProcessorCount )
              {
                v19 = HIDWORD(v22);
                v20 = KiProcessorBlock;
                do
                {
                  if ( *(_DWORD *)(*v20 + 11676) != 0x7FFFFFFF )
                    break;
                  v6 = (unsigned int)(v6 + 1);
                  *(_DWORD *)(*v20++ + 11676) = v19;
                }
                while ( (unsigned int)v6 < ActiveProcessorCount );
              }
              _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
            }
          }
        }
      }
    }
    ++v7;
    v8 += 16;
    ++v10;
    ++v9;
  }
  return 0LL;
}
