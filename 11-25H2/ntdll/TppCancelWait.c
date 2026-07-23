/*
 * XREFs of TppCancelWait @ 0x18003E2E0
 * Callers:
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180113310 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
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
        TppBarrierAdjust(a1 + 56, 1LL, 0LL);
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
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL, 0LL);
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
