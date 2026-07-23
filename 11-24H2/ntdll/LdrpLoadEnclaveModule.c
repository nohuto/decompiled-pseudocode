/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D4588
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D3B60 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180091C68 (LdrpMapDllFullPath.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D4770 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D4828 (LdrpEnclaveAddForwarderModules.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtLoadEnclaveData @ 0x180162220 (NtLoadEnclaveData.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  void *PageInformation; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  NTSTATUS EnclaveData; // esi
  signed __int64 v8; // rcx
  void *v9; // rdi
  ULONG PageInformationLength; // esi
  char *Heap; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 22);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((UNICODE_STRING *)a1);
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules(a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules(a1);
    if ( EnclaveData >= 0 )
    {
      if ( !v6 )
        v6 = (v4[9] + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v8 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) < v8 )
      {
        EnclaveData = -1073741800;
      }
      else
      {
        v9 = (void *)((v6 - v8) & 0xFFFFFFFFFFFFF000uLL);
        PageInformationLength = *a1 + 10;
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
        PageInformation = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *((_WORD *)Heap + 4) = *a1;
          memmove(Heap + 10, *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v9,
                          0LL,
                          0LL,
                          0,
                          PageInformation,
                          PageInformationLength,
                          0LL,
                          0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v9;
            v12 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v9;
            *(_DWORD *)(v12 + 56) = 9;
            v13 = v4[14];
            if ( !v13 )
            {
              v4[14] = v1;
              v13 = v1;
            }
            if ( v1 == v13 )
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
  LdrpUnmapModule(v1);
LABEL_7:
  if ( PageInformation )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
