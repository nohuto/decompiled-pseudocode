/*
 * XREFs of KiDisconnectInterruptInternal @ 0x140373EC0
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     KiProcessPendingDisconnect @ 0x1403AE7B0 (KiProcessPendingDisconnect.c)
 * Callees:
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  v2 = 0;
  v4 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v5 = *(unsigned int *)(a1 + 88);
    v6 = KeGetCurrentPrcb()->InterruptObject[v5];
    if ( !*((_BYTE *)v6 + 93) )
    {
      v11 = (_QWORD *)v6[1];
      if ( !v11 || v11 == v6 + 1 )
        v2 = 1;
    }
    if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v6[10] != KiChainedDispatch
      || v2 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v5] = 0LL;
      v4 = 0;
    }
    else
    {
      if ( (_QWORD *)a1 == v6 )
      {
        v6 = (_QWORD *)(v6[1] - 8LL);
        v6[10] = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v5] = v6;
      }
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 8 || *v9 != a1 + 8 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = v6[1] - 8LL;
      if ( v6 == (_QWORD *)v10 && *(_BYTE *)(v10 + 93) )
      {
        *(_QWORD *)(v10 + 80) = KiInterruptDispatch;
        KeGetCurrentPrcb()->InterruptObject[v5] = (void *)v10;
      }
      v4 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v4;
}
