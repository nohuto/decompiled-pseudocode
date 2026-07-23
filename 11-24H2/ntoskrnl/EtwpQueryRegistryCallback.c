/*
 * XREFs of EtwpQueryRegistryCallback @ 0x1407AF990
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall EtwpQueryRegistryCallback(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  UNICODE_STRING *v8; // rcx
  wchar_t *Buffer; // rbx
  __int64 v10; // rcx

  v6 = 0;
  if ( a6 )
  {
    if ( a3 && a4 )
    {
      if ( a2 == *(_DWORD *)a6 )
      {
        switch ( a2 )
        {
          case 4:
            if ( a4 >= 4 )
              **(_DWORD **)(a6 + 8) = *(_DWORD *)a3;
            break;
          case 11:
            **(_QWORD **)(a6 + 8) = *(_QWORD *)a3;
            break;
          case 1:
            v8 = *(UNICODE_STRING **)(a6 + 8);
            if ( a4 <= 2 )
            {
              *v8 = 0LL;
            }
            else
            {
              Buffer = v8->Buffer;
              v6 = RtlCreateUnicodeString(v8, a3) == 0 ? 0xC0000017 : 0;
              if ( Buffer )
                ExFreePool(Buffer);
            }
            break;
          default:
            if ( a2 == 3 && a4 >= 4 )
            {
              v10 = *(_QWORD *)(a6 + 8);
              if ( a4 > *(_DWORD *)v10 )
              {
                *(_DWORD *)v10 = 0;
                return (unsigned int)-1073741306;
              }
              else
              {
                memmove(*(void **)(v10 + 8), a3, a4);
                **(_DWORD **)(a6 + 8) = a4;
              }
            }
            break;
        }
      }
      else
      {
        return (unsigned int)-1073741821;
      }
    }
    else if ( a2 == 3 && *(_DWORD *)a6 == 3 )
    {
      **(_DWORD **)(a6 + 8) = 0;
    }
  }
  return v6;
}
