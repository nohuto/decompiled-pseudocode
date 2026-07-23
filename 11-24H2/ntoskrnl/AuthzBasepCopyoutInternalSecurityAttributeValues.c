/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1403FA050
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409DDE40 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1409DE008 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int inserted; // r10d
  unsigned __int64 v6; // rbp
  int v7; // r15d
  unsigned __int64 v9; // rsi
  wchar_t *v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  unsigned __int64 i; // r14
  __int64 v15; // rax
  wchar_t *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  inserted = 0;
  v6 = a3 + a4;
  v7 = a3;
  DestinationString = 0LL;
  if ( v6 >= a3 )
  {
    v9 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = (wchar_t *)(v9 + (unsigned int)(*(_DWORD *)(a1 + 60) << 6));
    *a5 = 0;
    if ( (unsigned __int64)v10 <= v6 )
    {
      v11 = (__int64 *)(a1 + 72);
      v12 = *(__int64 **)(a1 + 72);
      for ( i = v9 + 40; ; i += 64LL )
      {
        if ( v12 == v11 )
        {
          *a5 = (_DWORD)v10 - v7;
          return (unsigned int)inserted;
        }
        *(_DWORD *)(i - 8) = 0;
        if ( *(_WORD *)(a1 + 48) == 1 || *(_WORD *)(a1 + 48) == 2 )
          break;
        if ( *(_WORD *)(a1 + 48) == 3 )
        {
          v15 = *((unsigned __int16 *)v12 + 20);
          v16 = (wchar_t *)((char *)v10 + v15);
          if ( (unsigned __int64)v10 + v15 > v6 )
            return (unsigned int)-2147483643;
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.MaximumLength = v15;
          DestinationString.Buffer = v10;
          RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 5));
          *(UNICODE_STRING *)i = DestinationString;
        }
        else if ( *(_WORD *)(a1 + 48) == 4 )
        {
          v17 = *((unsigned __int16 *)v12 + 24);
          v16 = (wchar_t *)((char *)v10 + v17);
          if ( (unsigned __int64)v10 + v17 > v6 )
            return (unsigned int)-2147483643;
          v18 = v12[5];
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.MaximumLength = v17;
          *(_QWORD *)i = v18;
          DestinationString.Buffer = v10;
          RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)v12 + 3);
          *(UNICODE_STRING *)(i + 8) = DestinationString;
        }
        else
        {
          if ( *(_WORD *)(a1 + 48) != 5 )
          {
            if ( *(_WORD *)(a1 + 48) == 6 )
              break;
            if ( *(_WORD *)(a1 + 48) != 16 )
              return (unsigned int)-1073741811;
          }
          v19 = *((unsigned int *)v12 + 12);
          v16 = (wchar_t *)((char *)v10 + v19);
          if ( (unsigned __int64)v10 + v19 > v6 )
            return (unsigned int)-2147483643;
          *(_DWORD *)(i + 8) = v19;
          *(_QWORD *)i = v10;
          memmove(v10, (const void *)v12[5], v19);
        }
        v10 = v16;
LABEL_12:
        inserted = AuthzBasepProbeAndInsertTailList(a2 + 72, v9);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v11 = (__int64 *)(a1 + 72);
        v9 += 64LL;
        ++*(_DWORD *)(a2 + 60);
        v12 = (__int64 *)*v12;
      }
      *(_QWORD *)i = v12[5];
      goto LABEL_12;
    }
  }
  return (unsigned int)-2147483643;
}
