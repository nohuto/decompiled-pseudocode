/*
 * XREFs of sub_14004314C @ 0x14004314C
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14004314C(__int64 a1)
{
  void *v1; // rdi
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // r15
  __int64 v5; // rcx
  ULONG v6; // r9d
  unsigned int *v7; // rsi
  unsigned int v8; // eax
  int v9; // r14d
  __int64 Pool2; // rax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v15; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-79h] BYREF
  __int64 v18; // [rsp+50h] [rbp-69h]
  __int64 v19; // [rsp+58h] [rbp-61h]
  __int64 v20; // [rsp+60h] [rbp-59h]
  __int64 v21; // [rsp+68h] [rbp-51h]
  __int64 v22; // [rsp+70h] [rbp-49h]
  __int64 v23; // [rsp+78h] [rbp-41h]
  __int64 v24; // [rsp+80h] [rbp-39h]
  __int64 v25; // [rsp+88h] [rbp-31h]
  __int64 v26; // [rsp+90h] [rbp-29h]
  __int64 v27; // [rsp+98h] [rbp-21h]
  __int64 v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  unsigned int *v32; // [rsp+C0h] [rbp+7h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]
  __int64 v34; // [rsp+D0h] [rbp+17h]
  int v35; // [rsp+D8h] [rbp+1Fh]
  int i; // [rsp+DCh] [rbp+23h]

  v16[0] = 0;
  v1 = 0LL;
  v3 = (const EVENT_DESCRIPTOR *)sub_1400039B0(
                                   (ULONG *)a1,
                                   (__int64)&unk_140012D48,
                                   (__int64)&unk_140012D38,
                                   (__int64)v16,
                                   (__int64)&UserData);
  v4 = v3;
  if ( v3 )
  {
    LOBYTE(v3) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v3);
    if ( (_BYTE)v3 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
        qword_140019128,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 280);
      v6 = 9;
      v7 = *(unsigned int **)(a1 + 448);
      v8 = 0;
      v15 = 0;
      if ( (v5 & 0x70000000) != 0 )
      {
        if ( (v5 & 0x40000000) != 0 )
          v7 = *(unsigned int **)(a1 + 456);
        v8 = *v7;
        v15 = *v7;
      }
      if ( v8 )
      {
        v9 = 48 * v8;
        Pool2 = ExAllocatePool2(256LL, 48 * v8, 1919119952LL);
        v1 = (void *)Pool2;
        if ( !Pool2 )
        {
LABEL_8:
          LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(
                         qword_140019128,
                         *(_QWORD *)(a1 + 208));
          return (char)v3;
        }
        v6 = 10;
        v34 = Pool2;
        v11 = 0;
        v35 = v9;
        for ( i = 0; v11 < v15; *(_QWORD *)(Pool2 + 8 * v13 + 40) = *(_QWORD *)&v7[12 * v12 + 12] )
        {
          v12 = v11++;
          v13 = 6 * v12;
          *(_DWORD *)(Pool2 + 8 * v13) = v7[12 * v12 + 2];
          *(_DWORD *)(Pool2 + 8 * v13 + 4) = v7[12 * v12 + 3];
          *(_DWORD *)(Pool2 + 8 * v13 + 8) = v7[12 * v12 + 4];
          *(_DWORD *)(Pool2 + 8 * v13 + 12) = v7[12 * v12 + 5];
          *(_QWORD *)(Pool2 + 8 * v13 + 16) = *(_QWORD *)&v7[12 * v12 + 6];
          *(_QWORD *)(Pool2 + 8 * v13 + 24) = *(_QWORD *)&v7[12 * v12 + 8];
          *(_QWORD *)(Pool2 + 8 * v13 + 32) = *(_QWORD *)&v7[12 * v12 + 10];
        }
      }
      v18 = a1 + 188;
      v19 = 4LL;
      v20 = a1 + 185;
      v21 = 1LL;
      v22 = a1 + 52;
      v24 = a1 + 48;
      v26 = a1 + 464;
      v28 = a1 + 424;
      v30 = a1 + 436;
      v32 = &v15;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 12LL;
      v31 = 12LL;
      v33 = 4LL;
      EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v4, 0LL, v6, &UserData);
      if ( v1 )
        ExFreePoolWithTag(v1, 0x72637250u);
      goto LABEL_8;
    }
  }
  return (char)v3;
}
