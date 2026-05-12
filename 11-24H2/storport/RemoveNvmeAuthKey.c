/*
 * XREFs of RemoveNvmeAuthKey @ 0x14006FB9C
 * Callers:
 *     NvmeAdapterDeleteAuthenticationKey @ 0x140194FD0 (NvmeAdapterDeleteAuthenticationKey.c)
 * Callees:
 *     FindNvmeAuthKey @ 0x14006DD84 (FindNvmeAuthKey.c)
 *     NvmeDeleteAuthKey @ 0x14006ED14 (NvmeDeleteAuthKey.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RemoveNvmeAuthKey(char *Str2, unsigned __int16 a2, const void *a3)
{
  int v6; // esi
  const char *NvmeAuthKey; // rax
  __int64 v8; // rbx
  _BYTE Buffer[4]; // [rsp+20h] [rbp-348h] BYREF
  int v11; // [rsp+24h] [rbp-344h]

  memset_0(Buffer, 0, 0x314uLL);
  v6 = -1073741275;
  NvmeAuthKey = (const char *)FindNvmeAuthKey(a2, a3);
  v8 = (__int64)NvmeAuthKey;
  if ( NvmeAuthKey && !_strnicmp(NvmeAuthKey + 20, Str2, 0x100uLL) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 16), 0, 0) )
    {
      return (unsigned int)-1073740024;
    }
    else
    {
      v6 = NvmeDeleteAuthKey(v8);
      if ( v6 >= 0 )
      {
        v11 = *(_DWORD *)(v8 + 4);
        RtlDeleteElementGenericTable(&NvmeAuthKeyTable, Buffer);
        return 0;
      }
    }
  }
  return (unsigned int)v6;
}
