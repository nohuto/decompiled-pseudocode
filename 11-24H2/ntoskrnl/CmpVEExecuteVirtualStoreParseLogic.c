/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 *     CmpBlockHiveWrites @ 0x140A1FD70 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A4040C (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int Length; // edx
  wchar_t *v12; // rcx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  unsigned int v16; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v18; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+B0h] [rbp+40h] BYREF

  v18 = 0LL;
  v16 = 0;
  v21 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, &v21) )
    goto LABEL_19;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 < 0 )
    goto LABEL_14;
  v10 = a2->Length + DestinationString.Length + 2;
  if ( v10 > 0xFFFF )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  v19.MaximumLength = a2->Length + DestinationString.Length + 2;
  v19.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned __int16)v10, 0x624E4D43u);
  if ( !v19.Buffer )
  {
    v9 = -1073741670;
    goto LABEL_14;
  }
  RtlUnicodeStringCopy(&v19, &DestinationString);
  Length = v19.Length;
  if ( (unsigned int)v19.Length + 2 <= v19.MaximumLength )
  {
    v19.Length += 2;
    v19.Buffer[(unsigned __int64)Length >> 1] = 92;
  }
  RtlUnicodeStringCat(&v19, a2);
  if ( (*a3 & 1) != 0 && v21 )
  {
    v9 = CmpBlockHiveWrites(0LL, 16, &v17);
    if ( v9 >= 0 )
    {
      PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v19, 0LL, 16, &v16, &v18);
      CmpUnblockHiveWrites(0LL, 16, v17);
      if ( PathByName )
      {
        Buffer = a4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        *a4 = v19;
        RtlInitUnicodeString(&v19, 0LL);
        v9 = 260;
        goto LABEL_14;
      }
LABEL_19:
      v9 = -1073741199;
      goto LABEL_14;
    }
    v6 = v17;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) <= 0x800000 )
      goto LABEL_19;
    v12 = a4->Buffer;
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    *a4 = v19;
    RtlInitUnicodeString(&v19, 0LL);
    v9 = 260;
  }
  if ( v6 )
    CmpUnblockHiveWrites(0LL, 16, v6);
LABEL_14:
  if ( v19.Buffer )
    ExFreePoolWithTag(v19.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
