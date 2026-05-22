/*
 * XREFs of ?GetSecurityDescriptor@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010F0A4
 * Callers:
 *     ?Create@SipcPrivateNamespace@@QEAAJXZ @ 0x18010DE08 (-Create@SipcPrivateNamespace@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     swprintf_s @ 0x18009DCC4 (swprintf_s.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SipcPrivateNamespace::GetSecurityDescriptor(SipcPrivateNamespace *this, void **a2)
{
  signed int LastError; // eax
  unsigned int v5; // ebx
  signed int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  size_t v11; // rax
  const struct std::nothrow_t *v12; // rdx
  const WCHAR *v13; // rbx
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  signed int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  HLOCAL hMem; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+40h] BYREF
  wchar_t *v21; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  StringSid = 0LL;
  hMem = 0LL;
  if ( !ConvertSidToStringSidW((char *)this + 100, &StringSid) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v5 = -2147418113;
    if ( LastError < 0 )
      v5 = LastError;
    if ( hMem )
      LocalFree(hMem);
LABEL_8:
    if ( StringSid )
      LocalFree(StringSid);
    return v5;
  }
  if ( !ConvertSidToStringSidW((char *)this + 168, (LPWSTR *)&hMem) )
  {
    v7 = GetLastError();
    if ( v7 > 0 )
      v7 = (unsigned __int16)v7 | 0x80070000;
    v5 = -2147418113;
    if ( v7 < 0 )
      v5 = v7;
LABEL_16:
    if ( hMem )
    {
      LocalFree(hMem);
      hMem = 0LL;
    }
    goto LABEL_8;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)hMem + v8) );
  v9 = -1LL;
  do
    ++v9;
  while ( StringSid[v9] );
  v10 = v8 + v9 + 54;
  v11 = 2 * v10;
  if ( !is_mul_ok(v10, 2uLL) )
    v11 = -1LL;
  v21 = (wchar_t *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v21;
  if ( v21 )
  {
    if ( swprintf_s(v21, v10, L"S:(ML;;NW;;;LW)D:(A;;GA;;;WD)(A;;GA;;;%s)(A;;GA;;;%s)", StringSid, hMem) > 0 )
    {
      SecurityDescriptor = 0LL;
      if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(v13, 1u, &SecurityDescriptor, 0LL) )
      {
        v16 = GetLastError();
        if ( v16 > 0 )
          v16 = (unsigned __int16)v16 | 0x80070000;
        v5 = -2147418113;
        if ( v16 < 0 )
          v5 = v16;
        if ( SecurityDescriptor )
        {
          LocalFree(SecurityDescriptor);
          SecurityDescriptor = 0LL;
        }
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v21, v17);
        goto LABEL_16;
      }
      *a2 = SecurityDescriptor;
      SecurityDescriptor = 0LL;
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v21, v15);
      if ( hMem )
      {
        LocalFree(hMem);
        hMem = 0LL;
      }
      if ( StringSid )
        LocalFree(StringSid);
      return 0LL;
    }
    else
    {
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v21, v14);
      if ( hMem )
      {
        LocalFree(hMem);
        hMem = 0LL;
      }
      if ( StringSid )
        LocalFree(StringSid);
      return 2147549183LL;
    }
  }
  else
  {
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v21, v12);
    if ( hMem )
    {
      LocalFree(hMem);
      hMem = 0LL;
    }
    if ( StringSid )
      LocalFree(StringSid);
    return 2147942414LL;
  }
}
