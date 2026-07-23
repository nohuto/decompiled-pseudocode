/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x140912870
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1406A8E30 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1406A8FD0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // r15
  char v5; // r12
  char v6; // di
  NTSTATUS result; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-D8h] BYREF
  int *v19; // [rsp+60h] [rbp-B8h]
  _WNF_STATE_NAME StateName; // [rsp+68h] [rbp-B0h] BYREF
  int v21[2]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v22[88]; // [rsp+78h] [rbp-A0h] BYREF

  v3 = a2 + 1824;
  v19 = 0LL;
  StateName = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( *(_QWORD *)(a2 + 1824) )
    goto LABEL_8;
  memset_0(v22, 0, 0x50uLL);
  *(_QWORD *)v21 = 5767170LL;
  RtlpAddKnownAce((ACL *)v21, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
  LOBYTE(SecurityDescriptor[0]) = 1;
  if ( (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
  {
    v19 = v21;
    WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
  }
  result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
  if ( result >= 0 )
  {
    PspLockProcessExclusive(a2, a1);
    if ( *(_QWORD *)v3 )
    {
      v4 = 1;
    }
    else
    {
      v6 = 1;
      *(_WNF_STATE_NAME *)v3 = StateName;
      *(_QWORD *)(a2 + 1860) = *(_QWORD *)(a3 + 36);
    }
    PspUnlockProcessExclusive(a2);
LABEL_8:
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
        goto LABEL_10;
    }
    if ( (*(_DWORD *)(a3 + 36) & 2) != 0 && v12 )
    {
      v5 = 1;
      v13 = *(_DWORD *)(a3 + 16) & 0x7FFFFFFF;
      *(_DWORD *)(a3 + 16) = v13;
LABEL_27:
      if ( (*(_DWORD *)(a3 + 36) & 4) != 0 && v13 )
      {
        v5 = 1;
        v14 = *(_DWORD *)(a3 + 20) & 0x7FFFFFFF;
        *(_DWORD *)(a3 + 20) = v14;
LABEL_30:
        if ( (*(_DWORD *)(a3 + 36) & 8) != 0 && v14 )
        {
          v5 = 1;
          v15 = *(_DWORD *)(a3 + 24) & 0x7FFFFFFF;
          *(_DWORD *)(a3 + 24) = v15;
LABEL_33:
          if ( (*(_DWORD *)(a3 + 36) & 0x10) != 0 && v15 )
          {
            v5 = 1;
            v16 = *(_DWORD *)(a3 + 28) & 0x7FFFFFFF;
            *(_DWORD *)(a3 + 28) = v16;
LABEL_36:
            if ( (*(_DWORD *)(a3 + 36) & 0x20) != 0 && v16 )
            {
              v5 = 1;
              v17 = *(_DWORD *)(a3 + 32) & 0x7FFFFFFF;
              *(_DWORD *)(a3 + 32) = v17;
              goto LABEL_39;
            }
LABEL_14:
            v17 = *(_DWORD *)(a3 + 32) & 0x7FFFFFFF;
            *(_DWORD *)(a3 + 32) = v17;
            if ( !v6 )
            {
LABEL_15:
              if ( v5 )
                ZwUpdateWnfStateData((PCWNF_STATE_NAME)v3, 0LL, 0, 0LL, 0LL, 0, 0);
              if ( v4 )
                ZwDeleteWnfStateName(&StateName);
              return 0;
            }
LABEL_39:
            if ( (*(_DWORD *)(a3 + 36) & 0x40) != 0 && v17 )
              v5 = 1;
            goto LABEL_15;
          }
LABEL_13:
          v16 = *(_DWORD *)(a3 + 28) & 0x7FFFFFFF;
          *(_DWORD *)(a3 + 28) = v16;
          if ( !v6 )
            goto LABEL_14;
          goto LABEL_36;
        }
LABEL_12:
        v15 = *(_DWORD *)(a3 + 24) & 0x7FFFFFFF;
        *(_DWORD *)(a3 + 24) = v15;
        if ( !v6 )
          goto LABEL_13;
        goto LABEL_33;
      }
LABEL_11:
      v14 = *(_DWORD *)(a3 + 20) & 0x7FFFFFFF;
      *(_DWORD *)(a3 + 20) = v14;
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_30;
    }
LABEL_10:
    v13 = *(_DWORD *)(a3 + 16) & 0x7FFFFFFF;
    *(_DWORD *)(a3 + 16) = v13;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_27;
  }
  return result;
}
