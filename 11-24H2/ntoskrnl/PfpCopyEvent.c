/*
 * XREFs of PfpCopyEvent @ 0x140971B9C
 * Callers:
 *     PfpFlushEventBuffers @ 0x140971A8C (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PfpLogPageAccess @ 0x140972190 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x140972854 (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfpCopyEvent(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  PEPROCESS v20; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v22; // r8
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v2 = *a2;
  v3 = 0;
  Process = 0LL;
  if ( (v2 & 0x1F000) == 0xA000 )
  {
    v10 = a2[4];
    v11 = *((unsigned int *)a2 + 12);
    v12 = -1;
    v23 = 0LL;
    if ( (v10 & 0x7FFFFFFFFFFFFFFFuLL) < 0xFF )
      v12 = v10;
    v13 = 2LL;
    if ( v10 >= 0 )
      v13 = 4098LL;
    DWORD2(v23) = v12 | ((_DWORD)v11 << 8);
    v24 = a2[3] << 12;
    *(_QWORD *)&v23 = v13 & 0xFFFFFFFF00FFFFFFuLL | v11 & 0xFFFFFFFFFF000000uLL;
    v14 = a2[5];
    LODWORD(v24) = v24 & 0xFFFFFE00 | 1;
    v15 = PfpLogPageAccess(a1, v14, (unsigned int)&v24, (unsigned int)&v23, (__int64)(a2 + 3), 1);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 152);
      v17 = (v16 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      v18 = *(unsigned __int16 *)(v15 + 10) - (unsigned int)*(unsigned __int16 *)(v16 + 36);
      v19 = 5 * v18;
      if ( (*(_BYTE *)(v17 + 40 * v18 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)a2 + 13), &Process) >= 0 )
      {
        v20 = Process;
        Flink = Process[1].ThreadListHead.Flink;
        if ( (((unsigned __int64)Flink ^ (unsigned __int64)Process[1].Header.WaitListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == a2[5]
          && Process[1].Header.WaitListHead.Flink
          && Flink )
        {
          v22 = *(_QWORD *)(v17 + 8 * v19 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v17 + 8 * v19 + 8) = v22;
          *(_QWORD *)(v17 + 8 * v19 + 8) = v22 & 7 | (8
                                                    * ((__int64)v20[1].Header.WaitListHead.Flink ^ (__int64)v20[1].ThreadListHead.Flink));
          *(_DWORD *)(v17 + 8 * v19 + 20) = HIDWORD(v20[1].CpuPartitionList.Blink);
          *(_DWORD *)(v17 + 8 * v19 + 16) = v20[1].Header.WaitListHead.Flink;
        }
        ObfDereferenceObjectWithTag(v20, 0x746C6644u);
      }
    }
    else
    {
      return (unsigned int)-1073741432;
    }
  }
  else
  {
    v6 = (v2 >> 2) & 0x3FF;
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      v8 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)(v8 + v6) <= *(_DWORD *)(v7 + 20) )
        break;
      if ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 88) == -1073741823 )
        return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v7 + 16) = v8 + v6;
    if ( v7 )
    {
      memmove((void *)(((v7 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16 * v8), a2, (unsigned int)(16 * v6));
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  return v3;
}
