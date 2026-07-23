/*
 * XREFs of IopLiveDumpInitRegistrySettings @ 0x140598764
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     IopGetRegistryBoolValue @ 0x140594D38 (IopGetRegistryBoolValue.c)
 *     IopGetRegistryULongValue @ 0x140594D58 (IopGetRegistryULongValue.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     IopOpenRegistryKey @ 0x140A71460 (IopOpenRegistryKey.c)
 */

NTSTATUS __fastcall IopLiveDumpInitRegistrySettings(__int64 a1)
{
  NTSTATUS result; // eax
  unsigned int RegistryULongValue; // eax
  int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  char v7; // [rsp+20h] [rbp-20h]
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  v8[0] = 7864438LL;
  v7 = 0;
  result = IopOpenRegistryKey(&Handle, 0LL, v8, 131097LL, v7);
  if ( result >= 0 )
  {
    RegistryULongValue = IopGetRegistryULongValue(Handle);
    v4 = *(_DWORD *)(a1 + 80);
    if ( RegistryULongValue )
    {
      v5 = (unsigned __int64)RegistryULongValue << 20;
      v6 = v4 | 0x200;
    }
    else
    {
      v5 = 0LL;
      v6 = v4 & 0xFFFFFDFF;
    }
    *(_DWORD *)(a1 + 80) = v6;
    *(_QWORD *)(a1 + 1144) = v5;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 11)) & 0x800;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)*(_DWORD *)(a1 + 80) ^ (32 * IopGetRegistryBoolValue())) & 0x20;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 7)) & 0x80;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 8)) & 0x100;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 13)) & 0x2000;
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 17)) & 0x20000;
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 18)) & 0x40000;
    result = *(_DWORD *)(a1 + 80) ^ (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 19)) & 0x80000;
    *(_DWORD *)(a1 + 80) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 80) &= 0xFFFDD45F;
  }
  if ( Handle )
    return ObCloseHandle(Handle, 0);
  return result;
}
