/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409F2778
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1409F2680 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14036C898 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1406E9338 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  int inserted; // ecx
  unsigned __int64 v9; // r14
  unsigned int *v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // rcx
  wchar_t *v15; // rax
  unsigned __int64 v16; // r14
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 || !a3 || (v6 = (unsigned __int64)a2 + a3, v6 < (unsigned __int64)a2) )
  {
    inserted = -1073741811;
    goto LABEL_17;
  }
  memset_0(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) > v6 )
    goto LABEL_16;
  *a2 = 0;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  a2[6] = 0;
  *((_QWORD *)a2 + 5) = a2 + 8;
  *((_QWORD *)a2 + 4) = a2 + 8;
  v7 = 112LL * *a1;
  if ( v7 > 0xFFFFFFFF )
  {
    inserted = -1073741675;
    goto LABEL_17;
  }
  inserted = 0;
  v9 = (unsigned __int64)a2 + (unsigned int)v7 + 48;
  if ( v9 > v6 )
  {
LABEL_16:
    inserted = -2147483643;
LABEL_17:
    if ( a3 >= 0x30 )
    {
      *(_OWORD *)a2 = 0LL;
      *((_OWORD *)a2 + 1) = 0LL;
      *((_OWORD *)a2 + 2) = 0LL;
    }
    return (unsigned int)inserted;
  }
  v10 = a1 + 2;
  v11 = a2 + 38;
  v12 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v12 != v10 )
  {
    inserted = AuthzBasepProbeAndInsertTailList((unsigned __int64)(a2 + 2), v11 - 13);
    if ( inserted < 0 )
      goto LABEL_17;
    ++*a2;
    *((_WORD *)v11 - 28) = *(_WORD *)(v12 + 48);
    *((_DWORD *)v11 - 13) = *(_DWORD *)(v12 + 52);
    *(v11 - 6) = 0LL;
    *((_DWORD *)v11 - 10) = 0;
    *(v11 - 3) = v11 - 4;
    *(v11 - 4) = v11 - 4;
    *((_DWORD *)v11 - 4) = 0;
    *v11 = v11 - 1;
    *(v11 - 1) = v11 - 1;
    v14 = *(unsigned __int16 *)(v12 + 32);
    v15 = (wchar_t *)((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v18 = *(unsigned __int16 *)(v12 + 32);
    v16 = (unsigned __int64)v15 + v14;
    if ( (unsigned __int64)v15 + v14 > v6 )
      goto LABEL_16;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.MaximumLength = v14;
    DestinationString.Buffer = v15;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 32));
    *(UNICODE_STRING *)(v11 - 9) = DestinationString;
    inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(v12, (__int64)(v11 - 13), v16, (int)v6 - (int)v16, &v18);
    if ( inserted < 0 )
      goto LABEL_17;
    v12 = *(_QWORD *)v12;
    v9 = v18 + v16;
    v11 += 14;
  }
  return (unsigned int)inserted;
}
