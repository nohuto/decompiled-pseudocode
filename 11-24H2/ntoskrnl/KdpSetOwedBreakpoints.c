/*
 * XREFs of KdpSetOwedBreakpoints @ 0x140B7C7DC
 * Callers:
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 * Callees:
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x140B7B30C (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140B7B9F0 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x140B7BBDC (KdpRemoveBreakpoint.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 */

_UNKNOWN **__fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rdx
  unsigned __int64 v3; // r8
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  char v9; // si
  unsigned __int8 *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  int inserted; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  v16 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v2 = (__int64 *)&unk_140F48B28;
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( (__int64)v2 >= (__int64)&KdTimerDifference )
        return (_UNKNOWN **)KdpBreakpointChangeCount;
      if ( (v2[3] & 0xA) != 0 )
      {
        v5 = *(v2 - 1);
        if ( v5 >= 0xFFFF800000000000uLL || (_KPROCESS *)*v2 == Process )
        {
          v6 = v5 & ~(unsigned __int64)*((unsigned __int8 *)v2 + 29);
          if ( v6 >= v3 && v6 < v3 + 4096 )
            break;
          v7 = v6 + *((unsigned __int8 *)v2 + 28);
          if ( v7 >= v6 && v7 > v3 && v7 <= v3 + 4096 )
            break;
        }
      }
      v2 += 5;
    }
    v9 = KdEnterDebugger(0LL, 0LL);
    KdpOweBreakpoint = 0;
    v10 = (unsigned __int8 *)&unk_140F48B45;
    do
    {
      v11 = *(unsigned int *)(v10 - 5);
      if ( (v11 & 0xA) != 0 )
      {
        v12 = *(_QWORD *)(v10 - 37);
        if ( v12 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v10 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((void *)(v12 & ~(unsigned __int64)*v10), (__int64)&v16, *(v10 - 1), 4) >= 0 )
          {
            v13 = (__int64)(v10 - 37);
            if ( (*(_DWORD *)(v10 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v10 - 13) = v16;
              inserted = KdpInsertBreakpoint(v13, &v16);
              if ( inserted )
                *(_DWORD *)(v10 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v13, &v16);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v10 += 40;
    }
    while ( (__int64)v10 < (__int64)((unsigned __int8 *)&KdpSearchPageHitIndex + 1) );
    LOBYTE(v11) = v9;
    return (_UNKNOWN **)KdExitDebugger(v11, v8);
  }
  return result;
}
