/*
 * XREFs of RaFreeRaidResources @ 0x140010D60
 * Callers:
 *     RaInitializeRaidResources @ 0x1400219E0 (RaInitializeRaidResources.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaFreeRaidResources(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  PSLIST_ENTRY v8; // rax
  int v9; // eax
  struct _IO_WORKITEM *v10; // rcx
  struct _IO_WORKITEM *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rbx
  PSLIST_ENTRY i; // rax
  int v15; // [rsp+20h] [rbp-28h]

  if ( a1 )
  {
    if ( a2 )
    {
      v5 = a1 + 64;
      if ( a1 != -64 )
      {
        v6 = *(_QWORD *)(a2 + 64);
        if ( *(_DWORD *)v6 == 1431193940 )
          v6 = *(_QWORD *)(v6 + 24);
        v7 = 0LL;
        if ( *(_DWORD *)(a1 + 128) )
        {
          do
          {
            for ( i = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)v5 + 8 * v7));
                  i;
                  i = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)v5 + 8 * v7)) )
            {
              if ( a3 )
                StorFreeContiguousIoResources(v6, (__int64)i);
              else
                ExFreePoolWithTag(i, 0x53526152u);
            }
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < *(_DWORD *)(v5 + 64) );
        }
        else if ( *(_DWORD *)(a1 + 136) )
        {
          do
          {
            v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v5);
            if ( !v8 )
              break;
            if ( a3 )
            {
              if ( (unsigned __int8)IsDmarEnabled(v6) )
              {
                LOBYTE(v15) = 1;
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*(_QWORD *)(v6 + 880) + 8LL)
                                                                             + 24LL))(
                  *(_QWORD *)(v6 + 880),
                  *(unsigned int *)(v12 + 16),
                  *(_QWORD *)(v12 + 24),
                  v12,
                  v15);
              }
              else
              {
                MmFreeContiguousMemory((PVOID)v12);
              }
            }
            else
            {
              ExFreePoolWithTag(v8, 0x53526152u);
            }
            LODWORD(v7) = v7 + 1;
          }
          while ( (unsigned int)v7 < *(_DWORD *)(v5 + 72) );
        }
        v9 = *(_DWORD *)(v5 + 64);
        *(_DWORD *)(v5 + 72) = 0;
        if ( v9 )
        {
          v13 = 0LL;
          do
          {
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)v5 + 8 * v13), 0x53526152u);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *(_DWORD *)(v5 + 64) );
          ExFreePoolWithTag(*(PVOID *)v5, 0x53526152u);
          *(_DWORD *)(v5 + 64) = 0;
        }
        v10 = *(struct _IO_WORKITEM **)(a1 + 288);
        if ( v10 )
        {
          IoFreeWorkItem(v10);
          *(_QWORD *)(a1 + 288) = 0LL;
        }
        v11 = *(struct _IO_WORKITEM **)(a1 + 312);
        if ( v11 )
        {
          IoFreeWorkItem(v11);
          *(_QWORD *)(a1 + 312) = 0LL;
        }
      }
    }
  }
}
