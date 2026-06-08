/*
 * XREFs of sub_140045550 @ 0x140045550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400456F0 @ 0x1400456F0 (sub_1400456F0.c)
 */

void __fastcall sub_140045550(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d

  v2 = *(_QWORD *)Context;
  v3 = *((_QWORD *)Context + 1);
  IoUninitializeWorkItem((PIO_WORKITEM)(Context + 32));
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v5 = *(_QWORD *)(v2 + 744);
  v6 = *(_QWORD *)(v2 + 752);
  if ( v5 )
    v6 += MEMORY[0xFFFFF78000000014] - v5;
  v7 = *(_DWORD *)(v2 + 760) - *(_DWORD *)(v3 + 136);
  v8 = *(_DWORD *)(v2 + 764) - *(_DWORD *)(v3 + 140);
  v9 = *(_DWORD *)(v2 + 768) - *(_DWORD *)(v3 + 144);
  if ( v6 != *(_QWORD *)(v3 + 128) || v7 || v8 || v9 )
  {
    sub_1400456F0(
      v2,
      (v6 - *(_QWORD *)(v3 + 128)) / 10000000,
      v7,
      v8,
      v9,
      *((_QWORD *)Context + 2),
      *((_QWORD *)Context + 3));
    *(_QWORD *)(v3 + 128) = v6;
    *(_DWORD *)(v3 + 136) = *(_DWORD *)(v2 + 760);
    *(_DWORD *)(v3 + 140) = *(_DWORD *)(v2 + 764);
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(v2 + 768);
  }
  else
  {
    KeCancelTimer((PKTIMER)v3);
    *(_BYTE *)(v3 + 148) = 0;
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  ExFreePoolWithTag(Context, 0x72637250u);
}
