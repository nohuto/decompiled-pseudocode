/*
 * XREFs of _InitThreadCoreMessagingIocp2 @ 0x1401C60DC
 * Callers:
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1401C5FD0 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserInitThreadCoreMessagingIocp @ 0x140298A00 (NtUserInitThreadCoreMessagingIocp.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp2(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rbp
  struct tagTHREADINFO *v5; // rsi
  unsigned int i; // ebx
  __int64 v7; // rax
  int v9; // ecx
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+4Ch] [rbp-2Ch]
  __int128 v16; // [rsp+50h] [rbp-28h]

  v4 = 0LL;
  v5 = PtiCurrent(a1, (__int64)a2);
  if ( v5 != *(struct tagTHREADINFO **)(a1 + 16) )
  {
    v9 = 5;
LABEL_12:
    UserSetLastError(v9);
    return v4;
  }
  if ( !a2 )
  {
LABEL_16:
    v9 = 87;
    goto LABEL_12;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
      v9 = 1247;
      goto LABEL_12;
    }
    v7 = *((_QWORD *)v5 + i + 207);
    if ( !v7 )
      break;
    if ( a1 == v7 )
      goto LABEL_16;
  }
  if ( *((_QWORD *)v5 + 206)
    || (v11[1] = 0,
        v15 = 0,
        v12 = 0LL,
        v13 = 0LL,
        v16 = 0LL,
        v11[0] = 48,
        v14 = 512,
        (int)ZwAllocateReserveObject((char *)v5 + 1648, v11, 1LL) >= 0) )
  {
    v4 = *((_QWORD *)v5 + 203);
    if ( v4 )
    {
      v10[0] = (char *)v5 + 8 * i + 1656;
      v10[1] = a1;
      HMAssignmentLock(v10, 0LL);
      *(_DWORD *)(a1 + 384) |= 0x40u;
      *a2 = i;
    }
  }
  else
  {
    UserSetLastError(14);
    *((_QWORD *)v5 + 206) = 0LL;
  }
  return v4;
}
