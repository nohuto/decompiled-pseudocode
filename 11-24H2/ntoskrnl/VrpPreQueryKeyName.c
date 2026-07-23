/*
 * XREFs of VrpPreQueryKeyName @ 0x1409FFD08
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // r14
  __int64 *v3; // rsi
  _WORD *v4; // r12
  __int64 *v5; // rdx
  unsigned int v6; // ecx
  void *v7; // rdx
  unsigned int v8; // ebx
  __int64 *v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 *v13; // [rsp+30h] [rbp-A8h] BYREF
  void *v14; // [rsp+38h] [rbp-A0h]
  __int64 v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+48h] [rbp-90h]
  GUID ActivityId; // [rsp+50h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+60h] [rbp-78h] BYREF
  int *v19; // [rsp+80h] [rbp-58h]
  __int64 v20; // [rsp+88h] [rbp-50h]
  __int64 v21; // [rsp+90h] [rbp-48h]
  int v22; // [rsp+98h] [rbp-40h] BYREF
  int v23; // [rsp+9Ch] [rbp-3Ch]
  __int64 **v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v15 = v2;
  if ( (unsigned int)dword_140E0A620 > 2 )
  {
    v3 = &EmptyUnicodeString;
    v10 = (__int64 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v10 = &EmptyUnicodeString;
    v11 = *(unsigned __int16 *)v10;
    v12 = v10[1];
    v19 = &v22;
    v20 = 2LL;
    v21 = v12;
    v22 = v11;
    v23 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)qword_140059880,
      &ActivityId,
      0LL,
      4u,
      v18);
  }
  else
  {
    v3 = &EmptyUnicodeString;
  }
  v4 = (_WORD *)(v2 + 16);
  v16 = v2 + 16;
  v5 = (__int64 *)(v2 + 16);
  v13 = (__int64 *)(v2 + 16);
  v6 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v6;
  if ( *(_DWORD *)(a1 + 16) < v6 )
  {
    v8 = -1073741820;
  }
  else
  {
    v14 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v14, *(const void **)(v2 + 24), (unsigned __int16)*v4);
    v7 = v14;
    *((_WORD *)v14 + ((unsigned __int64)(unsigned __int16)*v4 >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *v4;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *v4;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v7;
    v8 = -1073740541;
    v5 = v13;
  }
  if ( (unsigned int)dword_140E0A620 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = v5;
    v19 = &v22;
    v21 = v3[1];
    v22 = *(unsigned __int16 *)v3;
    v24 = &v13;
    v20 = 2LL;
    v23 = 0;
    LODWORD(v13) = v8;
    v25 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)&dword_140059A9C,
      &ActivityId,
      0LL,
      5u,
      v18);
  }
  return v8;
}
