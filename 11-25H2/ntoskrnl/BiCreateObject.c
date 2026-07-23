/*
 * XREFs of BiCreateObject @ 0x140A262E4
 * Callers:
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB8160 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiIsValidObject @ 0x140A26424 (BiIsValidObject.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x140A269A4 (BiIsObjectAliased.c)
 *     BiSetObjectDescription @ 0x140A64424 (BiSetObjectDescription.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
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
  GUID *p_Uuid; // r11
  NTSTATUS v15; // ebx
  NTSTATUS result; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _BYTE v20[8]; // [rsp+30h] [rbp-50h] BYREF
  void *v21; // [rsp+38h] [rbp-48h] BYREF
  void *v22; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-38h] BYREF
  void *v24; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  v24 = 0LL;
  GuidString.Buffer = 0LL;
  v8 = *a3;
  v9 = 0LL;
  Uuid = 0LL;
  v10 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v6);
  if ( !(unsigned __int8)BiIsValidObject(a3, v12, v11) )
    return -1073741637;
  if ( v13 )
  {
    if ( (unsigned __int8)BiIsObjectAliased(v13, v25) )
      return -1073741773;
    goto LABEL_4;
  }
  BiLogMessage(2LL, L"Generating object GUID.");
  result = ExUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    p_Uuid = &Uuid;
LABEL_4:
    v15 = RtlStringFromGUIDEx(p_Uuid, &GuidString, 1u);
    if ( v15 >= 0 )
    {
      BiLogMessage(2LL, L"Object GUID: %s", GuidString.Buffer);
      v18 = BiOpenKey(a1, L"Objects", v17 + 2, &v22);
      v9 = v22;
      v15 = v18;
      if ( v18 >= 0 )
      {
        v19 = BiCreateKey(v22, GuidString.Buffer, 983103LL, 0LL, &v21, v20);
        v10 = v21;
        v15 = v19;
        if ( v19 >= 0 )
        {
          v15 = BiSetObjectDescription(v21, a3);
          if ( v15 >= 0 )
          {
            v15 = BiCreateKey(v10, L"Elements", 131097LL, 0LL, &v24, v20);
            if ( v15 >= 0 )
            {
              *a5 = v10;
              v15 = 0;
            }
            if ( v24 )
              BiCloseKey(v24);
          }
        }
      }
    }
    if ( GuidString.Buffer )
      RtlFreeAnsiString(&GuidString);
    if ( v15 < 0 && v10 )
      BiCloseKey(v10);
    if ( v9 )
      BiCloseKey(v9);
    return v15;
  }
  return result;
}
