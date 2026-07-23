/*
 * XREFs of PiDevCfgAppendMultiSz @ 0x140726258
 * Callers:
 *     PiDevCfgRequestDriverConfigurations @ 0x140729428 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgAppendMultiSz(PUNICODE_STRING UnicodeString, const void **a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  wchar_t *Pool2; // rax
  wchar_t *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 Length; // dx
  int v14; // ecx
  unsigned int v15; // ecx
  wchar_t *Buffer; // r13
  unsigned __int16 v17; // si
  unsigned __int64 v18; // rax
  _WORD *i; // r14
  __int64 v20; // rax
  __int16 v21; // r15
  unsigned __int64 v22; // rbp
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  *(_QWORD *)&UnicodeStringa.Length = 0LL;
  UnicodeStringa.Buffer = 0LL;
  if ( UnicodeString->Buffer )
  {
    Length = UnicodeString->Length;
    v14 = UnicodeString->Length;
    if ( Length <= 2u )
      v14 = 2;
    if ( a2 )
    {
      v15 = *(unsigned __int16 *)a2 + 2 + v14;
    }
    else
    {
      if ( !a3 )
        goto LABEL_40;
      v15 = *(unsigned __int16 *)a3 + v14;
      if ( Length )
        v15 -= 2;
    }
    if ( v15 > 0xFFFE )
      goto LABEL_4;
    UnicodeStringa.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v15, 0x67727453u);
    Buffer = UnicodeStringa.Buffer;
    if ( !UnicodeStringa.Buffer )
      goto LABEL_6;
    if ( UnicodeString->Length <= 2u )
    {
      v17 = 0;
    }
    else
    {
      memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
      v17 = UnicodeString->Length - 2;
    }
    if ( a2 )
    {
      if ( a4 || !PnpMultiSzContainsString(UnicodeString->Buffer, (wchar_t *)a2[1]) )
      {
        memmove((char *)UnicodeStringa.Buffer + v17, a2[1], *(unsigned __int16 *)a2);
        v18 = (unsigned __int64)(unsigned __int16)(*(_WORD *)a2 + v17) >> 1;
        v17 += *(_WORD *)a2 + 2;
        UnicodeStringa.Buffer[v18] = 0;
      }
    }
    else if ( a3 )
    {
      if ( a4 )
      {
        memmove((char *)UnicodeStringa.Buffer + v17, a3[1], *(unsigned __int16 *)a3);
        v17 += *(_WORD *)a3 - 2;
      }
      else
      {
        for ( i = a3[1]; *i; i += v22 >> 1 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( i[v20] );
          v21 = 2 * v20 + 2;
          v22 = (unsigned int)(2 * v20 + 2);
          if ( !PnpMultiSzContainsString(UnicodeString->Buffer, i) )
          {
            memmove((char *)UnicodeStringa.Buffer + v17, i, (unsigned int)v22);
            v17 += v21;
          }
        }
      }
    }
    UnicodeStringa.Length = v17 + 2;
    UnicodeStringa.MaximumLength = v17 + 2;
    Buffer[(unsigned __int64)v17 >> 1] = 0;
    RtlFreeAnsiString(UnicodeString);
    *UnicodeString = UnicodeStringa;
    UnicodeStringa = 0LL;
    goto LABEL_41;
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( PnpDuplicateUnicodeString((__int64)UnicodeString, (__int64)a3) )
        goto LABEL_41;
      goto LABEL_6;
    }
LABEL_40:
    v4 = -1073741811;
    goto LABEL_41;
  }
  v9 = *(unsigned __int16 *)a2 + 4;
  if ( v9 > 0xFFFE )
  {
LABEL_4:
    v4 = -2147483643;
    goto LABEL_41;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v9, 0x67727453u);
  UnicodeString->Buffer = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    v4 = -1073741670;
    goto LABEL_41;
  }
  v12 = *(_WORD *)a2;
  UnicodeString->Length = *(_WORD *)a2;
  if ( *(_WORD *)a2 )
  {
    memmove(v11, a2[1], *(unsigned __int16 *)a2);
    UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
    UnicodeString->Length += 2;
    v12 = UnicodeString->Length;
  }
  UnicodeString->Buffer[(unsigned __int64)v12 >> 1] = 0;
  UnicodeString->Length += 2;
  UnicodeString->MaximumLength = UnicodeString->Length;
LABEL_41:
  RtlFreeAnsiString(&UnicodeStringa);
  return v4;
}
