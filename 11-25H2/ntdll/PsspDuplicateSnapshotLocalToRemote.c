/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C8D60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800C93A0 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _BYTE *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  void *v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rdx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  NTSTATUS v33; // ebx
  void *v35; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  _BYTE Buffer[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-9Ch]
  char *v41; // [rsp+180h] [rbp+80h]
  HANDLE v42; // [rsp+3C8h] [rbp+2C8h] BYREF
  HANDLE v43; // [rsp+3E0h] [rbp+2E0h] BYREF
  PVOID v44; // [rsp+3E8h] [rbp+2E8h]
  HANDLE v45; // [rsp+3F8h] [rbp+2F8h] BYREF
  HANDLE v46; // [rsp+410h] [rbp+310h] BYREF
  HANDLE v47; // [rsp+430h] [rbp+330h] BYREF
  HANDLE SourceHandle; // [rsp+450h] [rbp+350h] BYREF
  HANDLE TargetHandle; // [rsp+4C8h] [rbp+3C8h] BYREF

  v38 = a4;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    v33 = -1073741675;
  }
  else
  {
    v8 = v7 + 1144;
    if ( (unsigned int)(v7 + 1144) < 0x478 )
    {
      v33 = -1073741675;
    }
    else
    {
      v9 = 8LL;
      v10 = (_OWORD *)a1;
      v11 = Buffer;
      do
      {
        v12 = v10[1];
        *(_OWORD *)v11 = *v10;
        v13 = v10[2];
        *((_OWORD *)v11 + 1) = v12;
        v14 = v10[3];
        *((_OWORD *)v11 + 2) = v13;
        v15 = v10[4];
        *((_OWORD *)v11 + 3) = v14;
        v16 = v10[5];
        *((_OWORD *)v11 + 4) = v15;
        v17 = v10[6];
        *((_OWORD *)v11 + 5) = v16;
        v18 = v10[7];
        v10 += 8;
        *((_OWORD *)v11 + 6) = v17;
        v11 += 128;
        *((_OWORD *)v11 - 1) = v18;
        --v9;
      }
      while ( v9 );
      v19 = *(void **)(a1 + 872);
      v20 = v10[1];
      *(_OWORD *)v11 = *v10;
      v21 = v10[2];
      *((_OWORD *)v11 + 1) = v20;
      v22 = v10[3];
      *((_OWORD *)v11 + 2) = v21;
      v23 = v10[4];
      *((_OWORD *)v11 + 3) = v22;
      v24 = v10[5];
      *((_OWORD *)v11 + 4) = v23;
      v25 = v10[6];
      v26 = *((_QWORD *)v10 + 14);
      *((_OWORD *)v11 + 5) = v24;
      *((_OWORD *)v11 + 6) = v25;
      *((_QWORD *)v11 + 14) = v26;
      v42 = 0LL;
      v43 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      SourceHandle = 0LL;
      TargetHandle = 0LL;
      if ( !v19 || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, a2, &v42, 0, 0, 2u), v33 >= 0) )
      {
        v27 = *(void **)(a1 + 896);
        if ( !v27 || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, a2, &v43, 0, 0, 2u), v33 >= 0) )
        {
          v28 = *(void **)(a1 + 920);
          if ( !v28 || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, a2, &v45, 0, 0, 2u), v33 >= 0) )
          {
            v29 = *(void **)(a1 + 944);
            if ( !v29 || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, &v46, 0, 0, 2u), v33 >= 0) )
            {
              v30 = *(void **)(a1 + 976);
              if ( !v30 || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, &v47, 0, 0, 2u), v33 >= 0) )
              {
                v31 = *(void **)(a1 + 1008);
                if ( !v31
                  || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, &SourceHandle, 0, 0, 2u), v33 >= 0) )
                {
                  v32 = *(void **)(a1 + 1128);
                  if ( !v32
                    || (v33 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, &TargetHandle, 0, 0, 2u), v33 >= 0) )
                  {
                    BaseAddress = 0LL;
                    RegionSize = v8;
                    v33 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
                    if ( v33 >= 0 )
                    {
                      v40 = v40 & 0xFFFFFFF8 | 1;
                      if ( *(_QWORD *)(a1 + 904) )
                        v44 = (char *)BaseAddress + 1144;
                      if ( *(_WORD *)(a1 + 280) )
                        v41 = (char *)BaseAddress + 296;
                      v33 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
                      if ( v33 >= 0 )
                      {
                        v35 = *(void **)(a1 + 904);
                        if ( !v35 || (v33 = NtWriteVirtualMemory(a2, v44, v35, (unsigned int)v7, 0LL), v33 >= 0) )
                        {
                          v33 = 0;
                          *a3 = BaseAddress;
                          goto LABEL_32;
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
      if ( BaseAddress )
      {
        RegionSize = v8;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
    }
  }
  if ( SourceHandle )
    ZwDuplicateObject(a2, SourceHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v47 )
    ZwDuplicateObject(a2, v47, 0LL, 0LL, 0, 0, 1u);
  if ( v45 )
    ZwDuplicateObject(a2, v45, 0LL, 0LL, 0, 0, 1u);
  if ( v46 )
    ZwDuplicateObject(a2, v46, 0LL, 0LL, 0, 0, 1u);
  if ( v43 )
    ZwDuplicateObject(a2, v43, 0LL, 0LL, 0, 0, 1u);
  if ( v42 )
    ZwDuplicateObject(a2, v42, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(a2, TargetHandle, 0LL, 0LL, 0, 0, 1u);
LABEL_32:
  if ( (v38 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v33;
}
