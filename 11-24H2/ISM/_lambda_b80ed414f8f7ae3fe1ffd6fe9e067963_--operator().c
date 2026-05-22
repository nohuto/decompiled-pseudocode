/*
 * XREFs of _lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator() @ 0x180179088
 * Callers:
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18017B710 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+5Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v6 = HIDWORD(a1);
  v7 = 0;
  v5 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         L"CursorUpdateInterval",
         0x10u,
         0LL,
         &v7,
         &v5) )
  {
    return *a3;
  }
  else
  {
    return v7;
  }
}
