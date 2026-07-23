/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180020030
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x18010E1A0 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v8; // r14
  NTSTATUS v9; // esi
  _QWORD *v10; // rdx
  bool v11; // zf
  int i; // edi
  void *v13; // r8
  _ACTIVATION_CONTEXT *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *Heap; // rax
  int v18; // r13d
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  PVOID *v22; // rcx
  __int64 v24; // [rsp+60h] [rbp+8h]

  if ( InitModule )
  {
    v8 = 0LL;
    v9 = -1073741511;
    LdrpInitMuiCrits((__int64)InitModule, (__int64)BaseModule);
    RtlEnterCriticalSection(&LoadAsDataCrits);
    if ( LoadAsDataTableCount )
    {
      if ( (Flags & 0xE00) == 0 )
      {
        v10 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( BaseModule )
      {
        *BaseModule = 0LL;
        v18 = LoadAsDataTableCount;
        v10 = LoadAsDataTable;
        while ( v18 )
        {
          if ( (Flags & 0x800) != 0 )
          {
            v22 = (PVOID *)&v10[6 * (unsigned int)(v18 - 1)];
            if ( v22[3] == InitModule )
            {
              v8 = *v22;
              break;
            }
          }
          else if ( (Flags & 0x400) != 0
                 && (v24 = 6LL * (unsigned int)(v18 - 1), (v19 = (const wchar_t *)v10[v24 + 1]) != 0LL) )
          {
            if ( !wcsicmp(v19, (const wchar_t *)InitModule) )
            {
              v10 = LoadAsDataTable;
              v8 = *(PVOID *)((char *)LoadAsDataTable + v24 * 8);
              break;
            }
            v10 = LoadAsDataTable;
          }
          else if ( (Flags & 0x200) != 0 )
          {
            v20 = 6LL * (unsigned int)(v18 - 1);
            if ( (PVOID)v10[v20] == InitModule )
            {
              v8 = (PVOID)v10[v20];
              break;
            }
          }
          --v18;
        }
        if ( v8 )
          *BaseModule = v8;
        if ( (Flags & 0x200000) != 0 )
        {
          if ( v8 && Size )
          {
            *Size = v10[6 * (unsigned int)(v18 - 1) + 2];
            if ( (Flags & 0x40000) != 0 )
              ++LODWORD(v10[6 * (unsigned int)(v18 - 1) + 4]);
            v9 = 0;
          }
        }
        else
        {
          v11 = v8 == 0LL;
          if ( !v8 )
          {
LABEL_6:
            if ( v11 )
              v8 = InitModule;
            for ( i = LoadAsDataTableCount; i; --i )
            {
              if ( (PVOID)v10[6 * (unsigned int)(i - 1)] == v8 )
              {
                v13 = (void *)v10[6 * (unsigned int)(i - 1) + 1];
                if ( v13 )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + 6 * (unsigned int)(i - 1) + 1) = 0LL;
                }
                v14 = (_ACTIVATION_CONTEXT *)v10[6 * (unsigned int)(i - 1) + 5];
                if ( (unsigned __int64)&v14[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + 6 * (unsigned int)(i - 1) + 5) = 0LL;
                }
                if ( i != LoadAsDataTableCount )
                {
                  v15 = 6LL * (unsigned int)(LoadAsDataTableCount - 1);
                  *(_OWORD *)&v10[6 * (unsigned int)(i - 1)] = *(_OWORD *)&v10[6
                                                                             * (unsigned int)(LoadAsDataTableCount - 1)];
                  *(_OWORD *)&v10[6 * (unsigned int)(i - 1) + 2] = *(_OWORD *)&v10[v15 + 2];
                  *(_OWORD *)&v10[6 * (unsigned int)(i - 1) + 4] = *(_OWORD *)&v10[v15 + 4];
                }
                --LoadAsDataTableCount;
                v16 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( LoadAsDataTableCount < (unsigned int)v16 )
                {
                  Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v16);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v9 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                }
                v9 = 0;
              }
            }
            goto LABEL_50;
          }
          v21 = LODWORD(v10[6 * (unsigned int)(v18 - 1) + 4]) - 1;
          LODWORD(v10[6 * (unsigned int)(v18 - 1) + 4]) = v21;
          if ( v21 <= 0 )
          {
LABEL_5:
            v11 = v8 == 0LL;
            goto LABEL_6;
          }
          v9 = -1073740024;
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection(&LoadAsDataCrits);
    return v9;
  }
  return -1073741811;
}
