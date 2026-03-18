/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1C001ACF0
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C001B1E0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     bNotIsKeySymbolicLink @ 0x1C001BB88 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C001BC3C (GetUserEUDCRegistryPath.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0115D18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029FA48 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  WCHAR *v4; // rax
  unsigned int v5; // edi
  WCHAR *v6; // rbx
  PCWSTR v7; // rcx
  int UserEUDCRegistryPath; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  wchar_t *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  PCWSTR Path; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v16; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v19; // [rsp+A8h] [rbp+58h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v4 = v16;
  v5 = 0;
  if ( v16 )
  {
    v6 = (WCHAR *)Path;
    if ( Path )
    {
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      v7 = Path;
      Handle = 0LL;
      v19 = 0LL;
      *v16 = 0;
      *v6 = 0;
      *(_DWORD *)&DestinationString.Length = 17039360;
      DestinationString.Buffer = v4;
      UserEUDCRegistryPath = GetUserEUDCRegistryPath(v7);
      if ( UserEUDCRegistryPath >= 0 )
      {
        bNotIsKeySymbolicLink(v6, &Handle, &v19);
        UserEUDCRegistryPath = -1073741824;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v19 )
        ZwClose(v19);
      if ( UserEUDCRegistryPath == -1073741772 )
      {
        v12 = wcsrchr(v6, 0x5Cu);
        v14 = SGDGetSessionState(v13);
        if ( v12 )
        {
          if ( !_wcsicmp(v12 + 1, (const wchar_t *)(*(_QWORD *)(v14 + 32) + 13944LL)) )
          {
            *v12 = 0;
            RtlCreateRegistryKey(0, v6);
            *v12 = 92;
            RtlCreateRegistryKey(0, v6);
            if ( (unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE") )
            {
              RtlInitUnicodeString(&DestinationString, L"EUDC.TTE");
              if ( !wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length) )
                v5 = 1;
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path, v2, v3);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v16, v9, v10);
  return v5;
}
