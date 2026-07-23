/*
 * XREFs of KseShimDriverIoCallbacks @ 0x140941BB8
 * Callers:
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepPoolAllocateNonPaged @ 0x140498D14 (KsepPoolAllocateNonPaged.c)
 *     KsepPoolFreeNonPaged @ 0x14049B540 (KsepPoolFreeNonPaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KsepStringDuplicateUnicode @ 0x140941D34 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int ShimCallbacksForDriver; // esi
  wchar_t *Buffer; // rbx
  int v9; // eax
  int i; // ecx
  wchar_t *v11; // rdx
  char *NonPaged; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 (__fastcall **v22)(__int64, IRP *); // rcx
  char *v23; // r9
  __int64 (__fastcall *v24)(__int64, IRP *); // rdx
  __int64 (__fastcall *v25)(__int64, IRP *); // r11
  UNICODE_STRING v26[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF

  v3 = a1[6];
  memset_0(&v27, 0, 0x100uLL);
  memset(v26, 0, sizeof(v26));
  ShimCallbacksForDriver = 0;
  if ( a3 )
  {
    if ( dword_140E66C14 != 2 || (KseEngine & 1) != 0 )
    {
      Buffer = v26[0].Buffer;
    }
    else
    {
      v9 = KsepStringDuplicateUnicode(v26, a3);
      Buffer = v26[0].Buffer;
      ShimCallbacksForDriver = v9;
      if ( v9 >= 0 )
      {
        for ( i = v26[0].Length >> 1; i; --i )
        {
          if ( v26[0].Buffer[i - 1] == 92 )
          {
            v11 = &v26[0].Buffer[i];
            if ( v11 )
              goto LABEL_13;
            break;
          }
        }
        v11 = v26[0].Buffer;
LABEL_13:
        RtlInitUnicodeString(&v26[1], v11);
        ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], &v27);
        if ( ShimCallbacksForDriver >= 0 )
        {
          NonPaged = (char *)KsepPoolAllocateNonPaged(0x100uLL);
          if ( NonPaged )
          {
            v13 = a1[11];
            if ( v13 )
            {
              v14 = v27;
              if ( v27 )
              {
                *(_QWORD *)NonPaged = v13;
                a1[11] = v14;
              }
            }
            v15 = a1[12];
            if ( v15 )
            {
              v16 = v28;
              if ( v28 )
              {
                *((_QWORD *)NonPaged + 1) = v15;
                a1[12] = v16;
              }
            }
            v17 = a1[13];
            if ( v17 )
            {
              v18 = v29;
              if ( v29 )
              {
                *((_QWORD *)NonPaged + 2) = v17;
                a1[13] = v18;
              }
            }
            v19 = *(_QWORD *)(v3 + 8);
            if ( v19 )
            {
              v20 = v30;
              if ( v30 )
              {
                *((_QWORD *)NonPaged + 3) = v19;
                *(_QWORD *)(v3 + 8) = v20;
              }
            }
            v21 = 28LL;
            v22 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
            v23 = (char *)((char *)&v31 - (char *)a1);
            do
            {
              v24 = *v22;
              if ( *v22 )
              {
                if ( v24 != IopInvalidDeviceRequest )
                {
                  v25 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v22 + (_QWORD)v23 - 112);
                  if ( v25 )
                  {
                    *(__int64 (__fastcall **)(__int64, IRP *))((char *)v22 + NonPaged - (char *)a1 - 80) = v24;
                    *v22 = v25;
                  }
                }
              }
              ++v22;
              --v21;
            }
            while ( v21 );
            *(_QWORD *)(v3 + 56) = NonPaged;
            ShimCallbacksForDriver = 0;
            Buffer = v26[0].Buffer;
            KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524550LL;
            if ( (KsepDebugFlag & 1) != 0 )
              KsepDebugPrint(9LL, (int)"KSE: Hooked callbacks for driver [%ws].\n", Buffer, v23);
            KsepLogInfo(
              9LL,
              (__int64)"KSE: Hooked callbacks for driver [%ws].\n",
              Buffer,
              v23,
              *(_QWORD *)&v26[0].Length);
            goto LABEL_4;
          }
          ShimCallbacksForDriver = -1073741801;
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_4:
    if ( Buffer )
      KsepPoolFreePaged(Buffer);
    return (unsigned int)ShimCallbacksForDriver;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524436LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, (int)"KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0LL, (__int64)"KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
