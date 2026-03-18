/*
 * XREFs of PiDqIrpQueryGetResult @ 0x140836400
 * Callers:
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 * Callees:
 *     PiDqIrpComplete @ 0x140837D78 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x140837DE4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140839798 (PiDqQueryGetNextIoctlInfo.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int SerializeActionQueue; // ebx
  __int64 v3; // r12
  _QWORD *v4; // rdi
  char v5; // r13
  int *v6; // rsi
  int v7; // eax
  unsigned int *v8; // r12
  unsigned int v9; // eax
  int v11; // [rsp+30h] [rbp-68h]
  _OWORD v12[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+20h] BYREF

  SerializeActionQueue = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD **)(*(_QWORD *)(v3 + 48) + 32LL);
  v11 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v13 = 0;
  v14 = 0;
  v12[0] = 0LL;
  v6 = (int *)(v4 + 27);
  if ( !v4 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_13;
  }
  PiDqQueryLock(v4);
  v7 = *v6;
  if ( (*v6 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
    goto LABEL_4;
  }
  if ( (v7 & 4) == 0 )
  {
LABEL_31:
    SerializeActionQueue = -1073741637;
    goto LABEL_4;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) == 0 )
    {
      *v6 = v7 | 0x10;
      v5 = 1;
      goto LABEL_4;
    }
    goto LABEL_31;
  }
  SerializeActionQueue = -1073741670;
LABEL_4:
  PiDqQueryUnlock(v4);
  if ( SerializeActionQueue < 0 )
    goto LABEL_12;
  v8 = (unsigned int *)(v3 + 8);
  if ( *v8 < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( v11 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), *v8, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               (_DWORD)v4,
                               *(_QWORD *)(a1 + 112),
                               *v8,
                               (unsigned int)&v13,
                               (__int64)&v14);
      if ( SerializeActionQueue < 0 )
        goto LABEL_12;
      PiDqQueryLock(v4);
      PiDqQueryGetNextIoctlInfo(v4, *v8, v14, v12);
LABEL_11:
      PiDqQueryUnlock(v4);
LABEL_12:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v4);
      if ( !v4[23] && (_QWORD *)v4[24] == v4 + 24 && (*(_DWORD *)(v4[3] + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          SerializeActionQueue = -1073741536;
        }
        else
        {
          v4[22] = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *v8, 0LL, v12);
        v13 = 16;
      }
      goto LABEL_11;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_13:
  if ( v5 )
  {
    PiDqQueryLock(v4);
    v9 = *v6 & 0xFFFFFFEF;
    *v6 = v9;
    if ( SerializeActionQueue < 0 )
    {
      *v6 = v9 | 1;
      PiDqQueryFreeActiveData(v4);
    }
    PiDqQueryUnlock(v4);
  }
  PiDqIrpComplete(a1, (unsigned int)SerializeActionQueue, v13, v12);
  return (unsigned int)SerializeActionQueue;
}
