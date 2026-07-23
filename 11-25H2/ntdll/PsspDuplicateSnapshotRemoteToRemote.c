/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C8D60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x18010F670 (PssNtFreeRemoteSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE TargetProcessHandle,
        PVOID *a4,
        char a5)
{
  unsigned int v9; // r14d
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // r13
  unsigned int v12; // esi
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  HANDLE v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  SIZE_T v32; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v35; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v39; // [rsp+68h] [rbp-98h]
  PVOID v40; // [rsp+70h] [rbp-90h]
  _BYTE v41[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v42; // [rsp+84h] [rbp-7Ch]
  __int16 v43; // [rsp+198h] [rbp+98h]
  char *v44; // [rsp+1A0h] [rbp+A0h]
  HANDLE v45; // [rsp+3E8h] [rbp+2E8h] BYREF
  HANDLE v46; // [rsp+400h] [rbp+300h] BYREF
  char *v47; // [rsp+408h] [rbp+308h]
  HANDLE TargetHandle; // [rsp+418h] [rbp+318h] BYREF
  HANDLE v49; // [rsp+430h] [rbp+330h] BYREF
  HANDLE v50; // [rsp+450h] [rbp+350h] BYREF
  HANDLE SourceHandle; // [rsp+470h] [rbp+370h] BYREF
  HANDLE v52; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD Buffer[218]; // [rsp+500h] [rbp+400h] BYREF
  HANDLE v54; // [rsp+868h] [rbp+768h]
  unsigned int v55; // [rsp+878h] [rbp+778h]
  HANDLE v56; // [rsp+880h] [rbp+780h]
  __int64 v57; // [rsp+888h] [rbp+788h]
  HANDLE v58; // [rsp+898h] [rbp+798h]
  HANDLE v59; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v60; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v61; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v62; // [rsp+968h] [rbp+868h]

  v40 = BaseAddress;
  v39 = a4;
  BaseAddressa = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  BufferSize = 0LL;
  NumberOfBytesWritten = 0LL;
  RegionSize = 0LL;
  v9 = 0;
  v35 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v41, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_19;
  if ( BufferSize != 1144 )
  {
    v10 = -2147483635;
    goto LABEL_19;
  }
  if ( Buffer[0] != 1146311504 )
  {
    v10 = -1073741816;
    goto LABEL_19;
  }
  v11 = (unsigned __int64)v55 << 6;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_18;
  v12 = v11 + 1144;
  if ( (unsigned int)v11 >= 0xFFFFFB88 )
  {
    v9 = -1;
LABEL_18:
    v10 = -1073741675;
    goto LABEL_19;
  }
  v13 = 8LL;
  v14 = v41;
  v15 = Buffer;
  do
  {
    v16 = v15[1];
    *(_OWORD *)v14 = *v15;
    v17 = v15[2];
    *((_OWORD *)v14 + 1) = v16;
    v18 = v15[3];
    *((_OWORD *)v14 + 2) = v17;
    v19 = v15[4];
    *((_OWORD *)v14 + 3) = v18;
    v20 = v15[5];
    *((_OWORD *)v14 + 4) = v19;
    v21 = v15[6];
    *((_OWORD *)v14 + 5) = v20;
    v22 = v15[7];
    v15 += 8;
    *((_OWORD *)v14 + 6) = v21;
    v14 += 128;
    *((_OWORD *)v14 - 1) = v22;
    --v13;
  }
  while ( v13 );
  v23 = v54;
  v24 = v15[1];
  *(_OWORD *)v14 = *v15;
  v25 = v15[2];
  *((_OWORD *)v14 + 1) = v24;
  v26 = v15[3];
  *((_OWORD *)v14 + 2) = v25;
  v27 = v15[4];
  *((_OWORD *)v14 + 3) = v26;
  v28 = v15[5];
  *((_OWORD *)v14 + 4) = v27;
  v29 = v15[6];
  v30 = *((_QWORD *)v15 + 14);
  *((_OWORD *)v14 + 5) = v28;
  *((_OWORD *)v14 + 6) = v29;
  *((_QWORD *)v14 + 14) = v30;
  v45 = 0LL;
  v46 = 0LL;
  TargetHandle = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  SourceHandle = 0LL;
  v52 = 0LL;
  if ( !v23
    || (v10 = ZwDuplicateObject(ProcessHandle, v23, TargetProcessHandle, &v45, 0, 0, 2u), v9 = v11 + 1144, v10 >= 0) )
  {
    if ( !v56
      || (v10 = ZwDuplicateObject(ProcessHandle, v56, TargetProcessHandle, &v46, 0, 0, 2u), v9 = v11 + 1144, v10 >= 0) )
    {
      if ( !v58
        || (v10 = ZwDuplicateObject(ProcessHandle, v58, TargetProcessHandle, &TargetHandle, 0, 0, 2u),
            v9 = v11 + 1144,
            v10 >= 0) )
      {
        if ( !v59
          || (v10 = ZwDuplicateObject(ProcessHandle, v59, TargetProcessHandle, &v49, 0, 0, 2u), v9 = v11 + 1144,
                                                                                                v10 >= 0) )
        {
          if ( !v60
            || (v10 = ZwDuplicateObject(ProcessHandle, v60, TargetProcessHandle, &v50, 0, 0, 2u),
                v9 = v11 + 1144,
                v10 >= 0) )
          {
            if ( !v61
              || (v10 = ZwDuplicateObject(ProcessHandle, v61, TargetProcessHandle, &SourceHandle, 0, 0, 2u),
                  v9 = v11 + 1144,
                  v10 >= 0) )
            {
              if ( !v62
                || (v10 = ZwDuplicateObject(ProcessHandle, v62, TargetProcessHandle, &v52, 0, 0, 2u),
                    v9 = v11 + 1144,
                    v10 >= 0) )
              {
                BaseAddressa = 0LL;
                RegionSize = v12;
                v10 = ZwAllocateVirtualMemory(TargetProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
                v9 = v11 + 1144;
                if ( v10 >= 0 )
                {
                  v42 = v42 & 0xFFFFFFF8 | 1;
                  if ( v47 )
                    v47 = (char *)BaseAddressa + 1144;
                  if ( v43 )
                    v44 = (char *)BaseAddressa + 296;
                  v31 = 0LL;
                  v10 = NtWriteVirtualMemory(TargetProcessHandle, BaseAddressa, v41, v12, 0LL);
                  if ( v10 >= 0 )
                  {
                    if ( !v57 )
                    {
LABEL_61:
                      v10 = 0;
                      *v39 = BaseAddressa;
                      goto LABEL_62;
                    }
                    v35 = 0LL;
                    RegionSize = 1LL;
                    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, 0LL, &RegionSize, 0x1000u, 4u);
                    if ( v10 >= 0 )
                    {
                      while ( 1 )
                      {
                        if ( v31 >= (unsigned int)v11 )
                        {
                          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
                          v35 = 0LL;
                          goto LABEL_61;
                        }
                        v32 = (unsigned int)v11 - v31;
                        if ( RegionSize <= v32 )
                          v32 = RegionSize;
                        v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v31 + v57), v35, v32, &BufferSize);
                        if ( v10 < 0 )
                          goto LABEL_19;
                        if ( BufferSize != v32 )
                          break;
                        v10 = NtWriteVirtualMemory(
                                TargetProcessHandle,
                                (char *)BaseAddressa + v31 + 1144,
                                v35,
                                BufferSize,
                                &NumberOfBytesWritten);
                        if ( v10 < 0 )
                          goto LABEL_19;
                        if ( NumberOfBytesWritten != BufferSize )
                          break;
                        v31 += NumberOfBytesWritten;
                      }
                      v10 = -2147483635;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( v35 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( SourceHandle )
    ZwDuplicateObject(TargetProcessHandle, SourceHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v50 )
    ZwDuplicateObject(TargetProcessHandle, v50, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(TargetProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v49 )
    ZwDuplicateObject(TargetProcessHandle, v49, 0LL, 0LL, 0, 0, 1u);
  if ( v46 )
    ZwDuplicateObject(TargetProcessHandle, v46, 0LL, 0LL, 0, 0, 1u);
  if ( v45 )
    ZwDuplicateObject(TargetProcessHandle, v45, 0LL, 0LL, 0, 0, 1u);
  if ( v52 )
    ZwDuplicateObject(TargetProcessHandle, v52, 0LL, 0LL, 0, 0, 1u);
LABEL_62:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v40);
  return (unsigned int)v10;
}
