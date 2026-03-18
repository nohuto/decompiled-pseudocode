/*
 * XREFs of BiCreateObject @ 0x14085E04C
 * Callers:
 *     BcdCreateObject @ 0x14085E224 (BcdCreateObject.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x140ABC2E0 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiIsValidObject @ 0x14085E18C (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x14085F3C4 (BiSetObjectDescription.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x1408EA880 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1409BEF24 (BiIsObjectAliased.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 v8; // r8
  void *v9; // rsi
  void *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r8
  UUID *p_Uuid; // r11
  int v16; // ebx
  NTSTATUS result; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  bool v21; // [rsp+30h] [rbp-50h] BYREF
  void *v22; // [rsp+38h] [rbp-48h] BYREF
  void *v23; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-38h] BYREF
  void *v25; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  v25 = 0LL;
  UnicodeString.Buffer = 0LL;
  v8 = *a3;
  v9 = 0LL;
  Uuid = 0LL;
  v10 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v6);
  if ( !(unsigned __int8)BiIsValidObject(a3, v12, v11) )
    return -1073741637;
  if ( v13 )
  {
    if ( (unsigned __int8)BiIsObjectAliased(v13, v26) )
      return -1073741773;
    goto LABEL_4;
  }
  BiLogMessage(2LL, L"Generating object GUID.");
  result = ExUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    p_Uuid = &Uuid;
LABEL_4:
    LOBYTE(v14) = 1;
    v16 = RtlStringFromGUIDEx(p_Uuid, &UnicodeString, v14);
    if ( v16 >= 0 )
    {
      BiLogMessage(2LL, L"Object GUID: %s", UnicodeString.Buffer);
      v19 = BiOpenKey(a1, L"Objects", v18 + 2, &v23);
      v9 = v23;
      v16 = v19;
      if ( v19 >= 0 )
      {
        v20 = BiCreateKey((__int64)v23, UnicodeString.Buffer, 0xF003Fu, 0, &v22, &v21);
        v10 = v22;
        v16 = v20;
        if ( v20 >= 0 )
        {
          v16 = BiSetObjectDescription(v22, a3);
          if ( v16 >= 0 )
          {
            v16 = BiCreateKey((__int64)v10, L"Elements", 0x20019u, 0, &v25, &v21);
            if ( v16 >= 0 )
            {
              *a5 = v10;
              v16 = 0;
            }
            if ( v25 )
              BiCloseKey(v25);
          }
        }
      }
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( v16 < 0 && v10 )
      BiCloseKey(v10);
    if ( v9 )
      BiCloseKey(v9);
    return v16;
  }
  return result;
}
