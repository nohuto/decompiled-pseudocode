/*
 * XREFs of sub_140042EB4 @ 0x140042EB4
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140042EB4(__int64 a1)
{
  void *v1; // rdi
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // r15
  int v5; // eax
  ULONG v6; // r9d
  unsigned int *v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // esi
  __int64 Pool2; // rax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  int v17; // [rsp+34h] [rbp-75h] BYREF
  int v18; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-69h] BYREF
  char *v20; // [rsp+50h] [rbp-59h]
  __int64 v21; // [rsp+58h] [rbp-51h]
  char *v22; // [rsp+60h] [rbp-49h]
  __int64 v23; // [rsp+68h] [rbp-41h]
  __int64 v24; // [rsp+70h] [rbp-39h]
  __int64 v25; // [rsp+78h] [rbp-31h]
  int *v26; // [rsp+80h] [rbp-29h]
  __int64 v27; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+90h] [rbp-19h]
  __int64 v29; // [rsp+98h] [rbp-11h]
  __int64 v30; // [rsp+A0h] [rbp-9h]
  __int64 v31; // [rsp+A8h] [rbp-1h]
  unsigned int *v32; // [rsp+B0h] [rbp+7h]
  __int64 v33; // [rsp+B8h] [rbp+Fh]
  __int64 v34; // [rsp+C0h] [rbp+17h]
  int v35; // [rsp+C8h] [rbp+1Fh]
  int i; // [rsp+CCh] [rbp+23h]

  v18 = 0;
  v17 = 0;
  v1 = 0LL;
  v3 = (const EVENT_DESCRIPTOR *)sub_1400039B0(
                                   (ULONG *)a1,
                                   (__int64)&unk_140012D18,
                                   (__int64)&unk_140012D28,
                                   (__int64)&v18,
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
      v5 = *(_DWORD *)(a1 + 280);
      v6 = 8;
      v7 = *(unsigned int **)(a1 + 504);
      v8 = 0;
      v16 = 0;
      if ( (v5 & 0x3300000) != 0 )
      {
        v8 = *v7;
        v16 = *v7;
      }
      if ( v8 )
      {
        v10 = 20 * v8;
        Pool2 = ExAllocatePool2(256LL, 20 * v8, 1919119952LL);
        v1 = (void *)Pool2;
        if ( !Pool2 )
        {
LABEL_13:
          LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(
                         qword_140019128,
                         *(_QWORD *)(a1 + 208));
          return (char)v3;
        }
        v6 = 9;
        v34 = Pool2;
        v12 = 0;
        v35 = v10;
        for ( i = 0; v12 < v16; *(_DWORD *)(Pool2 + 4 * v14 + 16) = v7[5 * v13 + 5] )
        {
          v13 = v12++;
          v14 = 5 * v13;
          *(_DWORD *)(Pool2 + 4 * v14) = v7[5 * v13 + 1];
          *(_DWORD *)(Pool2 + 4 * v14 + 4) = v7[5 * v13 + 2];
          *(_DWORD *)(Pool2 + 4 * v14 + 8) = v7[5 * v13 + 3];
          *(_DWORD *)(Pool2 + 4 * v14 + 12) = v7[5 * v13 + 4];
        }
      }
      v9 = *(_QWORD *)(a1 + 280);
      if ( (v9 & 0x3000000) != 0 )
      {
        v17 = 3;
      }
      else if ( (v9 & 0x300000) != 0 )
      {
        v17 = 1;
      }
      v20 = &byte_140019B06;
      v21 = 1LL;
      v22 = &byte_140019B07;
      v23 = 1LL;
      v24 = a1 + 512;
      v26 = &v17;
      v28 = a1 + 480;
      v30 = a1 + 492;
      v32 = &v16;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 12LL;
      v31 = 12LL;
      v33 = 4LL;
      EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v4, 0LL, v6, &UserData);
      if ( v1 )
        ExFreePoolWithTag(v1, 0x72637250u);
      goto LABEL_13;
    }
  }
  return (char)v3;
}
