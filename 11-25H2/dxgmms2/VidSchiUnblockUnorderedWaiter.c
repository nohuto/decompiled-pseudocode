/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x140030434
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x14003D658 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

char __fastcall VidSchiUnblockUnorderedWaiter(HwQueueStagingList *a1, __int64 a2, char a3)
{
  _DWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v6; // rdi
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = (_QWORD *)(a2 + 192);
  v6 = *(_QWORD **)(a2 + 192);
  while ( v6 != v4 )
  {
    v9 = (__int64)(v6 - 96);
    v6 = (_QWORD *)*v6;
    if ( a3
      || *(_DWORD *)(a2 + 48) == 2
      && (!*(_BYTE *)(a2 + 28) ? (v10 = *(_QWORD *)(a2 + 72)) : (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 304) + 40LL)),
          *(_QWORD *)(v9 + 800) <= v10) )
    {
LABEL_16:
      LOBYTE(v3) = VidSchiUnblockUnorderedWaitQueuePacket(a1, v9, a3);
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(a2 + 48);
      if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 5 )
      {
        v11 = *(_QWORD *)(v9 + 800);
        if ( *(_BYTE *)(a2 + 29) )
        {
LABEL_15:
          LODWORD(v3) = *(_DWORD *)(v9 + 752);
          if ( ((unsigned __int8)v3 & 4) != 0 )
            goto LABEL_16;
        }
        else if ( *(_BYTE *)(a2 + 30) )
        {
          LOBYTE(v3) = **(_QWORD **)(a2 + 72) >= v11;
          if ( **(_QWORD **)(a2 + 72) >= v11 )
            goto LABEL_15;
        }
        else
        {
          v3 = *(_DWORD **)(a2 + 72);
          if ( *v3 - (int)v11 >= 0 )
            goto LABEL_15;
        }
      }
    }
  }
  return (char)v3;
}
