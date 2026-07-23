/*
 * XREFs of PspSetNetRateControl @ 0x1407783E4
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PspNetRateControlDispatch @ 0x140777B64 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x1407781CC (PspSetJobRateControl.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PspLockJobConditionally @ 0x14085A6BC (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140A2BA80 (PspUnlockJobConditionally.c)
 *     EtwTraceJobSetQuery @ 0x140A4E224 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, __int64 a3)
{
  char v4; // r13
  int v5; // ebx
  int v6; // r14d
  int v7; // ecx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // r12
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  char v13; // r15
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h] BYREF
  int v19; // [rsp+40h] [rbp-88h]
  _DWORD v20[5]; // [rsp+44h] [rbp-84h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+60h] [rbp-68h] BYREF
  __int128 v23; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp-48h]

  v23 = 0LL;
  LODWORD(v24) = 0;
  v22 = 0LL;
  v17 = 0LL;
  v4 = 0;
  memmove(&v22, Src, (unsigned int)Size);
  if ( (DWORD2(v22) & 0xFFFFFFF8) == 0 )
  {
    v6 = BYTE8(v22) & 1;
    if ( (BYTE8(v22) & 1) != 0 )
    {
      v7 = BYTE8(v22) & 4;
      if ( (BYTE8(v22) & 4) != 0 && BYTE12(v22) > 0x40u || (BYTE8(v22) & 6) == 0 )
        return (unsigned int)-1073741811;
    }
    else
    {
      v7 = BYTE8(v22) & 4;
    }
    v18 = 0LL;
    memset(v20, 0, 12);
    v21 = 0LL;
    *(_QWORD *)&v20[3] = a3 + 1472;
    v19 = 0;
    v8 = BYTE8(v22) & 2;
    if ( (BYTE8(v22) & 2) != 0 )
    {
      LODWORD(v21) = v21 | 0x10;
      *(_QWORD *)&v20[1] = v22;
    }
    if ( v7 )
    {
      LODWORD(v21) = v21 | 8;
      BYTE4(v21) = BYTE12(v22);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockRootJobExclusive(a3, CurrentThread, &v17);
    PspLockJobConditionally(a3, &v17);
    v10 = *(_DWORD *)(a3 + 1552);
    v11 = v10 & 0x2000000;
    v12 = v10 & 0x4000000;
    if ( (_DWORD)v12 )
      v18 = *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 56LL);
    if ( (_BYTE)v6 )
    {
      if ( v11 )
      {
        if ( (_DWORD)v12 )
          LODWORD(v21) = v21 | 2;
      }
      else
      {
        LODWORD(v21) = v21 | 1;
      }
    }
    else if ( (_DWORD)v12 )
    {
      LODWORD(v21) = v21 | 4;
    }
    if ( (v21 & 1) != 0 )
    {
      v13 = BYTE8(v22);
      v5 = PspSetJobRateControl(a3, v12, SBYTE8(v22));
      if ( v5 < 0 )
        goto LABEL_39;
      v4 = 1;
      v14 = PspNetRateControlDispatch((__int64)&v18);
    }
    else
    {
      if ( (v21 & 7) != 0 )
      {
        v5 = PspNetRateControlDispatch((__int64)&v18);
        if ( v5 < 0 )
          goto LABEL_39;
      }
      v13 = BYTE8(v22);
      v14 = PspSetJobRateControl(a3, v12, SBYTE8(v22));
    }
    v5 = v14;
    if ( v14 < 0 )
      goto LABEL_40;
    if ( v6 )
    {
      if ( v8 )
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 1544) + 48LL) |= 1u;
        *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 40LL) = *(_QWORD *)&v20[1];
      }
      if ( (v13 & 4) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 1544) + 48LL) |= 2u;
        *(_BYTE *)(*(_QWORD *)(a3 + 1544) + 64LL) = BYTE4(v21);
      }
      *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 56LL) = v18;
      v15 = *(_QWORD *)(a3 + 1544);
      LODWORD(v23) = *(_DWORD *)(v15 + 48);
      *((_QWORD *)&v23 + 1) = *(_QWORD *)(v15 + 40);
      LOBYTE(v24) = *(_BYTE *)(v15 + 64);
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
    }
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobSetQuery(a3, 32, (unsigned int)&v23, 0, v14, 1829);
LABEL_39:
    if ( v5 >= 0 )
    {
LABEL_42:
      PspUnlockJobConditionally(a3, &v17);
      PspUnlockJob(v17, CurrentThread);
      return (unsigned int)v5;
    }
LABEL_40:
    if ( v4 )
      PspSetJobRateControl(a3, v12, 0);
    goto LABEL_42;
  }
  return (unsigned int)-1073741811;
}
