/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x140891064
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x14092EE30 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14089134C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 *     _RegRtlQueryInfoKey @ 0x140951A2C (_RegRtlQueryInfoKey.c)
 *     _PnpCtxRegEnumValue @ 0x1409531FC (_PnpCtxRegEnumValue.c)
 *     _RegRtlEnumValue @ 0x14095324C (_RegRtlEnumValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  void *v3; // r13
  const wchar_t *v4; // rsi
  NTSTATUS InfoKey; // ebx
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
  NTSTATUS v19; // eax
  __int64 v20; // rax
  __int64 v22; // rcx
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
  InfoKey = RegRtlQueryInfoKey((_DWORD)a2, 0, 0, (unsigned int)&v29, (__int64)&MaxCount, 0LL);
  if ( InfoKey >= 0 )
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
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; i < v29; ++i )
        {
          LODWORD(MaxCount) = v6;
          v14 = RegRtlEnumValue(v3, i, Pool2, (__int64)&v30, 0LL, 0LL);
          InfoKey = v14;
          if ( v14 < 0 )
          {
            if ( v14 == -2147483622 )
            {
              InfoKey = 0;
              goto LABEL_40;
            }
            goto LABEL_41;
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
              v23 = PnpCtxRegDeleteValue(0LL, v3, Pool2);
              InfoKey = v23;
              if ( v23 == -1073741772 )
              {
                InfoKey = 0;
              }
              else if ( v23 < 0 )
              {
                goto LABEL_41;
              }
            }
          }
        }
        if ( InfoKey < 0 )
          goto LABEL_41;
        while ( 1 )
        {
LABEL_40:
          if ( !*v4 )
            goto LABEL_41;
          InfoKey = DrvDbSplitDeviceIdDriverInfMatch(v4);
          if ( InfoKey < 0 )
            goto LABEL_41;
          if ( !(_BYTE)Data )
            break;
          v31[0] = 0LL;
          InfoKey = RtlInitUnicodeStringEx(v31, (PCWSTR)Pool2);
          if ( InfoKey >= 0 )
          {
            v19 = ZwSetValueKey(v3, v31, 0, 3u, &Data, 4u);
LABEL_35:
            InfoKey = v19;
          }
          if ( InfoKey < 0 )
            goto LABEL_41;
          v20 = -1LL;
          do
            ++v20;
          while ( v4[v20] );
          v4 += v20 + 1;
        }
        v19 = PnpCtxRegSetValue(v22, v3, Pool2, 0LL, 0LL, 0);
        goto LABEL_35;
      }
      return (unsigned int)-1073741801;
    }
    v24 = v29;
    if ( !v29 )
      return 0;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    for ( j = 0; ; ++j )
    {
      if ( j >= v24 )
        goto LABEL_41;
      LODWORD(MaxCount) = v6;
      InfoKey = PnpCtxRegEnumValue(v25, v3, j, Pool2, &MaxCount, 0LL, 0LL, 0LL);
      if ( InfoKey < 0 )
        break;
      v28 = PnpCtxRegDeleteValue(v27, v3, Pool2);
      InfoKey = v28;
      if ( v28 == -1073741772 )
      {
        InfoKey = 0;
      }
      else if ( v28 < 0 )
      {
        goto LABEL_41;
      }
    }
    if ( InfoKey == -2147483622 )
      InfoKey = 0;
LABEL_41:
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)InfoKey;
}
