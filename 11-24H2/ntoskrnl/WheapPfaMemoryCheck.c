/*
 * XREFs of WheapPfaMemoryCheck @ 0x1407C9714
 * Callers:
 *     WheapPredictiveFailureAnalysis @ 0x140A3B4F0 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x1407C967C (WheapPfaLogPageMonitorRemoval.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1407C99DC (WheapPfaRetireExpiredMemoryEntries.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPfaMemoryCheck(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID *Pool2; // rbx
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  PVOID *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = a1;
  if ( !*(_BYTE *)off_140E095E8 && (*(_BYTE *)a2 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v18 = v4;
    if ( !(unsigned int)MmGetPageBadStatus(&v18) )
    {
      v5 = v4 >> 12;
      v6 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      if ( !WheapExecuteRowFailureCheck(v5, v7, v8, v9, a3) )
      {
        Pool2 = (PVOID *)WheapPfaList;
        v11 = 0;
        while ( Pool2 != &WheapPfaList )
        {
          v12 = *Pool2;
          if ( Pool2[5] == (PVOID)v5 )
          {
            if ( (PVOID *)v12[1] == Pool2 )
            {
              v13 = (PVOID *)Pool2[1];
              if ( *v13 == Pool2 )
              {
                *v13 = v12;
                v12[1] = v13;
                goto LABEL_19;
              }
            }
LABEL_23:
            __fastfail(3u);
          }
          ++v11;
          Pool2 = (PVOID *)*Pool2;
        }
        if ( v11 >= *(_DWORD *)off_140E09608 )
        {
          Pool2 = (PVOID *)qword_140EEFA18;
          v14 = *(_QWORD *)qword_140EEFA18;
          if ( *(_QWORD *)(*(_QWORD *)qword_140EEFA18 + 8LL) != qword_140EEFA18 )
            goto LABEL_23;
          v15 = *(_QWORD **)(qword_140EEFA18 + 8);
          if ( *v15 != qword_140EEFA18 )
            goto LABEL_23;
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          WheapPfaLogPageMonitorRemoval((__int64)Pool2, 3, v6);
        }
        else
        {
          Pool2 = (PVOID *)ExAllocatePool2(0x102uLL, 0x30uLL, 0x61656857u);
          if ( !Pool2 )
            return;
        }
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        *(_DWORD *)((char *)Pool2 + 18) = 0;
        *((_WORD *)Pool2 + 11) = 0;
        *((_WORD *)Pool2 + 8) = 0;
        Pool2[3] = (PVOID)v6;
        Pool2[5] = (PVOID)v5;
LABEL_19:
        v16 = (unsigned __int16)++*((_WORD *)Pool2 + 8);
        Pool2[4] = (PVOID)v6;
        if ( v16 >= *(_DWORD *)off_140E09628 )
        {
          WheapPfaLogPageMonitorRemoval((__int64)Pool2, 1, v6);
          WheaAttemptPhysicalPageOffline(v5, 0, 0, 0, a3);
          ExFreePoolWithTag(Pool2, 0x61656857u);
        }
        else
        {
          v17 = WheapPfaList;
          if ( *((PVOID **)WheapPfaList + 1) != &WheapPfaList )
            goto LABEL_23;
          *Pool2 = WheapPfaList;
          Pool2[1] = &WheapPfaList;
          v17[1] = Pool2;
          WheapPfaList = Pool2;
        }
      }
    }
  }
}
