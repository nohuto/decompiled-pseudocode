/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x140A334FC
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A334D0 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x140269154 (PspSetProcessPriorityByClass.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  BOOL v6; // esi
  int v7; // eax
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // edi
  int v11; // r8d
  char v12; // [rsp+30h] [rbp-39h] BYREF
  char v13; // [rsp+31h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-29h] BYREF
  int *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  char *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  char *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]

  v6 = 1;
  if ( (unsigned int)dword_140E084E0 > 5 )
  {
    v7 = *(_DWORD *)(a1 + 464);
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v14 = v7;
    v16 = &v14;
    v19 = &v12;
    v22 = &v13;
    v12 = a2;
    v13 = a3;
    v17 = 4;
    v20 = 1;
    v23 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E084E0, (unsigned __int8 *)byte_14004FCE5, 0LL, 0LL, 5u, &v15);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = a3 != 0 ? 0x20000 : 0x10000;
  PspLockProcessExclusive(a1, (__int64)CurrentThread);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1532), v9);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 1532);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1532), ~v9);
    v6 = (v11 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v6);
  return PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
}
