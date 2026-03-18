/*
 * XREFs of SuspendThreadQueue @ 0x1C0085B00
 * Callers:
 *     <none>
 * Callees:
 *     UnlinkSendListSms @ 0x1C00274A8 (UnlinkSendListSms.c)
 *     xxxReceiverDied @ 0x1C00275E0 (xxxReceiverDied.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C008CB48 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  _QWORD *v2; // rsi
  unsigned int *v3; // rbx
  __int64 *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  unsigned int *v7; // rbp
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 488) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD **)(a1 + 432);
    v3 = (unsigned int *)v2[3];
    if ( v3 )
    {
      do
      {
        v7 = *(unsigned int **)v3;
        if ( v3[24] == 9
          && v3 != (unsigned int *)v2[11]
          && v3 != (unsigned int *)v2[10]
          && !_bittest((const signed __int32 *)v3 + 25, 8u) )
        {
          v8 = v3[6];
          if ( (unsigned int)v8 < 0x400 && (MessageTable[v8] & 0x1C00) == 0 )
          {
            CleanEventMessage((void **)v3);
            DelQEntry(v2 + 3, v3, 1LL);
          }
        }
        v3 = v7;
      }
      while ( v7 );
    }
    v4 = *(__int64 **)(a1 + 808);
    if ( v4 )
    {
      do
      {
        v9 = (__int64 *)*v4;
        if ( v4 != (__int64 *)v2[11] && v4 != (__int64 *)v2[10] && !_bittest((const signed __int32 *)v4 + 25, 8u) )
        {
          v10 = *((unsigned int *)v4 + 6);
          if ( (unsigned int)v10 < 0x400 && (MessageTable[v10] & 0x1C00) == 0 )
          {
            CleanInputMessage(v10, (struct tagQMSG *)v4);
            DelQEntry(a1 + 808, v4, 1LL);
          }
        }
        v4 = v9;
      }
      while ( v9 );
    }
    v5 = (_QWORD *)(a1 + 520);
    v6 = *(_QWORD **)(a1 + 520);
    if ( v6 != (_QWORD *)(a1 + 520) )
    {
      do
      {
        v11 = (__int64)(v6 - 2);
        v12 = v6;
        v13 = v6[6] == 0LL;
        v6 = (_QWORD *)*v6;
        if ( v13 )
        {
          v14 = *(_DWORD *)(v11 + 84);
          if ( (v14 & 0x4000) == 0 )
          {
            v15 = *(_QWORD *)(v11 + 32);
            if ( v15 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(a1 + 424), **(_QWORD **)(v15 + 424)) )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
                xxxReceiverDied(v11);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19);
              }
            }
            else if ( (v14 & 8) != 0 )
            {
              v16 = *(unsigned int *)(v11 + 104);
              if ( (unsigned int)v16 < 0x400 && (MessageTable[v16] & 0x1C00) == 0 )
              {
                --*(_DWORD *)(a1 + 536);
                v17 = *v12;
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v18 = (_QWORD *)v12[1], (_QWORD *)*v18 != v12) )
                  __fastfail(3u);
                *v18 = v17;
                *(_QWORD *)(v17 + 8) = v18;
                *v12 = 0LL;
                if ( (_QWORD *)*v5 == v5 )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 8LL),
                    0xFFFFFFBF);
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 4LL),
                    0xFFFFFFBF);
                }
                UnlinkSendListSms((__int64 *)v11);
              }
            }
          }
        }
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(a1 + 1272) |= 0x20u;
  }
}
