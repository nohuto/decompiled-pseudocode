/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1409F1D48
 * Callers:
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 * Callees:
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D04C0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiDqIrpComplete @ 0x1409F2684 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1409F26F0 (PiDqQueryGetNextIoctlInfo.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r12
  _QWORD *v4; // rdi
  char v5; // r13
  int *v6; // rsi
  int v7; // eax
  int *v8; // r12
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+30h] [rbp-68h]
  _OWORD v13[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD **)(*(_QWORD *)(v3 + 48) + 32LL);
  v12 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v14 = 0;
  v15 = 0;
  v13[0] = 0LL;
  v6 = (int *)(v4 + 27);
  if ( !v4 )
  {
    v2 = -1073741637;
    goto LABEL_13;
  }
  PiDqQueryLock((__int64)v4);
  v7 = *v6;
  if ( (*v6 & 8) != 0 )
  {
    v2 = -1073741536;
    goto LABEL_4;
  }
  if ( (v7 & 4) == 0 )
  {
LABEL_31:
    v2 = -1073741637;
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
  v2 = -1073741670;
LABEL_4:
  PiDqQueryUnlock((__int64)v4);
  if ( v2 < 0 )
    goto LABEL_12;
  v8 = (int *)(v3 + 8);
  if ( (unsigned int)*v8 < 0x10 )
  {
    v2 = -1073741789;
  }
  else
  {
    if ( v12 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), (unsigned int)*v8, 8u);
      v2 = PiDqQuerySerializeActionQueue((KSPIN_LOCK)v4, *(_QWORD *)(a1 + 112), *v8, (int *)&v14, &v15);
      if ( v2 < 0 )
        goto LABEL_12;
      PiDqQueryLock((__int64)v4);
      PiDqQueryGetNextIoctlInfo(v4, (unsigned int)*v8, v15, v13);
LABEL_11:
      PiDqQueryUnlock((__int64)v4);
LABEL_12:
      if ( v2 == 259 )
        return (unsigned int)v2;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock((__int64)v4);
      if ( !v4[23] && (_QWORD *)v4[24] == v4 + 24 && (*(_DWORD *)(v4[3] + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v2 = -1073741536;
        }
        else
        {
          v4[22] = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          v2 = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, (unsigned int)*v8, 0LL, v13);
        v14 = 16;
      }
      goto LABEL_11;
    }
    v2 = -1073741811;
  }
LABEL_13:
  if ( v5 )
  {
    PiDqQueryLock((__int64)v4);
    v9 = *v6 & 0xFFFFFFEF;
    *v6 = v9;
    if ( v2 < 0 )
    {
      *v6 = v9 | 1;
      PiDqQueryFreeActiveData((__int64)v4);
    }
    PiDqQueryUnlock((__int64)v4);
  }
  PiDqIrpComplete(a1, (unsigned int)v2, v14, v13, v11);
  return (unsigned int)v2;
}
