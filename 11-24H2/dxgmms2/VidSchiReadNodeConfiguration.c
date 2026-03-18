/*
 * XREFs of VidSchiReadNodeConfiguration @ 0x14010E3D4
 * Callers:
 *     VidSchiReadGlobalConfiguration @ 0x14010D47C (VidSchiReadGlobalConfiguration.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x14004AFCC (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall VidSchiReadNodeConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  const wchar_t *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  _DWORD *v10; // rdi
  unsigned __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h]

  v3 = *(_QWORD *)(a1 + 16);
  KeyHandle = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  v5 = DpiOpenPnpRegistryKey(*(_QWORD *)(v3 + 216));
  if ( v5 >= 0 )
  {
    v6 = 0x7FFFLL;
    v7 = L"HwQueuedRenderPacketGroupLimitPerNode";
    while ( *v7 )
    {
      ++v7;
      if ( !--v6 )
        goto LABEL_7;
    }
    ValueName.Buffer = L"HwQueuedRenderPacketGroupLimitPerNode";
    ValueName.Length = 2 * (0x7FFF - v6);
    ValueName.MaximumLength = ValueName.Length + 2;
LABEL_7:
    v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v8 == -2147483643 || v8 == -1073741789 )
    {
      v9 = 4LL * ResultLength;
      if ( !is_mul_ok(ResultLength, 4uLL) )
        v9 = -1LL;
      v10 = (_DWORD *)operator new[](v9, 0x31616956u, 256LL);
      if ( v10 )
      {
        v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, ResultLength, &ResultLength);
        if ( v5 >= 0 )
        {
          if ( v10[1] != 3
            || (v11 = (unsigned int)v10[2], (v11 & 3) != 0)
            || v11 > 4 * (unsigned __int64)*(unsigned int *)(a1 + 80) )
          {
            v5 = -1073741811;
          }
          else
          {
            v12 = 0;
            if ( (v11 & 0xFFFFFFFC) != 0 )
            {
              do
              {
                v13 = v12++;
                *(_DWORD *)(a2 + 4 * v13) = _byteswap_ulong(v10[v13 + 3]);
              }
              while ( v12 < v10[2] >> 2 );
            }
          }
        }
        operator delete(v10);
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
