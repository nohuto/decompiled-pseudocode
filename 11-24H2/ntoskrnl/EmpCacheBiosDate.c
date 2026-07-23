/*
 * XREFs of EmpCacheBiosDate @ 0x140C64A08
 * Callers:
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     strtoul @ 0x1404FAFA8 (strtoul.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x140C19E34 (EmpMapPhysicalAddress.c)
 */

char __fastcall EmpCacheBiosDate(SIZE_T a1, __int64 a2)
{
  char v2; // di
  char *v3; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v11; // [rsp+32h] [rbp-56h]
  char v12; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  v2 = 0;
  BaseAddress = 0LL;
  Handle = 0LL;
  EmpCachedBiosDate = 0;
  v11 = 0;
  if ( dword_140EFEE10 == 1 )
  {
    v3 = EmpMapPhysicalAddress(a1, a2, &Handle, &BaseAddress, (__int64)v15);
    v4 = v3;
    if ( v3 )
    {
      *(_WORD *)Str = *((_WORD *)v3 + 3);
      v5 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v5 << 16) + (v5 < 0x80 ? 0x20000000 : 419430400);
      *(_WORD *)Str = *v4;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v4 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v12 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess((__int64)v15, 0, v7, v8);
      ZwClose(v6);
    }
  }
  return v2;
}
