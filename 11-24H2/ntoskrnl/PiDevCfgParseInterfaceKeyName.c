/*
 * XREFs of PiDevCfgParseInterfaceKeyName @ 0x1404AB8CC
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParseInterfaceKeyName(__int64 a1, GUID *a2, __int64 *a3)
{
  unsigned __int16 v5; // ax
  NTSTATUS v6; // eax
  __int64 v8; // r8
  __int16 v9; // cx
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  if ( *(_WORD *)a1 < 0x4Cu )
  {
LABEL_4:
    v6 = -1073741823;
    return v6 >= 0;
  }
  v10.Buffer = *(wchar_t **)(a1 + 8);
  v5 = *(_WORD *)(a1 + 2);
  v10.Length = 76;
  v10.MaximumLength = v5;
  v6 = RtlGUIDFromString(&v10, a2);
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_WORD *)(v8 + 76);
    if ( v9 == 35 )
    {
      *a3 = (v8 + 78) & -(__int64)(*(_WORD *)(v8 + 78) != 0);
      return v6 >= 0;
    }
    if ( !v9 )
    {
      *a3 = 0LL;
      return v6 >= 0;
    }
    goto LABEL_4;
  }
  return v6 >= 0;
}
