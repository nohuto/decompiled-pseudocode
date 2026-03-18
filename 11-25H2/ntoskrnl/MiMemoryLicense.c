/*
 * XREFs of MiMemoryLicense @ 0x140C44F1C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x14097DEE0 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140C44B68 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140C44D14 (MiLimitLoaderBlockTotalMemory.c)
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

  if ( dword_140FC420C == 6881367 )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = 1;
    dword_140FC420C = 0;
  }
  else
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = (dword_140FC420C != 6357068) + 2;
    dword_140FC420C = 1;
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
  qword_140E2D908 = v2;
  v3 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140E2D8FC) < 0x3FFFFFF7FELL )
    v3 = 1LL << dword_140E2D8FC;
  if ( qword_140E2D940 && v3 > (unsigned __int64)qword_140E2D940 >> 12 )
    v3 = (unsigned __int64)qword_140E2D940 >> 12;
  v4 = v3 - 1;
  MiLimitLoaderBlockHighMemory(a1, v4);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_140E2D9A0 = v4;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140E358C0 = 0x3FFFFFF7FELL;
  return result;
}
