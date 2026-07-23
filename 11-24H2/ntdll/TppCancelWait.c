/*
 * XREFs of TppCancelWait @ 0x1800876C0
 * Callers:
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x18010B800 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x180161320 (ZwCancelWaitCompletionPacket.c)
 */

__int64 __fastcall TppCancelWait(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  _BYTE *v8; // rbx
  unsigned __int8 v9; // di
  __int64 result; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  char v13; // al
  char v14; // al

  v4 = a3 & 2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v11 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), v4 != 0);
    if ( v11 )
    {
      if ( v11 != 259 && v11 != -1073741536 )
        TppRaiseInvalidParameter(v12);
      v8 = (_BYTE *)(a1 + 464);
      v9 = 0;
      v14 = *(_BYTE *)(a1 + 464);
      if ( (v14 & 4) == 0 )
      {
        *v8 = v14 | 4;
        TppBarrierAdjust((_RTL_SRWLOCK *)(a1 + 56), 1, 0);
      }
      *a4 = 0;
    }
    else
    {
      v9 = 1;
      *(_QWORD *)(a1 + 360) = 0LL;
      v13 = TppCancelTimer(a1, a2, 1LL);
      *a4 = -1;
      if ( v13 )
        *a4 = -2;
      v8 = (_BYTE *)(a1 + 464);
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)(a1 + 56), -1, 0);
        *v8 &= ~4u;
      }
    }
  }
  else
  {
    v8 = (_BYTE *)(a1 + 464);
    *a4 = 0;
    v9 = 1;
  }
  *v8 &= ~1u;
  result = v9;
  *v8 &= ~2u;
  return result;
}
