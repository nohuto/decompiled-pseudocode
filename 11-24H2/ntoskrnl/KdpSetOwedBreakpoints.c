/*
 * XREFs of KdpSetOwedBreakpoints @ 0x140B7A7DC
 * Callers:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 * Callees:
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x140B7930C (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140B799F0 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x140B79BDC (KdpRemoveBreakpoint.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
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
  __int64 v10; // r8
  unsigned __int8 *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  int inserted; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  v17 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v2 = (__int64 *)&unk_140F47888;
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( (__int64)v2 >= (__int64)&KdTimerStop )
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
    v11 = (unsigned __int8 *)&unk_140F478A5;
    do
    {
      v12 = *(unsigned int *)(v11 - 5);
      if ( (v12 & 0xA) != 0 )
      {
        v13 = *(_QWORD *)(v11 - 37);
        if ( v13 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v11 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((void *)(v13 & ~(unsigned __int64)*v11), (__int64)&v17, *(v11 - 1), 4) >= 0 )
          {
            v14 = (__int64)(v11 - 37);
            if ( (*(_DWORD *)(v11 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v11 - 13) = v17;
              inserted = KdpInsertBreakpoint(v14, &v17);
              if ( inserted )
                *(_DWORD *)(v11 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v14, &v17);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v11 += 40;
    }
    while ( (__int64)v11 < (__int64)byte_140F47DA5 );
    LOBYTE(v12) = v9;
    return (_UNKNOWN **)KdExitDebugger(v12, v8, v10);
  }
  return result;
}
