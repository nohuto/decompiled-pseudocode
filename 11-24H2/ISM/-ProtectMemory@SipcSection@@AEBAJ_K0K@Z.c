/*
 * XREFs of ?ProtectMemory@SipcSection@@AEBAJ_K0K@Z @ 0x18009ACDC
 * Callers:
 *     ?ProtectExtraMemory@SipcSection@@IEBAXXZ @ 0x1800859B4 (-ProtectExtraMemory@SipcSection@@IEBAXXZ.c)
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x18010FCA0 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcSection::ProtectMemory(SipcSection *this, __int64 a2, __int64 a3, DWORD a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  signed int LastError; // eax
  signed int v8; // ecx
  __int64 result; // rax
  DWORD flOldProtect; // [rsp+38h] [rbp+10h] BYREF

  v4 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v5 = (a3 + a2) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 <= v4 )
    return 0LL;
  v6 = *((_QWORD *)this + 4);
  flOldProtect = 0;
  if ( VirtualProtect((LPVOID)(v4 + v6), v5 - v4, a4, &flOldProtect) )
    return 0LL;
  LastError = GetLastError();
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
  result = 2147549183LL;
  if ( v8 < 0 )
    return (unsigned int)v8;
  return result;
}
