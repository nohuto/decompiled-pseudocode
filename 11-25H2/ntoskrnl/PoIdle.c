/*
 * XREFs of PoIdle @ 0x14044B7A0
 * Callers:
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 * Callees:
 *     PpmUpdateProcessorIdleAccounting @ 0x1403E7A78 (PpmUpdateProcessorIdleAccounting.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403E7CB0 (PpmResetProcessorIdleAccounting.c)
 *     PpmEventIdleStateChange @ 0x140497CE8 (PpmEventIdleStateChange.c)
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     PpmPerfSetProcessorIdle @ 0x1404C693C (PpmPerfSetProcessorIdle.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C9558 (PpmWakeClockOwnerIfNeeded.c)
 *     KeIdleSpecCtrl @ 0x1404E6ED0 (KeIdleSpecCtrl.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     HalProcessorIdle @ 0x14069A870 (HalProcessorIdle.c)
 *     KeExecuteVerw @ 0x1406B47C0 (KeExecuteVerw.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int *v4; // r14
  __int64 v5; // rcx
  unsigned __int16 v6; // si
  bool v7; // zf
  char i; // r15
  int v9; // edx
  char v10; // r12
  int v11; // edx
  __int64 v12; // rdx
  unsigned int v13; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+64h] [rbp-5h] BYREF
  int v15; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v18[8]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  char v20; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  result = dword_140F0B70C;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18[0] = 0LL;
  LOBYTE(v21) = 0;
  v20 = 0;
  v15 = 0;
  v13 = 0;
  LOBYTE(v19) = 0;
  if ( !BYTE5(PpmCurrentProfile[0][61 * dword_140F0B70C + 25]) )
  {
    v3 = *(_QWORD *)(BugCheckParameter4 + 34880);
    v4 = *(unsigned int **)(BugCheckParameter4 + 34888);
    if ( v3 )
    {
      for ( i = 0; ; i = 1 )
      {
        *(_DWORD *)(v3 + 1036) = 0;
        PpmUpdateProcessorIdleAccounting((_QWORD *)(BugCheckParameter4 + 34880));
        *(_BYTE *)(v3 + 5) = 1;
        PpmPerfSetProcessorIdle(BugCheckParameter4, &v19);
        v7 = PpmIdleVetoBias == 0;
        *(_WORD *)(v3 + 56) = 0;
        if ( !v7 )
        {
          if ( *(_BYTE *)(v3 + 16) )
            break;
        }
        v10 = v19;
        LOBYTE(v9) = v19;
        PpmIdleSelectStates(
          BugCheckParameter4,
          v9,
          (unsigned int)&v16,
          (unsigned int)&v17,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v15,
          (__int64)v18,
          (__int64)&v20);
        v11 = *(_DWORD *)(v3 + 24);
        if ( v13 != v11 )
        {
          *(_DWORD *)(v3 + 32) = v11;
          *(_DWORD *)(v3 + 24) = v13;
          PpmEventIdleStateChange(v13);
        }
        v7 = v4[1]++ == -1;
        if ( v7 )
          PpmResetProcessorIdleAccounting(v4, v16);
        v12 = 344LL * v13;
        LOBYTE(v12) = *(_BYTE *)(v12 + v3 + 1393);
        PpmWakeClockOwnerIfNeeded(BugCheckParameter4, v12);
        result = PpmIdleExecuteTransition(BugCheckParameter4, v14, v16, v17, v20, v10, i, (__int64)&v21);
        if ( !(_BYTE)v21 )
          return result;
      }
      v19 = 0;
      KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v19);
      v6 = v19;
      if ( (_WORD)v19 )
        __writemsr(0x48u, 0LL);
      v5 = HIWORD(v19);
      v7 = HIWORD(v19) == 0;
    }
    else
    {
      v19 = 0;
      KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v19);
      v6 = v19;
      if ( (_WORD)v19 )
      {
        v5 = 72LL;
        __writemsr(0x48u, 0LL);
      }
      v7 = HIWORD(v19) == 0;
    }
    if ( !v7 )
      KeExecuteVerw(v5);
    HalProcessorIdle(v5);
    if ( v6 )
      __writemsr(0x48u, v6);
    else
      _mm_lfence();
    return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v19);
  }
  return result;
}
