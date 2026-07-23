/*
 * XREFs of RtlpWalkCallbackRoutine @ 0x18002BBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18002B900 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpWalkCallbackRoutine(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  __int16 v11; // ax
  __int64 result; // rax
  char *v13; // rcx
  _QWORD *v14; // rax
  char *DebugInfo; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 i; // rsi
  __int16 v20; // ax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 5:
      v4 = *a2;
      if ( ((*a2)[8] & 0x10) != 0 )
      {
        v5 = v4[10];
        v6 = v4[9] + 32LL;
        BaseAddress = 0LL;
        RegionSize = 0LL;
        if ( v6 <= v5 )
          goto LABEL_4;
        if ( v6 <= v4[11] )
        {
          BaseAddress = (char *)v4 + v5;
          RegionSize = v6 - v5;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
          {
            v4[10] += RegionSize;
LABEL_4:
            v7 = v4[9];
            v4[9] = v6;
            v8 = (char *)v4 + v7;
            if ( v8 )
            {
              v9 = a2[3];
              if ( !v9[10] )
                v9[10] = v8;
              *(_OWORD *)v8 = 0LL;
              *((_OWORD *)v8 + 1) = 0LL;
              ++*((_DWORD *)a2[3] + 9);
              *(_QWORD *)v8 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
              if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
                *((_WORD *)v8 + 4) = 1;
              v10 = *(_DWORD *)(a1 + 24);
              if ( (v10 & 8) != 0 )
              {
                v11 = 0x8000;
              }
              else
              {
                if ( (v10 & 4) == 0 )
                {
LABEL_12:
                  if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
                  {
                    for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
                    {
                      if ( *(_DWORD *)(i + 4) == 1 )
                      {
                        v20 = *(_WORD *)(i + 26);
                        *((_WORD *)v8 + 4) |= 0x10u;
                        *((_WORD *)v8 + 5) = v20;
                        *((_QWORD *)v8 + 2) = *(_QWORD *)(i + 16);
                        *((_DWORD *)v8 + 6) = *(unsigned __int16 *)(i + 24);
                      }
                      if ( !*(_BYTE *)i )
                        break;
                    }
                  }
                  return 0LL;
                }
                v11 = 0x4000;
              }
              *((_WORD *)v8 + 4) |= v11;
              goto LABEL_12;
            }
          }
        }
        return 3221225495LL;
      }
      return 0LL;
    case 2:
      v17 = *((unsigned int *)a2 + 4);
      v18 = (__int64)&a2[1][12 * v17 + 1];
      *((_DWORD *)a2 + 4) = v17 + 1;
      result = 0LL;
      a2[3] = (_QWORD *)v18;
      break;
    case 3:
      DebugInfo = RtlpCommitQueryDebugInfo(*a2, 0x20u);
      if ( !DebugInfo )
        return 3221225495LL;
      v16 = a2[3];
      if ( !v16[10] )
        v16[10] = DebugInfo;
      *(_OWORD *)DebugInfo = 0LL;
      *((_OWORD *)DebugInfo + 1) = 0LL;
      ++*((_DWORD *)a2[3] + 9);
      *((_WORD *)DebugInfo + 4) = 2;
      *((_QWORD *)DebugInfo + 3) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)DebugInfo = *(_QWORD *)(a1 + 24);
      *((_QWORD *)DebugInfo + 2) = *(_QWORD *)(a1 + 32);
      return 0LL;
    default:
      if ( *(_DWORD *)a1 != 4 || *(_DWORD *)(a1 + 32) != 2 )
        return 0LL;
      v13 = RtlpCommitQueryDebugInfo(*a2, 0x20u);
      if ( !v13 )
        return 3221225495LL;
      v14 = a2[3];
      if ( !v14[10] )
        v14[10] = v13;
      *(_OWORD *)v13 = 0LL;
      *((_OWORD *)v13 + 1) = 0LL;
      ++*((_DWORD *)a2[3] + 9);
      *((_WORD *)v13 + 4) = 4096;
      *(_QWORD *)v13 = *(_QWORD *)(a1 + 24);
      return 0LL;
  }
  return result;
}
