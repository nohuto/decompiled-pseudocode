/*
 * XREFs of sub_1400437C4 @ 0x1400437C4
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_1400437C4(__int64 a1)
{
  _BYTE *v2; // rdi
  _DWORD *v3; // rsi
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // r13
  __int64 v6; // rax
  ULONG v7; // ebx
  unsigned int *v8; // r8
  unsigned int *v9; // r15
  int *v10; // r10
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned __int8 v13; // r12
  _BYTE *Pool2; // rax
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned int i; // r10d
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  int *v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-55h] BYREF
  int v27; // [rsp+40h] [rbp-51h] BYREF
  int v28; // [rsp+44h] [rbp-4Dh] BYREF
  int *v29; // [rsp+48h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  int *v31; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+70h] [rbp-21h]
  unsigned int *v33; // [rsp+78h] [rbp-19h]
  __int64 v34; // [rsp+80h] [rbp-11h]
  int *v35; // [rsp+88h] [rbp-9h]
  __int64 v36; // [rsp+90h] [rbp-1h]
  _BYTE *v37; // [rsp+98h] [rbp+7h]
  unsigned int v38; // [rsp+A0h] [rbp+Fh]
  int v39; // [rsp+A4h] [rbp+13h]

  v28 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v4 = (const EVENT_DESCRIPTOR *)sub_1400039B0(
                                   (ULONG *)a1,
                                   (__int64)&unk_140012DA8,
                                   (__int64)&unk_140012D98,
                                   (__int64)&v28,
                                   (__int64)&UserData);
  v5 = v4;
  if ( v4 )
  {
    LOBYTE(v4) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v4);
    if ( (_BYTE)v4 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
        qword_140019128,
        *(_QWORD *)(a1 + 208),
        0LL);
      v6 = *(_QWORD *)(a1 + 280);
      v7 = 4;
      v8 = *(unsigned int **)(a1 + 528);
      v9 = *(unsigned int **)(a1 + 448);
      v10 = *(int **)(a1 + 504);
      v11 = 0;
      v12 = 0LL;
      v13 = 0;
      v29 = (int *)v8;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      if ( (v6 & 0x7F077) != 0 )
      {
        v11 = *v8;
        v25 = v11;
        if ( !v11 || *((_BYTE *)v8 + 16) != 1 )
        {
          ++v11;
          v13 = 1;
          v25 = v11;
        }
      }
      if ( (v6 & 0x70000000) != 0 )
      {
        if ( (v6 & 0x40000000) != 0 )
          v9 = *(unsigned int **)(a1 + 456);
        v12 = *v9;
        v26 = *v9;
      }
      if ( (v6 & 0x3300000) != 0 )
        v27 = *v10;
      v32 = 4LL;
      v31 = (int *)&v25;
      v33 = &v26;
      v35 = &v27;
      v34 = 4LL;
      v36 = 4LL;
      if ( (v6 & 0x7F077) != 0 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v11, 1919119952LL);
        v2 = Pool2;
        if ( !Pool2 )
        {
LABEL_11:
          LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(
                         qword_140019128,
                         *(_QWORD *)(a1 + 208));
          return (char)v4;
        }
        if ( v13 )
          *Pool2 = 1;
        v19 = v25;
        v20 = 0;
        if ( v25 != v13 )
        {
          v21 = v29;
          do
          {
            v22 = v20;
            v23 = v13 + v20++;
            v2[v23] = v21[5 * v22 + 4];
            v19 = v25;
          }
          while ( v20 < v25 - v13 );
        }
        v38 = v19;
        v7 = 5;
        v12 = v26;
        v37 = v2;
        v39 = 0;
      }
      if ( (_DWORD)v12 )
      {
        v3 = (_DWORD *)ExAllocatePool2(256LL, 8 * v12, 1919119952LL);
        if ( !v3 )
          goto LABEL_19;
        v15 = v26;
        v16 = 0LL;
        for ( i = v9[2]; (unsigned int)v16 < v26; v15 = v26 )
        {
          v3[2 * v16] = v9[12 * v16 + 2];
          v3[2 * v16 + 1] = 100 * v9[12 * v16 + 2] / i;
          v16 = (unsigned int)(v16 + 1);
        }
        v18 = 2LL * v7;
        *(&UserData.Reserved + 2 * v18) = 0;
        ++v7;
        *(&UserData.Ptr + v18) = (ULONGLONG)v3;
        *(&UserData.Size + 2 * v18) = 8 * v15;
      }
      EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v5, 0LL, v7, &UserData);
LABEL_19:
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x72637250u);
      goto LABEL_11;
    }
  }
  return (char)v4;
}
