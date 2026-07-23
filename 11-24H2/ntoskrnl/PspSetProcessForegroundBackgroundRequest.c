/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x140A2C58C
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A2C560 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PspSetProcessPriorityByClass @ 0x140447074 (PspSetProcessPriorityByClass.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  BOOL v6; // esi
  int v7; // eax
  unsigned int v8; // edi
  int v10; // r8d
  char v11; // [rsp+30h] [rbp-39h] BYREF
  char v12; // [rsp+31h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-29h] BYREF
  int *v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  char *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  char *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v6 = 1;
  if ( (unsigned int)dword_140E08630 > 5 )
  {
    v7 = *(_DWORD *)(a1 + 464);
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v13 = v7;
    v15 = &v13;
    v18 = &v11;
    v21 = &v12;
    v11 = a2;
    v12 = a3;
    v16 = 4;
    v19 = 1;
    v22 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08630, (unsigned __int8 *)byte_140051C09, 0LL, 0LL, 5u, &v14);
  }
  v8 = a3 != 0 ? 0x20000 : 0x10000;
  PspLockProcessExclusive(a1, (__int64)KeGetCurrentThread());
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1532), v8);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 1532);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1532), ~v8);
    v6 = (v10 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v6);
  return PspUnlockProcessExclusive(a1);
}
