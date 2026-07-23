/*
 * XREFs of RtlpUpdateTagEntry @ 0x1800EE4DC
 * Callers:
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpUpdateTagEntry(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  unsigned __int16 v17; // dx
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r8

  if ( RtlpGlobalTagHeap )
  {
    if ( a5 < 2 )
    {
      if ( !a2 )
        goto LABEL_25;
      if ( a2 < *(_WORD *)(a1 + 224) )
      {
        v20 = *(_QWORD *)(a1 + 232);
        if ( v20 )
        {
          v9 = v20 + 72LL * a2;
          goto LABEL_23;
        }
      }
      if ( (a2 & 0x800) != 0 )
      {
        v17 = a2 & 0xF7FF;
        if ( v17 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
        {
          v18 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
          if ( v18 )
          {
            v19 = v17;
            a2 = v17 | 0x800;
            v9 = v18 + 72 * v19;
            goto LABEL_23;
          }
        }
      }
      else
      {
LABEL_25:
        v16 = *(_QWORD *)(a1 + 328);
        if ( v16 )
        {
          v15 = 128;
          if ( a4 < 0x80 )
          {
            v15 = a4;
          }
          else if ( a5 != 1 )
          {
            v15 = 0;
          }
          v9 = v16 + 16LL * v15;
          goto LABEL_22;
        }
      }
    }
    else if ( a2 )
    {
      if ( (a2 & 0x8000u) == 0 )
      {
        if ( (a2 & 0x800) != 0 )
        {
          v11 = a2 & 0xF7FF;
          if ( v11 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
          {
            v12 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
            if ( v12 )
            {
              v13 = v11;
              a2 = v11 | 0x800;
              v9 = v12 + 72 * v13;
              goto LABEL_8;
            }
          }
        }
        else if ( a2 < *(_WORD *)(a1 + 224) )
        {
          v14 = *(_QWORD *)(a1 + 232);
          if ( v14 )
          {
            v9 = v14 + 72LL * a2;
            goto LABEL_8;
          }
        }
      }
      else
      {
        v7 = a2 & 0x7FFF;
        if ( v7 < 0x81u )
        {
          v8 = *(_QWORD *)(a1 + 328);
          if ( v8 )
          {
            v9 = v8 + 16LL * v7;
            a2 = v7 | 0x8000;
LABEL_8:
            ++*(_DWORD *)(v9 + 4);
            *(_QWORD *)(v9 + 8) -= a3;
            if ( a5 < 4 )
              return a2;
            if ( (a2 & 0x8000u) == 0 )
            {
LABEL_23:
              ++*(_DWORD *)v9;
              *(_QWORD *)(v9 + 8) += a4;
              return a2;
            }
            v15 = 128;
            if ( a4 < 0x80 )
            {
              v15 = a4;
            }
            else if ( a5 != 5 )
            {
              v15 = 0;
            }
            v9 = *(_QWORD *)(a1 + 328) + 16LL * v15;
LABEL_22:
            a2 = v15 | 0x8000;
            goto LABEL_23;
          }
        }
      }
    }
  }
  return 0LL;
}
