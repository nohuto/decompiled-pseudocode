/*
 * XREFs of ShipAssert @ 0x1800DDFF0
 * Callers:
 *     ShipAssertMsgA @ 0x180132A80 (ShipAssertMsgA.c)
 * Callees:
 *     GetShipAssertBuffer @ 0x1800DE1E4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rax
  unsigned int *p_LastErrorValue; // r14
  unsigned int LastErrorValue; // r15d
  $0F0CF1477DD258E599462CF86DF691E6 *v7; // rsi
  __int64 result; // rax
  __int64 ShipAssertBuffer; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  _DWORD v19[4]; // [rsp+40h] [rbp-E8h]
  int v20; // [rsp+50h] [rbp-D8h]
  int v21; // [rsp+54h] [rbp-D4h]
  _DWORD v22[42]; // [rsp+58h] [rbp-D0h]

  v4 = NtCurrentTeb();
  p_LastErrorValue = &v4->LastErrorValue;
  LastErrorValue = v4->LastErrorValue;
  v7 = &v4->6126;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v7->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer();
    v11 = 0;
    if ( ShipAssertBuffer && ShipAssertBuffer != 255 && ShipAssertBuffer != 238 )
    {
      v10 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_1801CBF70, 1u) + 1) & 0x3FF;
      *(_DWORD *)(ShipAssertBuffer + 8LL * (unsigned int)v10) = a1;
      *(_DWORD *)(ShipAssertBuffer + 8LL * (unsigned int)v10 + 4) = a2;
    }
    v19[0] = a1;
    v19[1] = a2;
    v19[2] = 0;
    if ( (int)WerEscalationLazyInit(v10) >= 0 && !g_disableEscalation )
    {
      v12 = *(_DWORD *)(g_werEscalationData + 560);
      v13 = *(_DWORD *)(g_werEscalationData + 520);
      v20 = 16;
      v22[0] = v13;
      v21 = 1;
      v14 = *(_DWORD *)(g_werEscalationData + 524);
      v22[2] = 16;
      v22[4] = v14;
      v22[3] = 1;
      v15 = *(_DWORD *)(g_werEscalationData + 528);
      v22[6] = 16;
      v22[8] = v15;
      v22[7] = 1;
      v16 = *(_DWORD *)(g_werEscalationData + 532);
      v22[10] = 16;
      v22[12] = v16;
      v22[11] = 1;
      while ( v11 < 3 )
      {
        v17 = v19[v11];
        v18 = 2LL * (v11 + 4);
        *(&v20 + 2 * v18) = 16;
        v22[2 * v18] = v17;
        v22[2 * v18 - 1] = 1;
        ++v11;
      }
      v22[22] = 16;
      v22[24] = v12;
      v22[23] = 1;
    }
    result = 65519LL;
    v7->SameTebFlags &= ~0x10u;
    *p_LastErrorValue = LastErrorValue;
  }
  return result;
}
