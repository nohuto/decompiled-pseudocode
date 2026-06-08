/*
 * XREFs of sub_14003EAA0 @ 0x14003EAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400042E0 @ 0x1400042E0 (sub_1400042E0.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003ED1C @ 0x14003ED1C (sub_14003ED1C.c)
 *     sub_14003EE7C @ 0x14003EE7C (sub_14003EE7C.c)
 *     sub_14003FE54 @ 0x14003FE54 (sub_14003FE54.c)
 *     sub_140040340 @ 0x140040340 (sub_140040340.c)
 */

void __fastcall sub_14003EAA0(__int64 a1, struct _IO_WORKITEM *a2)
{
  void *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rbp
  void *v6; // r15
  char v7; // r13
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  __int64 Pool2; // rax
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( a2 )
    IoFreeWorkItem(a2);
  v8 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v8 + 280) & 0x7F070) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
      qword_140019128,
      *(_QWORD *)(v8 + 208),
      0LL);
    v7 = 1;
    if ( (int)sub_14003ED1C(v8, &v14) < 0 )
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      v3 = (void *)Pool2;
      v12 = (_QWORD *)(v8 + 208);
      if ( !Pool2 )
        goto LABEL_11;
      *(_DWORD *)Pool2 = 1;
      *(_OWORD *)(Pool2 + 4) = 0LL;
      *(_BYTE *)(Pool2 + 4) = 127;
      *(_BYTE *)(Pool2 + 16) = 1;
      *(_WORD *)(Pool2 + 18) = 0;
      *(_DWORD *)(Pool2 + 20) = 0;
    }
    else
    {
      v3 = v14;
      v9 = sub_14003EE7C(v8, &v15);
      v4 = v15;
      if ( v9 < 0 )
        v4 = 0LL;
    }
    v6 = *(void **)(v8 + 528);
    v10 = *(_DWORD *)(v8 + 280);
    v5 = *(void **)(v8 + 536);
    *(_QWORD *)(v8 + 528) = v3;
    v3 = 0LL;
    *(_QWORD *)(v8 + 536) = v4;
    if ( (v10 & 0x200) != 0 )
      sub_140040340(v8);
    ((void (__fastcall *)(__int64))qword_140019688)(v8);
    v12 = (_QWORD *)(v8 + 208);
    if ( (*(_DWORD *)(v8 + 280) & 0x200LL) != 0 )
    {
      LOBYTE(v11) = 1;
      sub_14003FE54(v8, v11);
    }
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(a2) = 2;
      sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 1, 92, (__int64)&unk_140012FE8);
    }
    v12 = (_QWORD *)(v8 + 208);
  }
LABEL_11:
  sub_140003A78((ULONG *)v8, &stru_140012AF8, &stru_140012B08, 0, 0LL);
  sub_1400042E0((_QWORD *)(v8 + 680), 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *v12);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
}
