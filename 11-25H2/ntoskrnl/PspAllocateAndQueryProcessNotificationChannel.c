/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x1409CD200
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14069CBC0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // r15
  char v5; // r12
  char v6; // di
  __int64 result; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // [rsp+68h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v20[88]; // [rsp+78h] [rbp-A0h] BYREF

  v3 = a2 + 1824;
  v18 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*(_QWORD *)(a2 + 1824) )
  {
    memset_0(v20, 0, 0x50uLL);
    *(_QWORD *)v19 = 5767170LL;
    RtlpAddKnownAce((__int64)v19, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    result = ZwCreateWnfStateName((__int64)&v18, 3LL);
    if ( (int)result < 0 )
      return result;
    PspLockProcessExclusive(a2, a1);
    if ( *(_QWORD *)v3 )
    {
      v4 = 1;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)v3 = v18;
      *(_QWORD *)(a2 + 1860) = *(_QWORD *)(a3 + 36);
    }
    PspUnlockProcessExclusive(a2, a1);
  }
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v3 + 32);
  v11 = *(_DWORD *)(a3 + 8) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 8) = v11;
  if ( v6 && (*(_DWORD *)(a3 + 36) & 1) != 0 && v11 )
  {
    v5 = 1;
    v12 = *(_DWORD *)(a3 + 12) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 12) = v12;
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 12) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 12) = v12;
    if ( !v6 )
      goto LABEL_8;
  }
  if ( (*(_DWORD *)(a3 + 36) & 2) != 0 && v12 )
  {
    v5 = 1;
    v13 = *(_DWORD *)(a3 + 16) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 16) = v13;
    goto LABEL_25;
  }
LABEL_8:
  v13 = *(_DWORD *)(a3 + 16) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 16) = v13;
  if ( !v6 )
    goto LABEL_9;
LABEL_25:
  if ( (*(_DWORD *)(a3 + 36) & 4) == 0 || !v13 )
  {
LABEL_9:
    v14 = *(_DWORD *)(a3 + 20) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 20) = v14;
    if ( !v6 )
      goto LABEL_10;
    goto LABEL_28;
  }
  v5 = 1;
  v14 = *(_DWORD *)(a3 + 20) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 20) = v14;
LABEL_28:
  if ( (*(_DWORD *)(a3 + 36) & 8) != 0 && v14 )
  {
    v5 = 1;
    v15 = *(_DWORD *)(a3 + 24) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 24) = v15;
    goto LABEL_31;
  }
LABEL_10:
  v15 = *(_DWORD *)(a3 + 24) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 24) = v15;
  if ( !v6 )
    goto LABEL_11;
LABEL_31:
  if ( (*(_DWORD *)(a3 + 36) & 0x10) == 0 || !v15 )
  {
LABEL_11:
    v16 = *(_DWORD *)(a3 + 28) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 28) = v16;
    if ( !v6 )
      goto LABEL_12;
    goto LABEL_34;
  }
  v5 = 1;
  v16 = *(_DWORD *)(a3 + 28) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 28) = v16;
LABEL_34:
  if ( (*(_DWORD *)(a3 + 36) & 0x20) != 0 && v16 )
  {
    v5 = 1;
    v17 = *(_DWORD *)(a3 + 32) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 32) = v17;
    goto LABEL_37;
  }
LABEL_12:
  v17 = *(_DWORD *)(a3 + 32) & 0x7FFFFFFF;
  *(_DWORD *)(a3 + 32) = v17;
  if ( v6 )
  {
LABEL_37:
    if ( (*(_DWORD *)(a3 + 36) & 0x40) != 0 && v17 )
      v5 = 1;
  }
  if ( v5 )
    ZwUpdateWnfStateData(v3, 0LL);
  if ( v4 )
    ZwDeleteWnfStateName((__int64)&v18, a2);
  return 0LL;
}
