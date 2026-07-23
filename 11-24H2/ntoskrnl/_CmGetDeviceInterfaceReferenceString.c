/*
 * XREFs of _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B3FA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceReferenceString(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // rdi
  NTSTATUS result; // eax
  wchar_t *v9; // rax
  const wchar_t *v10; // r8
  __int16 *i; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( result >= 0 )
  {
    v9 = wcschr((const wchar_t *)(a2 + 8), 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      for ( i = (__int16 *)(v9 + 1); ; ++i )
      {
        v12 = *i;
        if ( !*i )
          break;
        if ( v12 == 47 || v12 == 92 )
          return -1073741767;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( v10[v13] );
      v14 = v13 + 1;
      if ( v14 <= 0xFFFFFFFF )
      {
        if ( a5 )
          *a5 = v14;
        if ( (unsigned int)v14 > (unsigned int)v5 )
          return -1073741789;
        else
          return RtlStringCchCopyExW(a3, v5, v10, 0LL, 0LL, 0x900u);
      }
      else
      {
        return -1073741675;
      }
    }
    else
    {
      return -1073741772;
    }
  }
  return result;
}
