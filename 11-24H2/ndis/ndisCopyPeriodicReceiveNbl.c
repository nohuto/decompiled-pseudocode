/*
 * XREFs of ndisCopyPeriodicReceiveNbl @ 0x140041130
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x140040E40 (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1400528E0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

struct _MDL *__fastcall ndisCopyPeriodicReceiveNbl(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  SIZE_T v5; // r15
  __int64 v6; // rdi
  struct _NPAGED_LOOKASIDE_LIST *v7; // r12
  struct _MDL *result; // rax
  __int64 v9; // rbp
  struct _MDL *v10; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rbp
  struct _MDL *v12; // rcx
  char *MappedSystemVa; // rax
  unsigned int ByteCount; // r8d
  __int64 v15; // rcx
  char *v16; // r13
  unsigned int v17; // r8d
  unsigned int v18; // esi
  __int64 v19; // rdi
  const struct _EVENT_DESCRIPTOR *v20; // rdx
  struct _MDL *v21; // r12
  unsigned int v22; // edi
  PVOID v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-98h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-90h]
  struct _MDL *v29; // [rsp+50h] [rbp-68h]
  struct _GUID v30; // [rsp+60h] [rbp-58h] BYREF
  struct _GUID v31; // [rsp+70h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v5 = *(unsigned int *)(v3 + 24);
  v6 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, v5) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v5 <= 0x64 )
  {
    v7 = &Lookaside;
LABEL_3:
    *(_QWORD *)&v31.Data1 = v7;
    result = (struct _MDL *)ExAllocateFromNPagedLookasideList(v7);
    v9 = (unsigned int)v6;
    goto LABEL_4;
  }
  if ( (unsigned int)v5 <= 0x5EE )
  {
    v7 = &stru_14011B5C0;
    goto LABEL_3;
  }
  *(_QWORD *)&v31.Data1 = 0LL;
  v7 = 0LL;
  v9 = (unsigned int)v6;
  if ( (v5 + v6) >> 32 )
    return 0LL;
  v30 = 0LL;
  LOBYTE(v30.Data1) = 1;
  *(_DWORD *)v30.Data4 = 0;
  result = (struct _MDL *)ExAllocatePool3(66LL, (unsigned int)(v6 + v5), 1919960142LL, &v30, 1);
LABEL_4:
  v10 = result;
  if ( !result )
    return result;
  result->ByteCount = v5;
  *(_QWORD *)&v30.Data1 = (char *)result + v9;
  result->Next = 0LL;
  result->MdlFlags = 0;
  result->ByteOffset = ((_WORD)result + (_WORD)v9) & 0xFFF;
  result->Size = 8 * (((v5 + (((_WORD)result + (_WORD)v9) & 0xFFF) + 4095LL) >> 12) + 6);
  result->StartVa = (PVOID)(((unsigned __int64)result + v9) & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(result);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(PoolHandle, 0, 0, v10, 0, v5);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_37;
  v12 = *(struct _MDL **)(v3 + 8);
  v29 = v12;
  if ( (v12->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = (char *)v12->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000000u);
    v12 = v29;
  }
  if ( !MappedSystemVa || (ByteCount = v12->ByteCount, v15 = *(unsigned int *)(v3 + 16), (unsigned int)v15 > ByteCount) )
  {
LABEL_36:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_37:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( v7 )
      ExFreeToNPagedLookasideList(v7, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return 0LL;
  }
  v16 = *(char **)&v30.Data1;
  v17 = ByteCount - v15;
  v18 = v5;
  if ( v17 < (unsigned int)v5 )
    v18 = v17;
  v19 = v18;
  memmove(*(void **)&v30.Data1, &MappedSystemVa[v15], v18);
  v21 = v29;
  while ( 1 )
  {
    v21 = v21->Next;
    v16 += v19;
    LODWORD(v5) = v5 - v18;
    if ( !v21 )
      break;
    v22 = v21->ByteCount;
    if ( (v21->MdlFlags & 5) != 0 )
      v23 = v21->MappedSystemVa;
    else
      v23 = MmMapLockedPagesSpecifyCache(v21, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v23 )
    {
      v7 = *(struct _NPAGED_LOOKASIDE_LIST **)&v31.Data1;
      goto LABEL_36;
    }
    v18 = v5;
    if ( v22 < (unsigned int)v5 )
      v18 = v22;
    v19 = v18;
    memmove(v16, v23, v18);
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = a2;
  NetBufferAndNetBufferList->MiniportReserved[1] = *(void **)&v31.Data1;
  NetBufferAndNetBufferList->SourceHandle = *(void **)(a3 + 120);
  if ( (*(_DWORD *)(a3 + 136) & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
  }
  if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  NetBufferAndNetBufferList->NetBufferListInfo[0] = *(void **)(a3 + 144);
  NetBufferAndNetBufferList->NetBufferListInfo[1] = *(void **)(a3 + 152);
  NetBufferAndNetBufferList->NetBufferListInfo[2] = *(void **)(a3 + 160);
  NetBufferAndNetBufferList->NetBufferListInfo[3] = *(void **)(a3 + 168);
  NetBufferAndNetBufferList->NetBufferListInfo[4] = *(void **)(a3 + 176);
  NetBufferAndNetBufferList->NetBufferListInfo[6] = *(void **)(a3 + 192);
  NetBufferAndNetBufferList->NetBufferListInfo[7] = *(void **)(a3 + 200);
  NetBufferAndNetBufferList->NetBufferListInfo[11] = *(void **)(a3 + 232);
  NetBufferAndNetBufferList->NetBufferListInfo[12] = *(void **)(a3 + 240);
  if ( byte_14011D800 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(a3 + 248);
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v24 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v30.Data4 = 0LL;
    *(_QWORD *)&v30.Data1 = v24;
    v25 = *(_QWORD *)(a3 + 248) & 0x7FFFFFFFFFFFFFFFLL;
    v31 = (struct _GUID)*(unsigned __int64 *)&v30.Data1;
    v30 = (struct _GUID)(unsigned __int64)v25;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v20, &v31, &v30, DataOffset, DataLength, 6u);
  }
  return (struct _MDL *)NetBufferAndNetBufferList;
}
