/*
 * XREFs of TtmiSessionTerminalListWorker @ 0x14076FDD4
 * Callers:
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmiEvacuateDevices @ 0x140768B64 (TtmiEvacuateDevices.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x14076A030 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiUpdateActiveTerminalCount @ 0x14076A484 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14076A858 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogTerminalCleanup @ 0x14076E9C8 (TtmiLogTerminalCleanup.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x14076EC14 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmpUpdateTerminalState @ 0x140770790 (TtmpUpdateTerminalState.c)
 */

void __fastcall TtmiSessionTerminalListWorker(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  char v5; // r15
  char v8; // r10
  unsigned int *v9; // r14
  _DWORD *v10; // rsi
  int v11; // eax
  unsigned int v12; // r8d
  void ***v13; // rax
  bool v14; // zf
  char v15; // dl
  char v16; // al
  _QWORD *v17; // rcx
  void **v18; // rax
  _BYTE *v19; // rdx
  unsigned int v20; // eax
  __int64 *i; // rcx
  int v22; // edx
  int v23; // r8d
  void ***v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+3Ch] [rbp-C4h]
  int v28; // [rsp+40h] [rbp-C0h]
  char v29; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v30; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE *v31; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v32; // [rsp+2B8h] [rbp+1B8h]

  v31 = a3;
  v3 = a1 + 40;
  v30 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  v29 = 0;
  *a2 = 0;
  *a3 = 0;
  if ( v4 != (_QWORD *)(a1 + 40) )
  {
    v8 = 1;
    do
    {
      v9 = (unsigned int *)v4 + 9;
      v10 = v4;
      v11 = *((_DWORD *)v4 + 9);
      if ( ((unsigned __int8)v11 & (unsigned __int8)v8) != 0 )
      {
        v12 = *((_DWORD *)v4 + 7);
        v13 = (void ***)(v4 + 1);
        v4 = (_QWORD *)v4[1];
        v24 = v13;
        v32 = v12;
        TtmiLogTerminalCleanup();
        if ( (*v9 & 0x10) != 0 )
        {
          v14 = TtmiUpdateActiveTerminalCount((_DWORD *)a1, 0, 26) == 0;
          v16 = v15 + 1;
          if ( !v14 )
            *a2 = v16;
        }
        else
        {
          v16 = 1;
        }
        if ( v10[8] )
          v5 = v16;
        if ( TtmiEvacuateDevices(a1, (__int64)v10) )
          *v31 = 1;
        v17 = *(_QWORD **)v10;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 || (v18 = *v24, **v24 != v10) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
        *((_QWORD *)v10 + 2) = 0LL;
        TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
        v19 = (_BYTE *)(*(_QWORD *)(a1 + 64) + ((unsigned __int64)v32 >> 3));
        *v19 &= ~(1 << (v32 & 7));
        v20 = *v9;
        *((_QWORD *)v10 + 2) = 0LL;
        v10[6] = 1417180244;
        *v9 = v20 & 0xFFFFFFFC | 2;
        ObfDereferenceObject(v10);
        v8 = 1;
      }
      else if ( (v11 & 4) != 0 )
      {
        *v9 = v11 & 0xFFFFFFFB;
        TtmpUpdateTerminalState(a1, v4, &v30, &v29);
        if ( v29 )
        {
          for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 149) == *((_DWORD *)v4 + 7) )
              *((_DWORD *)i + 150) |= 0x40u;
          }
          memset_0(&v25, 0, 0x220uLL);
          v22 = *((_DWORD *)v4 + 69);
          v23 = *((_DWORD *)v4 + 70);
          v26 = *((_DWORD *)v4 + 7);
          v27 = v22;
          v28 = v23;
          v25 = 2;
          TtmiLogTerminalDisplayStateChangedEvent(v26, v22, v23);
          TtmiWriteEventToAllQueues(a1, (__int64)&v25);
          v8 = 1;
          *v31 = 1;
        }
        else
        {
          v8 = 1;
        }
        if ( v30 && TtmiUpdateActiveTerminalCount((_DWORD *)a1, (*((_DWORD *)v4 + 9) & 0x10) != 0, *((_DWORD *)v4 + 11)) )
          *a2 = v8;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != (_QWORD *)v3 );
    if ( v5 )
      TtmiPurgeSessionPowerRequestEntries(a1);
  }
}
