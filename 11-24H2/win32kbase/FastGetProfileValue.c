/*
 * XREFs of FastGetProfileValue @ 0x14009F680
 * Callers:
 *     InitScancodeMap @ 0x14009E260 (InitScancodeMap.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        PCUNICODE_STRING Source,
        int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        size_t Size,
        int a7)
{
  int v10; // ebx
  BYTE *Text; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  void *v14; // rsi
  ULONG *p_KeyValueInformation; // rbx
  NTSTATUS v16; // eax
  ULONG Length; // [rsp+30h] [rbp-A1h] BYREF
  int v19; // [rsp+34h] [rbp-9Dh]
  int v20; // [rsp+38h] [rbp-99h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+40h] [rbp-91h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-89h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-79h] BYREF
  _WORD v24[40]; // [rsp+70h] [rbp-61h] BYREF

  v20 = a2;
  Length = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v19 = *(_DWORD *)(W32GetUserSessionState(Source) + 62824) | a7;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v24[0] = 0;
    v10 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)a3, &MessageResourceEntry) >= 0 )
    {
      Text = MessageResourceEntry->Text;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&Text[2 * v12] );
      v10 = v12 - 2;
      if ( v10 < 0 )
        goto LABEL_6;
      if ( v10 > 39 )
        v10 = 39;
      memmove(v24, Text, 2LL * v10);
    }
    v24[v10] = 0;
LABEL_6:
    a3 = v24;
    goto LABEL_7;
  }
  while ( 1 )
  {
LABEL_7:
    v14 = (void *)OpenCacheKeyEx(Source);
    if ( !v14 )
    {
      if ( (a7 & 0x10) == 0 )
        goto LABEL_19;
      return 0LL;
    }
    if ( (_DWORD)Size )
    {
      Length = Size + 12;
      p_KeyValueInformation = (ULONG *)Win32AllocPoolWithQuotaZInitImpl(v13, (unsigned int)(Size + 12), 0x72707355u);
      if ( !p_KeyValueInformation )
        goto LABEL_18;
    }
    else
    {
      Length = 16;
      p_KeyValueInformation = (ULONG *)&KeyValueInformation;
    }
    RtlInitUnicodeString(&DestinationString, a3);
    v16 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, p_KeyValueInformation, Length, &Length);
    if ( v16 >= 0 )
      break;
    if ( v16 == -2147483643 && !(_DWORD)Size )
    {
      ZwClose(v14);
      return p_KeyValueInformation[2];
    }
    if ( !v19 )
    {
      if ( (_DWORD)Size )
        GreDeleteFastMutex((char *)p_KeyValueInformation);
LABEL_18:
      ZwClose(v14);
LABEL_19:
      if ( a4 )
      {
        memmove(a5, a4, (unsigned int)Size);
        return (unsigned int)Size;
      }
      return 0LL;
    }
    if ( (_DWORD)Size )
      GreDeleteFastMutex((char *)p_KeyValueInformation);
    ZwClose(v14);
  }
  Length = p_KeyValueInformation[2];
  memmove(a5, p_KeyValueInformation + 3, Length);
  if ( (_DWORD)Size )
    GreDeleteFastMutex((char *)p_KeyValueInformation);
  ZwClose(v14);
  return Length;
}
