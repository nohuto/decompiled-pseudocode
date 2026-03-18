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
  const wchar_t *v11; // rax
  ULONG Size; // [rsp+48h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+84h] [rbp-84h]
  int v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+8Ch] [rbp-7Ch]
  int v22; // [rsp+90h] [rbp-78h]
  const wchar_t *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A8h] [rbp-60h]
  _DWORD v26[20]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v27[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+118h] [rbp+10h]
  _DWORD v29[276]; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+578h] [rbp+470h] BYREF
  _QWORD v31[10]; // [rsp+588h] [rbp+480h] BYREF

  memset_0(v27, 0, 0x468uLL);
  v16 = 0LL;
  v30 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  memset_0(v26, 0, 0x44uLL);
  v15 = 68LL;
  v14 = (__int64 *)v26;
  v13 = 0x800000001LL;
  v26[0] = 1;
  if ( (int)ZwQuerySystemInformation(109LL, &v13) >= 0 )
  {
    v13 = 0xD00000001LL;
    v14 = v27;
    v2 = 0;
    LODWORD(v15) = 1128;
    LODWORD(v27[0]) = 259;
    while ( v2 < BYTE1(v26[0]) )
    {
      v3 = v2;
      HIDWORD(v27[0]) = v26[v2 + 1];
      if ( (int)ZwQuerySystemInformation(109LL, &v13) >= 0 )
      {
        v4 = v29[16];
        for ( i = 0; i < v28; ++i )
        {
          if ( !_bittest(&v4, i) == *((_DWORD *)P + 13) && v29[i] == *((_DWORD *)P + 12) )
          {
            UserDataCount = 0;
            UserData = &v30;
            v17[1] = (__int64)v27;
            v17[0] = (__int64)&v30;
            v19 = 6;
            v21 = 1036;
            v8 = SmEtwEnabled(2);
            if ( v8 )
            {
              if ( P != (PVOID)-56LL )
                LOBYTE(v27[0]) = *((_BYTE *)P + 56);
              v30.Ptr = (ULONGLONG)v27;
              *(_QWORD *)&v30.Size = 1LL;
              if ( P != (PVOID)-60LL )
                *(_DWORD *)((char *)v27 + 1) = *((_DWORD *)P + 15);
              v31[0] = (char *)v27 + 1;
              v31[1] = 4LL;
              v9 = *((_QWORD *)P + 5);
              v18 = 2;
              v20 = 5;
              SmKmEtwAppendProductName(v17, v9);
              SmKmEtwAppendObjectName((__int64)v17, *(_QWORD *)(v9 + 8));
              UserDataCount = v18;
              UserData = (struct _EVENT_DATA_DESCRIPTOR *)v17[0];
            }
            SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
            v13 = 0xA00000001LL;
            v14 = &v16;
            v10 = v26[v3 + 1];
            LODWORD(v15) = 8;
            LODWORD(v16) = 1;
            HIDWORD(v16) = v10;
            if ( (int)ZwSetSystemInformation(109LL, &v13) >= 0 )
            {
              if ( v8 )
              {
                EtwWriteEx(*v8, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
                if ( !*((_DWORD *)P + 14) )
                {
                  Size = UserData[3].Size;
                  memmove(v27, (const void *)UserData[3].Ptr, Size);
                  v22 = 2;
                  v24 = 1;
                  *((_WORD *)v27 + ((unsigned __int64)Size >> 1)) = 0;
                  v11 = (const wchar_t *)v27;
                  if ( !LOWORD(v27[0]) )
                    v11 = L"(null)";
                  v23 = v11;
                  v25 = *((_DWORD *)P + 15);
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
