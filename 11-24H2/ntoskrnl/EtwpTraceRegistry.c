/*
 * XREFs of EtwpTraceRegistry @ 0x140875270
 * Callers:
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmpEtwDumpKcb @ 0x14092E190 (CmpEtwDumpKcb.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int16 v7; // r12
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // edx
  _KTHREAD *CurrentThread; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  int v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+54h] [rbp-74h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-68h]
  __int64 *v26; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-58h]
  int v28; // [rsp+80h] [rbp-48h]
  int v29; // [rsp+84h] [rbp-44h]

  v7 = a1;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v12 + 4556);
    if ( v13 && (*v13 & 0x20000) != 0 )
    {
      v14 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4505);
      v15 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4504);
      v25 = 0LL;
      v16 = 1;
      v22 = a3;
      v21 = *(_QWORD *)(a2 + 8 * v14 - 8);
      v26 = &v21;
      v23 = a4;
      v24 = a5;
      v27[0] = 24LL;
      if ( a6 )
      {
        v20 = *(_WORD *)a6 & 0xFFFE;
        if ( *(_QWORD *)(a6 + 8) )
        {
          if ( (*(_WORD *)a6 & 0xFFFE) != 0 )
          {
            v27[1] = *(_QWORD *)(a6 + 8);
            v16 = 2;
            v28 = v20;
            v29 = 0;
          }
        }
      }
      CurrentThread = KeGetCurrentThread();
      v18 = 2LL * v16;
      v19 = EtwpHostSiloState;
      v27[v18 - 1] = &EtwpNull;
      v27[v18] = 2LL;
      EtwpLogSystemEventUnsafe(v19, (__int64)&v26, CurrentThread, v15, v16 + 1, v7 | 0x900, 0x601902u, 0);
    }
  }
}
