/*
 * XREFs of sub_140044260 @ 0x140044260
 * Callers:
 *     sub_140039440 @ 0x140039440 (sub_140039440.c)
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_140004C38 @ 0x140004C38 (sub_140004C38.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140044260(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  _BYTE *Pool2; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct _PROCESSOR_NUMBER v11; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  BYTE *p_Number; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+5Ch] [rbp+13h]
  _DWORD *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  _BYTE *v19; // [rsp+70h] [rbp+27h]
  unsigned int i; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  v11 = 0;
  v2 = (const EVENT_DESCRIPTOR *)&unk_140012EC8;
  if ( a2 )
    v2 = &stru_140012EB8;
  if ( EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v2) )
  {
    v4 = *(_DWORD **)(a1 + 1144);
    if ( v4 )
    {
      if ( sub_140004C38(a1, &v11) >= 0 )
      {
        v5 = 29 * *v4;
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v5, 1919119952LL);
        if ( Pool2 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(
            qword_140019128,
            qword_140019168,
            0LL);
          v21 = 0;
          v7 = 0LL;
          v19 = Pool2;
          for ( i = v5; (unsigned int)v7 < *v4; *(_DWORD *)&Pool2[v9 + 25] = v4[v8 + 3] )
          {
            v8 = 3 * v7;
            v9 = 29LL * (unsigned int)v7;
            v10 = v4[3 * v7 + 1];
            v7 = (unsigned int)(v7 + 1);
            Pool2[v9 + 12] = (v10 >> 3) & 0xF;
            *(_DWORD *)&Pool2[v9 + 4] = (v4[v8 + 1] >> 1) & 1;
            *(_DWORD *)&Pool2[v9] = v4[v8 + 1] & 1;
            *(_DWORD *)&Pool2[v9 + 8] = (v4[v8 + 1] >> 2) & 1;
            *(_DWORD *)&Pool2[v9 + 13] = (v4[v8 + 1] >> 7) & 1;
            *(_DWORD *)&Pool2[v9 + 17] = (v4[v8 + 1] >> 8) & 1;
            *(_DWORD *)&Pool2[v9 + 21] = v4[v8 + 2];
          }
          UserData.Reserved = 0;
          v15 = 0;
          v18 = 0;
          UserData.Ptr = (ULONGLONG)&v11;
          p_Number = &v11.Number;
          v14 = 1;
          UserData.Size = 2;
          v16 = v4;
          v17 = 4;
          EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v2, 0LL, 4u, &UserData);
          (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
          ExFreePoolWithTag(Pool2, 0x72637250u);
        }
      }
    }
  }
}
