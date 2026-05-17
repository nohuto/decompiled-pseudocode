/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D91B8
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D93A0 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D9458 (LdrpEnclaveAddForwarderModules.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1801653F0 (NtLoadEnclaveData.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  int EnclaveData; // esi
  __int64 v9; // r9
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 Heap; // rax
  __int64 v14; // rax
  __int64 v15; // rax

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
      v10 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) < v10 )
      {
        EnclaveData = -1073741800;
      }
      else
      {
        v11 = (v6 - v10) & 0xFFFFFFFFFFFFF000uLL;
        v12 = *a1 + 10;
        Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        v2 = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *(_WORD *)(Heap + 8) = *a1;
          memmove((void *)(Heap + 10), *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(-1LL, v11, 0LL, 0LL, 0, v2, v12, 0LL, 0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v11;
            v14 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v11;
            *(_DWORD *)(v14 + 56) = 9;
            v15 = v4[14];
            if ( !v15 )
            {
              v4[14] = v1;
              v15 = v1;
            }
            if ( v1 == v15 )
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v9);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
