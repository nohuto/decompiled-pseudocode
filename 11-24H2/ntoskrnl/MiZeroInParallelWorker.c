/*
 * XREFs of MiZeroInParallelWorker @ 0x140313F70
 * Callers:
 *     <none>
 * Callees:
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiZeroChainWorker @ 0x140314138 (MiZeroChainWorker.c)
 *     MiZeroMoveToProcessor @ 0x140314978 (MiZeroMoveToProcessor.c)
 *     MiRevertProcessorMove @ 0x1403149DC (MiRevertProcessorMove.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiZeroInParallelWorker(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r9d
  __int64 v4; // r15
  unsigned __int8 v5; // al
  char v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-89h] BYREF
  int v14; // [rsp+30h] [rbp-81h]
  int v15; // [rsp+34h] [rbp-7Dh]
  __int128 v16; // [rsp+38h] [rbp-79h] BYREF
  __int128 v17; // [rsp+48h] [rbp-69h]
  _BYTE v18[128]; // [rsp+58h] [rbp-59h] BYREF

  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  memset_0(v18, 0, sizeof(v18));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(v2 + 88);
  v4 = *(unsigned int *)(v2 + 40);
  if ( v3 == -1 )
    v3 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v5 = MiAssignDefaultChannel(v3);
  v14 = ((2 * (v6 & 0x3F | 0x380)) | v5 & 1) << 8;
  v13 = v7 + 34640;
  v8 = (unsigned __int64)v18 & -(__int64)((unsigned int)MiCreateUltraThreadContext(
                                                          v18,
                                                          &v13,
                                                          15LL,
                                                          (*(_DWORD *)(v2 + 16) >> 1) & 4) != 0);
  MiZeroMoveToProcessor(a1, &v16);
  v9 = 0;
  while ( v9 < (unsigned int)v4 )
  {
    if ( *(_QWORD *)(a1 + 112) != a1 + 112
      && !*(_DWORD *)(a1 + 96)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
    {
      MiZeroChainWorker(v2, a1, v17, v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 108), 0xFFFFFFFF) == 1 )
      {
        KeSignalGate((PVOID)(v2 + 120));
        break;
      }
    }
    v10 = a1 + 128;
    ++v9;
    v11 = a1 == v2 + (v4 << 7) + 40;
    a1 = v2 + 168;
    if ( !v11 )
      a1 = v10;
  }
  result = MiRevertProcessorMove(&v16);
  if ( v8 )
    return MiDeleteUltraThreadContext(v8);
  return result;
}
