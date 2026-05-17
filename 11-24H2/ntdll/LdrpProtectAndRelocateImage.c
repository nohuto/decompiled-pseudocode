/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800E502C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpRelocateImage @ 0x1800E4EBC (LdrpRelocateImage.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015EF48 (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpSetProtection @ 0x1800E5320 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800E5420 (LdrRelocateImageWithBias.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(__int64 a1)
{
  bool v2; // di
  int v3; // eax
  __int64 v4; // rdx
  int v5; // ebx
  int v7; // edx
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v2 = 0;
  v8 = a1;
  v3 = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v8, 16LL, 0LL);
  if ( v3 >= 0 )
  {
    if ( (v9 & 1) != 0 )
      v2 = (v9 & 0x800000) != 0;
  }
  else
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrfind.c",
      1979,
      (__int64)"LdrpProtectAndRelocateImage",
      0,
      "Querying large page info failed with status 0x%08lx\n",
      v3);
  }
  if ( !v2 )
  {
    v5 = LdrpSetProtection(a1, 0LL);
    if ( v5 < 0 )
    {
      v7 = 1989;
LABEL_12:
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrfind.c",
        v7,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        a1);
      goto LABEL_7;
    }
  }
  v5 = LdrRelocateImageWithBias(a1);
  if ( v5 >= 0 && !v2 )
  {
    LOBYTE(v4) = 1;
    v5 = LdrpSetProtection(a1, v4);
    if ( v5 < 0 )
    {
      v7 = 2013;
      goto LABEL_12;
    }
  }
LABEL_7:
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrfind.c",
    2053,
    (__int64)"LdrpProtectAndRelocateImage",
    4,
    "Status: 0x%08lx\n",
    v5);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrfind.c", 2054, (__int64)"LdrpProtectAndRelocateImage", 6, "%x\n", v5);
  return (unsigned int)v5;
}
