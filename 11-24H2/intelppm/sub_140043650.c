/*
 * XREFs of sub_140043650 @ 0x140043650
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

void __fastcall sub_140043650(__int64 a1)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE *Pool2; // rbx
  unsigned int v7; // ecx
  __int64 i; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  _BYTE *v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]

  v13 = 0;
  v2 = (const EVENT_DESCRIPTOR *)sub_1400039B0(
                                   (ULONG *)a1,
                                   (__int64)&unk_140012D78,
                                   (__int64)&unk_140012D88,
                                   (__int64)&v13,
                                   (__int64)&UserData);
  v3 = v2;
  if ( v2 )
  {
    if ( EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v2) )
    {
      v4 = *(_QWORD *)(a1 + 224);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 56);
        v12 = *(_DWORD *)(v5 + 64);
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 6LL * v12, 1919119952LL);
        if ( Pool2 )
        {
          v7 = v12;
          for ( i = 0LL; (unsigned int)i < v12; v7 = v12 )
          {
            v9 = 3 * i;
            v10 = 32LL * (unsigned int)i;
            i = (unsigned int)(i + 1);
            v11 = *(_QWORD *)(v5 + 56) + v10;
            *(_DWORD *)&Pool2[2 * v9] = *(_DWORD *)(v11 + 16);
            Pool2[2 * v9 + 4] = *(_BYTE *)(v11 + 24);
            Pool2[2 * v9 + 5] = *(_BYTE *)(v11 + 25);
          }
          v17 = 0;
          v20 = 0;
          v15 = &v12;
          v16 = 4;
          v19 = 6 * v7;
          v18 = Pool2;
          EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v3, 0LL, 3u, &UserData);
          ExFreePoolWithTag(Pool2, 0x72637250u);
        }
      }
    }
  }
}
