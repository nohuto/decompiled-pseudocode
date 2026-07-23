/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x140980664
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140924D44 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140980950 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  void *v3; // r13
  const wchar_t *v4; // rsi
  int inited; // ebx
  unsigned int v6; // r12d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  void *Pool2; // rdi
  ULONG i; // r15d
  int v14; // eax
  const wchar_t *v15; // r14
  size_t v16; // r13
  __int64 v17; // rax
  wchar_t v18; // ax
  __int64 v19; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  ULONG v24; // r14d
  __int64 v25; // rcx
  ULONG j; // esi
  __int64 v27; // rcx
  int v28; // eax
  ULONG v29; // [rsp+40h] [rbp-28h] BYREF
  int v30; // [rsp+44h] [rbp-24h] BYREF
  UNICODE_STRING v31[2]; // [rsp+48h] [rbp-20h] BYREF
  int Data; // [rsp+B0h] [rbp+48h] BYREF
  int v33; // [rsp+B4h] [rbp+4Ch]
  void *v34; // [rsp+B8h] [rbp+50h]
  const wchar_t *v35; // [rsp+C0h] [rbp+58h]
  size_t MaxCount; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a3;
  v34 = a2;
  v33 = HIDWORD(a1);
  v3 = a2;
  v29 = 0;
  v4 = a3;
  LODWORD(MaxCount) = 0;
  v30 = 0;
  Data = 0;
  inited = RegRtlQueryInfoKey(a2, 0LL, 0LL, &v29, &MaxCount, 0LL);
  if ( inited >= 0 )
  {
    v6 = MaxCount + 1;
    if ( v4 )
    {
      v7 = v4;
      if ( *v4 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        v3 = v34;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL, 2LL * v6, 0x42444450u);
      if ( Pool2 )
      {
        for ( i = 0; i < v29; ++i )
        {
          LODWORD(MaxCount) = v6;
          v14 = RegRtlEnumValue(v3, i, Pool2, &MaxCount, &v30, 0LL, 0LL);
          inited = v14;
          if ( v14 < 0 )
          {
            if ( v14 == -2147483622 )
            {
              inited = 0;
              goto LABEL_38;
            }
            goto LABEL_39;
          }
          if ( v30 == 3 || !v30 )
          {
            v15 = v4;
            if ( *v4 )
            {
              v16 = (unsigned int)MaxCount;
              do
              {
                if ( !wcsncmp(v15, (const wchar_t *)Pool2, v16) )
                {
                  v18 = v15[v16];
                  if ( v18 == 92 || !v18 )
                    break;
                }
                v17 = -1LL;
                do
                  ++v17;
                while ( v15[v17] );
                v15 += v17 + 1;
              }
              while ( *v15 );
              v4 = v35;
              v3 = v34;
            }
            if ( !*v15 )
            {
              v23 = PnpCtxRegDeleteValue(0LL, v3, (const WCHAR *)Pool2);
              inited = v23;
              if ( v23 == -1073741772 )
              {
                inited = 0;
              }
              else if ( v23 < 0 )
              {
                goto LABEL_39;
              }
            }
          }
        }
        if ( inited < 0 )
          goto LABEL_39;
        while ( 1 )
        {
LABEL_38:
          if ( !*v4 )
            goto LABEL_39;
          inited = DrvDbSplitDeviceIdDriverInfMatch(v4);
          if ( inited < 0 )
            goto LABEL_39;
          if ( (_BYTE)Data )
          {
            v31[0] = 0LL;
            inited = RtlInitUnicodeStringEx(v31, (PCWSTR)Pool2);
            if ( inited < 0 )
              goto LABEL_34;
            v22 = ZwSetValueKey(v3, v31, 0, 3u, &Data, 4u);
          }
          else
          {
            v22 = PnpCtxRegSetValue(v21, v3, (__int64)Pool2, 0LL, 0LL, 0);
          }
          inited = v22;
LABEL_34:
          if ( inited < 0 )
            goto LABEL_39;
          v19 = -1LL;
          do
            ++v19;
          while ( v4[v19] );
          v4 += v19 + 1;
        }
      }
      return (unsigned int)-1073741801;
    }
    v24 = v29;
    if ( !v29 )
      return 0;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 2LL * v6, 0x42444450u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    for ( j = 0; ; ++j )
    {
      if ( j >= v24 )
        goto LABEL_39;
      LODWORD(MaxCount) = v6;
      inited = PnpCtxRegEnumValue(v25, v3, j, Pool2, (__int64)&MaxCount, 0LL, 0LL, 0LL);
      if ( inited < 0 )
        break;
      v28 = PnpCtxRegDeleteValue(v27, v3, (const WCHAR *)Pool2);
      inited = v28;
      if ( v28 == -1073741772 )
      {
        inited = 0;
      }
      else if ( v28 < 0 )
      {
        goto LABEL_39;
      }
    }
    if ( inited == -2147483622 )
      inited = 0;
LABEL_39:
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
