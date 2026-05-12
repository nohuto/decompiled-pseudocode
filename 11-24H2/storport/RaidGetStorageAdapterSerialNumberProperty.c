/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1401B86B4
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401BD85C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RtlStringCchCopyW @ 0x1400368AC (RtlStringCchCopyW.c)
 *     RtlStringCchLengthA @ 0x140066830 (RtlStringCchLengthA.c)
 *     RtlStringCchLengthW @ 0x14006688C (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCopyString @ 0x1400668E8 (RtlUnicodeStringCopyString.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

signed int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  _WORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v11; // ax
  _WORD *v12; // rax
  signed int result; // eax
  size_t v14; // rsi
  wchar_t *Pool; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+54h] [rbp-ACh]
  char v21; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t psz[131]; // [rsp+59h] [rbp-A7h] BYREF
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(&v21, 0, 0x104uLL);
  pcchLength = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 17) )
    return -1073741637;
  v6 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return -1073741789;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v6 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  v7 = a2 + 2;
  *a3 = 0LL;
  memset_0(v7, 0, 0x100uLL);
  v8 = *(_QWORD *)(a1 + 5080);
  if ( v8 )
  {
    v9 = 128LL;
    v10 = v8 - (_QWORD)v7;
    do
    {
      if ( v9 == -2147483518 )
        break;
      v11 = *(_WORD *)((char *)v7 + v10);
      if ( !v11 )
        break;
      *v7++ = v11;
      --v9;
    }
    while ( v9 );
    v12 = v7 - 1;
    if ( v9 )
      v12 = v7;
    *v12 = 0;
    result = v9 == 0 ? 0x80000005 : 0;
    if ( v9 )
LABEL_12:
      *a3 = 264LL;
  }
  else
  {
    v19 = 1;
    v20 = 268;
    result = RaCallMiniportAdapterControl(a1 + 376);
    if ( result >= 0 )
    {
      result = v21 == 1
             ? RtlStringCchLengthW(psz, 0x7FFFFFFFuLL, &pcchLength)
             : RtlStringCchLengthA((STRSAFE_PCNZCH)psz, 0x7FFFFFFFuLL, &pcchLength);
      if ( result >= 0 )
      {
        v14 = pcchLength;
        if ( pcchLength - 1 > 0x7E )
          return -1073739509;
        DestinationString.Buffer = pszSrc;
        DestinationString.MaximumLength = 256;
        if ( v21 == 1 )
        {
          result = RtlUnicodeStringCopyString(&DestinationString, psz);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)psz);
          result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        }
        if ( result >= 0 )
        {
          result = RtlStringCchCopyW(v7, 0x80uLL, pszSrc);
          if ( result >= 0 )
          {
            Pool = (wchar_t *)RaidAllocatePool(64LL, 2 * v14 + 2, 1413833042LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(a1 + 5080) = Pool;
            if ( Pool )
              RtlStringCchCopyW(Pool, v14 + 1, pszSrc);
            result = 0;
            goto LABEL_12;
          }
        }
      }
    }
  }
  return result;
}
