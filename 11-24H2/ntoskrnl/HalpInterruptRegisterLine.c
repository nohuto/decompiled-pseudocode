/*
 * XREFs of HalpInterruptRegisterLine @ 0x140560BB0
 * Callers:
 *     HalpApicDescribeLines @ 0x140565F88 (HalpApicDescribeLines.c)
 *     HalpApicDescribeLocalLines @ 0x140566014 (HalpApicDescribeLocalLines.c)
 *     HalpPicDiscover @ 0x140566E94 (HalpPicDiscover.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpInterruptRegisterLine(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  int v4; // r15d
  int v5; // ebp
  int v6; // r12d
  ULONG_PTR *v7; // rax
  ULONG_PTR *v8; // rsi
  int v9; // ecx
  int v10; // eax
  ULONG_PTR *v11; // rax
  ULONG_PTR *v12; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  unsigned int i; // eax
  unsigned int v16; // ebp
  unsigned int v17; // r12d
  _DWORD *MemoryInternal; // rax
  _DWORD *v19; // rbx
  int v20; // r8d
  int v21; // r10d
  int v22; // eax
  int v23; // r9d
  char *v24; // rdx
  ULONG_PTR *v25; // rsi
  ULONG_PTR **v26; // rax
  int v27; // ecx
  int v28; // eax

  v1 = 0;
  if ( !HalpInterruptRegistrationAllowed || KeGetPcr()->Prcb.Number )
  {
    HalpInterruptRegistrationProblem = 2;
    return (unsigned int)-1073741431;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = *(_DWORD *)(a1 + 8);
    if ( v3 < v4 && (v5 = *(_DWORD *)(a1 + 12)) != 0 )
    {
      v6 = *(_DWORD *)a1;
      v7 = HalpInterruptLookupController(*(_DWORD *)a1);
      v8 = v7;
      if ( v7 )
      {
        if ( v5 != 6 )
        {
          v9 = *((_DWORD *)v7 + 74);
          v10 = *((_DWORD *)v7 + 75);
          if ( v9 != v10 && v3 < v10 && v4 > v9 )
          {
            v11 = (ULONG_PTR *)v8[33];
            while ( v11 != v8 + 33 )
            {
              v12 = v11;
              v11 = (ULONG_PTR *)*v11;
              if ( v3 < *((_DWORD *)v12 + 6) && v4 > *((_DWORD *)v12 + 5) )
              {
                HalpInterruptRegistrationProblem = 20;
                return (unsigned int)-1073741182;
              }
            }
          }
        }
        v13 = *(_DWORD *)(a1 + 24);
        if ( v13 == -1 || !HalpInterruptFindLinesForGsiRange(v13, v4 + v13 - v3) )
        {
          v14 = v4 - v3;
          if ( *((_DWORD *)v8 + 60) == 2 && v13 != -1 )
          {
            for ( i = 0; i < HalpInterruptIoApicCount; ++i )
            {
              if ( *(_DWORD *)(HalpInterruptIoApic + 16LL * i) == v6
                && v14 > *(_DWORD *)(HalpInterruptIoApic + 16LL * i + 12) )
              {
                _mm_lfence();
                v14 = *(_DWORD *)(HalpInterruptIoApic + 16LL * i + 12);
                break;
              }
            }
          }
          if ( v5 == 7 )
            v16 = (((v14 + 31) >> 3) + 7) & 0xFFFFFFF8;
          else
            v16 = 0;
          v17 = v16 + 8 * (v14 + 8 * v14 + 11);
          MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(v17, 1u);
          v19 = MemoryInternal;
          if ( MemoryInternal )
          {
            memset_0(MemoryInternal, 0, v17);
            if ( v16 )
            {
              v19[18] = v14;
              *((_QWORD *)v19 + 10) = v19 + 22;
            }
            v20 = *(_DWORD *)(a1 + 4);
            v21 = *(_DWORD *)(a1 + 12);
            v22 = *(_DWORD *)(a1 + 24);
            v19[5] = v20;
            v19[7] = v22;
            v23 = v20 + v14;
            v19[6] = v20 + v14;
            v19[8] = v21;
            if ( v21 == 7 )
            {
              *((_QWORD *)v19 + 7) = *(_QWORD *)(a1 + 32);
              v19[16] = *(_DWORD *)(a1 + 40);
              v19[9] = *(_DWORD *)(a1 + 16);
            }
            v24 = (char *)v19 + v16 + 88;
            *((_QWORD *)v19 + 5) = v24;
            *((_QWORD *)v19 + 6) = &v24[56 * v14];
            if ( v21 == 6 )
            {
              v25 = v8 + 35;
              v19[4] = *(_DWORD *)(a1 + 20);
            }
            else
            {
              v19[4] = *((_DWORD *)v8 + 64);
              v27 = *((_DWORD *)v8 + 74);
              v28 = *((_DWORD *)v8 + 75);
              if ( v27 == v28 )
              {
                *((_DWORD *)v8 + 74) = v20;
                *((_DWORD *)v8 + 75) = v19[6];
              }
              else if ( v20 >= v27 )
              {
                if ( v23 > v28 )
                  *((_DWORD *)v8 + 75) = v23;
              }
              else
              {
                *((_DWORD *)v8 + 74) = v20;
              }
              v25 = v8 + 33;
            }
            v26 = (ULONG_PTR **)v25[1];
            if ( *v26 != v25 )
              __fastfail(3u);
            *(_QWORD *)v19 = v25;
            *((_QWORD *)v19 + 1) = v26;
            *v26 = (ULONG_PTR *)v19;
            v25[1] = (ULONG_PTR)v19;
            HalpInterruptRegistrationProblem = 0;
          }
          else
          {
            HalpInterruptRegistrationProblem = 22;
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          HalpInterruptRegistrationProblem = 21;
          return (unsigned int)-1073741182;
        }
      }
      else
      {
        HalpInterruptRegistrationProblem = 19;
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      HalpInterruptRegistrationProblem = 18;
      return (unsigned int)-1073741811;
    }
  }
  return v1;
}
