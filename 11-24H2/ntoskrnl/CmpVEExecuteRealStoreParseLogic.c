/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpGetNextHive @ 0x14084051C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __m128i *a2, _DWORD *a3, UNICODE_STRING *a4, int *a5)
{
  volatile signed __int32 *v6; // rsi
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  volatile signed __int32 *v10; // r15
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  char PathByName; // al
  char v16; // r15
  __int64 CellFlat; // rax
  __int64 *v18; // rbx
  int v19; // ebx
  wchar_t *Buffer; // rcx
  volatile signed __int32 *j; // rcx
  char v23[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int BugCheckParameter4[3]; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  DestinationString = 0LL;
  v23[0] = 0;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  HvpGetCellContextInitialize(&BugCheckParameter4[1]);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( CmpIsKeyDeleted(a1, 0LL) )
  {
    v16 = 0;
  }
  else
  {
    v10 = *(volatile signed __int32 **)(a1 + 32);
    for ( i = 0LL; ; i = v13 )
    {
      NextHive = CmpGetNextHive(i);
      v13 = (volatile signed __int32 *)NextHive;
      if ( !NextHive )
        break;
      if ( v10 == (volatile signed __int32 *)NextHive || !v10 )
      {
        CmpReferenceHive((__int64)NextHive);
        HvLockHiveFlusherExclusive(v14);
        if ( v10 == v13 )
        {
          CmpDereferenceHive(v13);
          goto LABEL_9;
        }
      }
    }
    if ( v10 )
    {
      v19 = -1073741772;
      goto LABEL_23;
    }
LABEL_9:
    v6 = *(volatile signed __int32 **)(a1 + 32);
    PathByName = CmpFindPathByNameEx(a1, a2, 0LL, 0, BugCheckParameter4, &BugCheckParameter3);
    v8 = BugCheckParameter3;
    v16 = PathByName;
    if ( PathByName )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      v7 = CellFlat;
      if ( !CellFlat )
      {
        v19 = -1073741670;
        goto LABEL_23;
      }
      if ( (*(_DWORD *)(CellFlat + 52) & 0x200000) != 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v8, (__int64)&BugCheckParameter4[1]);
      else
        HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
    }
    v18 = *(__int64 **)(a1 + 32);
    if ( v18 )
    {
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(a1 + 32));
    }
    else
    {
      for ( j = 0LL; ; j = (volatile signed __int32 *)v18 )
      {
        v18 = CmpGetNextHive(j);
        HvUnlockHiveFlusherExclusive(v18);
        CmpDereferenceHive((volatile signed __int32 *)v18);
        if ( !v18 )
          break;
      }
    }
    CmpDereferenceHive((volatile signed __int32 *)v18);
  }
  v6 = 0LL;
  v7 = 0LL;
  v19 = CmRealKCBToVirtualPath(a1, (UNICODE_STRING *)a2, a5, &DestinationString);
  if ( v19 >= 0 )
  {
    *a3 |= 8u;
    if ( CmpVirtualBranchIsReplicated(0LL, &DestinationString, v23) || (*a3 & 1) != 0 && !v16 && v23[0] )
    {
      Buffer = a4->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v19 = 260;
    }
    else
    {
LABEL_22:
      v19 = -1073741199;
    }
  }
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, (__int64)&BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
  }
  if ( v6 )
  {
    HvUnlockHiveFlusherExclusive(v6);
    CmpDereferenceHive(v6);
  }
  return (unsigned int)v19;
}
