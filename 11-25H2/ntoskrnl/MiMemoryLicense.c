/*
 * XREFs of MiMemoryLicense @ 0x140C44F1C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x14097DEE0 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140C44B68 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140C44D14 (MiLimitLoaderBlockTotalMemory.c)
 */

unsigned __int64 __fastcall MiMemoryLicense(_RTL_RB_TREE *a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // rbx
  unsigned __int64 result; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+70h] [rbp+18h] BYREF
  ULONG Type; // [rsp+78h] [rbp+20h] BYREF

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
  Type = 0;
  Data = 0;
  ValueName.Buffer = L"Kernel-WindowsMaxMemAllowedx64";
  *(_QWORD *)&ValueName.Length = 4063292LL;
  ResultDataSize = 4;
  if ( NtQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Data )
    v2 = (unsigned __int64)Data << 8;
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
  result = MiLimitLoaderBlockTotalMemory((__int64)a1, v2);
  qword_140E2D9A0 = v4;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140E358C0 = 0x3FFFFFF7FELL;
  return result;
}
