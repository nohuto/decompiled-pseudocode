/*
 * XREFs of MiMemoryLicense @ 0x140C561FC
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x140977CA0 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140C55E48 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140C55FF4 (MiLimitLoaderBlockTotalMemory.c)
 */

unsigned __int64 __fastcall MiMemoryLicense(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // rbx
  unsigned __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( dword_140FC421C == 6881367 )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = 1;
    dword_140FC421C = 0;
  }
  else
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = (dword_140FC421C != 6357068) + 2;
    dword_140FC421C = 1;
  }
  v9 = 0;
  v7 = 0;
  v6[1] = L"Kernel-WindowsMaxMemAllowedx64";
  v6[0] = 4063292LL;
  v8 = 4;
  if ( (int)NtQueryLicenseValue((unsigned __int64)v6, &v9, &v7, 4u, &v8) >= 0 && v7 )
    v2 = (unsigned __int64)v7 << 8;
  else
    v2 = 0x80000LL;
  qword_140E2DB48 = v2;
  v3 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140E2DB3C) < 0x3FFFFFF7FELL )
    v3 = 1LL << dword_140E2DB3C;
  if ( qword_140E2DB80 && v3 > (unsigned __int64)qword_140E2DB80 >> 12 )
    v3 = (unsigned __int64)qword_140E2DB80 >> 12;
  v4 = v3 - 1;
  MiLimitLoaderBlockHighMemory(a1, v4);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_140E2DBE0 = v4;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140E35B00 = 0x3FFFFFF7FELL;
  return result;
}
