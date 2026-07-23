/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140601AF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmEtwEnabled @ 0x14039E900 (SmEtwEnabled.c)
 *     SmKmEtwAppendObjectName @ 0x14060169C (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x140601818 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x140603BAC (SmKmSqmAddToStream.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14069E8C0 (ZwSetSystemInformation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  int v4; // r8d
  unsigned int i; // edx
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  ULONGLONG *v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  ULONG Size; // ebx
  const wchar_t *v12; // rax
  ULONG ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18[2]; // [rsp+70h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  int v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+8Ch] [rbp-7Ch]
  int v23; // [rsp+90h] [rbp-78h]
  const wchar_t *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  _DWORD v27[20]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v28[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+118h] [rbp+10h]
  _DWORD v30[276]; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+578h] [rbp+470h] BYREF
  _QWORD v32[10]; // [rsp+588h] [rbp+480h] BYREF

  ReturnLength = 0;
  memset_0(v28, 0, 0x468uLL);
  v17 = 0LL;
  v31 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  memset_0(v27, 0, 0x44uLL);
  v16 = 68LL;
  v15 = (__int64 *)v27;
  SystemInformation = 0x800000001LL;
  v27[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
  {
    SystemInformation = 0xD00000001LL;
    v15 = v28;
    v2 = 0;
    LODWORD(v16) = 1128;
    LODWORD(v28[0]) = 259;
    while ( v2 < BYTE1(v27[0]) )
    {
      v3 = v2;
      HIDWORD(v28[0]) = v27[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v4 = v30[16];
        for ( i = 0; i < v29; ++i )
        {
          if ( !_bittest(&v4, i) == *((_DWORD *)P + 13) && v30[i] == *((_DWORD *)P + 12) )
          {
            UserDataCount = 0;
            UserData = &v31;
            v18[1] = (__int64)v28;
            v18[0] = (__int64)&v31;
            v20 = 6;
            v22 = 1036;
            v8 = SmEtwEnabled(2);
            if ( v8 )
            {
              if ( P != (PVOID)-56LL )
                LOBYTE(v28[0]) = *((_BYTE *)P + 56);
              v31.Ptr = (ULONGLONG)v28;
              *(_QWORD *)&v31.Size = 1LL;
              if ( P != (PVOID)-60LL )
                *(_DWORD *)((char *)v28 + 1) = *((_DWORD *)P + 15);
              v32[0] = (char *)v28 + 1;
              v32[1] = 4LL;
              v9 = *((_QWORD *)P + 5);
              v19 = 2;
              v21 = 5;
              SmKmEtwAppendProductName(v18, v9);
              SmKmEtwAppendObjectName((__int64)v18, *(_QWORD *)(v9 + 8));
              UserDataCount = v19;
              UserData = (struct _EVENT_DATA_DESCRIPTOR *)v18[0];
            }
            SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
            SystemInformation = 0xA00000001LL;
            v15 = &v17;
            v10 = v27[v3 + 1];
            LODWORD(v16) = 8;
            LODWORD(v17) = 1;
            HIDWORD(v17) = v10;
            if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18u) >= 0 )
            {
              if ( v8 )
              {
                EtwWriteEx(*v8, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
                if ( !*((_DWORD *)P + 14) )
                {
                  Size = UserData[3].Size;
                  ReturnLength = Size;
                  memmove(v28, (const void *)UserData[3].Ptr, Size);
                  v23 = 2;
                  v25 = 1;
                  *((_WORD *)v28 + ((unsigned __int64)Size >> 1)) = 0;
                  v12 = (const wchar_t *)v28;
                  if ( !LOWORD(v28[0]) )
                    v12 = L"(null)";
                  v24 = v12;
                  v26 = *((_DWORD *)P + 15);
                  SmKmSqmAddToStream(*v8);
                }
              }
            }
            goto LABEL_24;
          }
        }
      }
      ++v2;
    }
  }
  SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
LABEL_24:
  ExFreePoolWithTag(P, 0);
}
