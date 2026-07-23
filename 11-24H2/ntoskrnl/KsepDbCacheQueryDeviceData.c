/*
 * XREFs of KsepDbCacheQueryDeviceData @ 0x14073C34C
 * Callers:
 *     KsepDbCacheQueryDevice @ 0x140942E30 (KsepDbCacheQueryDevice.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // edi
  const UNICODE_STRING *v8; // r15
  const UNICODE_STRING *v9; // r14
  const UNICODE_STRING *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v7 = -1073741275;
  if ( a1 )
  {
    v8 = (const UNICODE_STRING *)(a1 + 56);
    v9 = *(const UNICODE_STRING **)(a1 + 56);
    v7 = 0;
    String2 = 0LL;
    RtlInitUnicodeString(&String2, a2);
    do
    {
      if ( v9 == v8 )
        goto LABEL_9;
      v10 = v9;
      v9 = *(const UNICODE_STRING **)&v9->Length;
    }
    while ( !RtlEqualUnicodeString(v10 + 1, &String2, 1u) );
    if ( !v10 )
    {
LABEL_9:
      *a4 = 0;
      return v7;
    }
    *a3 = *(_DWORD *)(&v10[2].MaximumLength + 1);
    v11 = *a4;
    v12 = *(_DWORD *)&v10[2].Length;
    *a4 = v12;
    if ( v11 >= v12 )
      memmove(a5, v10[2].Buffer, *(unsigned int *)&v10[2].Length);
    else
      return (unsigned int)-1073741789;
  }
  return v7;
}
