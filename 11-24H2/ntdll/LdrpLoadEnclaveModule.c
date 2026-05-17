/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D9218
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180075388 (LdrpMapDllFullPath.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D9400 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D94B8 (LdrpEnclaveAddForwarderModules.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtLoadEnclaveData @ 0x180163E60 (NtLoadEnclaveData.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  int EnclaveData; // esi
  signed __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 Heap; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = *((_QWORD *)a1 + 7);
  v2 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 22);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules(a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules(a1);
    if ( EnclaveData >= 0 )
    {
      v7 = -4096LL;
      if ( !v6 )
        v6 = (v4[9] + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v9 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) < v9 )
      {
        EnclaveData = -1073741800;
      }
      else
      {
        v10 = (v6 - v9) & 0xFFFFFFFFFFFFF000uLL;
        v11 = *a1 + 10;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v11);
        v2 = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *(_WORD *)(Heap + 8) = *a1;
          memmove((void *)(Heap + 10), *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(-1LL, v10, 0LL, 0LL, 0, v2, v11, 0LL, 0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v10;
            v13 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v10;
            *(_DWORD *)(v13 + 56) = 9;
            v14 = v4[14];
            if ( !v14 )
            {
              v4[14] = v1;
              v14 = v1;
            }
            if ( v1 == v14 )
              goto LABEL_7;
            goto LABEL_12;
          }
        }
        else
        {
          EnclaveData = -1073741670;
        }
      }
    }
  }
  v4[14] = 0LL;
LABEL_12:
  LdrpUnmapModule(v1, v7);
LABEL_7:
  if ( v2 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
