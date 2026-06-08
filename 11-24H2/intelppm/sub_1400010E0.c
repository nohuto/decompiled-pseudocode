/*
 * XREFs of sub_1400010E0 @ 0x1400010E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400010E0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // r14
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(__int64, unsigned __int64 *); // rax
  __int64 v12; // rbx
  unsigned int j; // edi
  __int64 v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(__int64, unsigned __int64 *); // rax
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h]

  v3 = (__int64 *)(a1 + 8);
  v4 = 2LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2528))(qword_140019128, *(_QWORD *)(v5 + 280));
      if ( *(_QWORD *)(v5 + 296) != a2 )
      {
        for ( i = 0; i < *(unsigned __int8 *)(v5 + 308); ++i )
        {
          v20 = 0LL;
          v7 = *(_QWORD *)(v5 + 24 * (i + 13LL));
          v8 = v5 + 24 * (i + 13LL);
          v9 = __readmsr(*(_DWORD *)(v7 + 8));
          v10 = *(_QWORD *)(v8 + 8) & (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9);
          v20 = v10;
          if ( v10 != *(_QWORD *)(v8 + 16) )
          {
            *(_QWORD *)(v8 + 16) = v10;
            v19 = v5 + 24 * (i + 13LL);
            if ( EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor) )
            {
              UserData.Ptr = (ULONGLONG)&v19;
              *(_QWORD *)&UserData.Size = 8LL;
              v22 = v19 + 16;
              v23 = 8LL;
              EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor, 0LL, 2u, &UserData);
            }
          }
          v11 = *(void (__fastcall **)(__int64, unsigned __int64 *))(v7 + 32);
          if ( v11 )
            v11(a2, &v20);
        }
      }
      (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2536))(qword_140019128, *(_QWORD *)(v5 + 280));
    }
    v12 = v3[1];
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2528))(qword_140019128, *(_QWORD *)(v12 + 280));
      if ( *(_QWORD *)(v12 + 296) != a2 )
      {
        for ( j = 0; j < *(unsigned __int8 *)(v12 + 308); ++j )
        {
          v20 = 0LL;
          v14 = *(_QWORD *)(v12 + 24 * (j + 13LL));
          v15 = v12 + 24 * (j + 13LL);
          v16 = __readmsr(*(_DWORD *)(v14 + 8));
          v17 = *(_QWORD *)(v15 + 8) & (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16);
          v20 = v17;
          if ( v17 != *(_QWORD *)(v15 + 16) )
          {
            *(_QWORD *)(v15 + 16) = v17;
            v19 = v12 + 24 * (j + 13LL);
            if ( EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor) )
            {
              UserData.Ptr = (ULONGLONG)&v19;
              *(_QWORD *)&UserData.Size = 8LL;
              v22 = v19 + 16;
              v23 = 8LL;
              EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor, 0LL, 2u, &UserData);
            }
          }
          v18 = *(void (__fastcall **)(__int64, unsigned __int64 *))(v14 + 32);
          if ( v18 )
            v18(a2, &v20);
        }
      }
      (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2536))(qword_140019128, *(_QWORD *)(v12 + 280));
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
}
