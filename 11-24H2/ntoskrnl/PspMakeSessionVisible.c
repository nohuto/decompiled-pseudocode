/*
 * XREFs of PspMakeSessionVisible @ 0x140AACF48
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PspMakeSessionVisible(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  bool v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(a1 + 4) |= 1u;
  v3 = (_QWORD *)qword_140F05C28;
  v4 = (_QWORD *)(a1 + 80);
  if ( *(__int64 **)qword_140F05C28 != &PsActiveSessionHead )
    __fastfail(3u);
  *v4 = &PsActiveSessionHead;
  v5 = 0;
  *(_QWORD *)(a1 + 88) = v3;
  *v3 = v4;
  v6 = (_QWORD *)PspSessionIdNodes;
  qword_140F05C28 = a1 + 80;
  if ( PspSessionIdNodes )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) >= *((_DWORD *)v6 - 22) )
      {
        v7 = (_QWORD *)v6[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
      }
      v6 = v7;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&PspSessionIdNodes, (unsigned __int64)v6, v5, (_QWORD *)(a1 + 96));
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
