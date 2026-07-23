/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x1403DAF90
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403DAED4 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInitializeInPageSupport @ 0x1403DC938 (MiInitializeInPageSupport.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiPfIssueCoalescedSupport(signed __int16 **a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  char *v7; // r12
  int v8; // eax
  int v9; // ebp
  struct _FILE_OBJECT *v10; // r13
  signed __int16 *v11; // r14
  __int64 v12; // rax
  signed __int16 **v13; // rcx
  NTSTATUS v14; // eax
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  result = MiAllocatePool(0x40uLL, 8 * (a2 >> 12) + 320, 1933797709);
  v5 = 0LL;
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport(result, 0LL, 0LL);
    v7 = (char *)(v6 + 320);
    v8 = *(_DWORD *)(v6 + 192) | 0x1000000;
    v19 = 0LL;
    *(_DWORD *)(v6 + 192) = v8;
    v9 = 0;
    *(_QWORD *)(v6 + 272) = 0LL;
    *(_WORD *)(v6 + 282) = 0;
    *(_WORD *)(v6 + 280) = 8 * (((unsigned __int64)(v2 + 4095) >> 12) + 6);
    *(_QWORD *)(v6 + 304) = 0LL;
    *(_DWORD *)(v6 + 316) = 0;
    *(_DWORD *)(v6 + 312) = v2;
    *(_WORD *)(v6 + 282) |= 0x4042u;
    v10 = (struct _FILE_OBJECT *)MmBadPointer;
    while ( 1 )
    {
      v11 = *a1;
      if ( *a1 == (signed __int16 *)a1 )
        break;
      if ( *((signed __int16 ***)v11 + 1) != a1
        || (v12 = *(_QWORD *)v11, *(signed __int16 **)(*(_QWORD *)v11 + 8LL) != v11)
        || (*a1 = (signed __int16 *)v12,
            *(_QWORD *)(v12 + 8) = a1,
            v13 = *(signed __int16 ***)(v6 + 24),
            *v13 != (signed __int16 *)(v6 + 16)) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v11 = v6 + 16;
      *((_QWORD *)v11 + 1) = v13;
      *v13 = v11;
      *(_QWORD *)(v6 + 24) = v11;
      if ( !_bittest16(v11 + 141, 0xEu) )
        *(_WORD *)(v6 + 282) &= ~0x4000u;
      if ( v9 )
      {
        if ( v5 != *((_QWORD *)v11 + 12) )
        {
          *(_WORD *)(v6 + 282) &= ~0x4000u;
          v15 = *((_DWORD *)v11 + 24) - v5;
          v16 = (unsigned __int64)(8 * (v15 >> 12)) >> 3;
          memset64(v7, qword_140E37478, v16);
          v7 += 8 * v16;
          v5 += v15;
          v9 += v15;
        }
      }
      else
      {
        v5 = *((_QWORD *)v11 + 12);
        v10 = (struct _FILE_OBJECT *)*((_QWORD *)v11 + 25);
        v19 = v5;
      }
      v17 = (unsigned int)(8 * (*((_DWORD *)v11 + 46) >> 12));
      memmove(v7, v11 + 160, v17);
      v18 = *((unsigned int *)v11 + 46);
      v5 += v18;
      v9 += v18;
      v7 += 8 * (v17 >> 3);
    }
    v14 = IoPageReadEx(v10, v6 + 272, &v19, v6 + 32, v6 + 80, 6, 0LL);
    if ( v14 < 0 )
    {
      *(_QWORD *)(v6 + 88) = 0LL;
      *(_DWORD *)(v6 + 80) = v14;
      KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
    }
    return v6;
  }
  return result;
}
