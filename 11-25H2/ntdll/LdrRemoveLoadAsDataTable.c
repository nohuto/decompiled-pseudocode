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

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, __int64 a4)
{
  int v4; // ebx
  wchar_t *v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdx
  bool v11; // zf
  int i; // edi
  __int64 v13; // r8
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 Heap; // rax
  int v18; // r13d
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  wchar_t **v22; // rcx
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+24h] [rbp-34h]
  __int64 v26; // [rsp+60h] [rbp+8h]

  v4 = a4;
  if ( String2 )
  {
    v8 = 0LL;
    v9 = -1073741511;
    LdrpInitMuiCrits((__int64)String2, (__int64)a2, (__int64)a3, a4);
    RtlEnterCriticalSection(&LoadAsDataCrits);
    if ( LoadAsDataTableCount )
    {
      if ( (v4 & 0xE00) == 0 )
      {
        v10 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v18 = LoadAsDataTableCount;
        v10 = LoadAsDataTable;
        while ( v18 )
        {
          if ( (v4 & 0x800) != 0 )
          {
            v22 = (wchar_t **)(48LL * (unsigned int)(v18 - 1) + v10);
            if ( v22[3] == String2 )
            {
              v8 = *v22;
              break;
            }
          }
          else if ( (v4 & 0x400) != 0
                 && (v26 = 48LL * (unsigned int)(v18 - 1), (v19 = *(const wchar_t **)(v26 + v10 + 8)) != 0LL) )
          {
            if ( !wcsicmp(v19, String2) )
            {
              v10 = LoadAsDataTable;
              v8 = *(wchar_t **)(v26 + LoadAsDataTable);
              break;
            }
            v10 = LoadAsDataTable;
          }
          else if ( (v4 & 0x200) != 0 )
          {
            v20 = 48LL * (unsigned int)(v18 - 1);
            if ( *(wchar_t **)(v20 + v10) == String2 )
            {
              v8 = *(wchar_t **)(v20 + v10);
              break;
            }
          }
          --v18;
        }
        if ( v8 )
          *a2 = v8;
        if ( (v4 & 0x200000) != 0 )
        {
          if ( v8 && a3 )
          {
            *a3 = *(_QWORD *)(v10 + 48LL * (unsigned int)(v18 - 1) + 16);
            if ( (v4 & 0x40000) != 0 )
              ++*(_DWORD *)(v10 + 48LL * (unsigned int)(v18 - 1) + 32);
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
              v8 = String2;
            for ( i = LoadAsDataTableCount; i; --i )
            {
              if ( *(wchar_t **)(v10 + 48LL * (unsigned int)(i - 1)) == v8 )
              {
                v13 = *(_QWORD *)(v10 + 48LL * (unsigned int)(i - 1) + 8);
                if ( v13 )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v13);
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48LL * (unsigned int)(i - 1) + 8) = 0LL;
                }
                v14 = *(volatile signed __int32 **)(v10 + 48LL * (unsigned int)(i - 1) + 40);
                if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48LL * (unsigned int)(i - 1) + 40) = 0LL;
                }
                if ( i != LoadAsDataTableCount )
                {
                  v15 = 6LL * (unsigned int)(LoadAsDataTableCount - 1);
                  *(_OWORD *)(v10 + 48LL * (unsigned int)(i - 1)) = *(_OWORD *)(v10
                                                                              + 48LL
                                                                              * (unsigned int)(LoadAsDataTableCount - 1));
                  *(_OWORD *)(v10 + 48LL * (unsigned int)(i - 1) + 16) = *(_OWORD *)(v10 + 8 * v15 + 16);
                  *(_OWORD *)(v10 + 48LL * (unsigned int)(i - 1) + 32) = *(_OWORD *)(v10 + 8 * v15 + 32);
                }
                --LoadAsDataTableCount;
                v16 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( LoadAsDataTableCount < (unsigned int)v16 )
                {
                  Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, LoadAsDataTable, 48 * v16, v24);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v9 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  i = v25;
                }
                v9 = 0;
                v24 = 0;
              }
            }
            goto LABEL_50;
          }
          v21 = *(_DWORD *)(v10 + 48LL * (unsigned int)(v18 - 1) + 32) - 1;
          *(_DWORD *)(v10 + 48LL * (unsigned int)(v18 - 1) + 32) = v21;
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
  return 3221225485LL;
}
