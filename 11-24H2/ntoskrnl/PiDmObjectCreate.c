/*
 * XREFs of PiDmObjectCreate @ 0x140ABF218
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     PiDmGetCachedKeyIndex @ 0x1408B7F40 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     _PnpValidateObjectName @ 0x1408E1AD4 (_PnpValidateObjectName.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 *     PiDmGetCacheKeys @ 0x1409E639C (PiDmGetCacheKeys.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140A41A9C (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmCacheDataEncode @ 0x140A483AC (PiDmCacheDataEncode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmObjectCreate(int a1, _WORD *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v6; // r13
  __int64 Pool2; // rax
  __int64 v8; // rdi
  signed int PWSTR; // ebx
  WCHAR **v10; // rsi
  __int64 v11; // rcx
  WCHAR *v12; // rdx
  WCHAR *v13; // r8
  wchar_t *v14; // r8
  wchar_t *v15; // rax
  __int64 v16; // rdx
  wchar_t *v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  DEVPROPKEY **v21; // r12
  __int64 *v22; // rsi
  unsigned int CachedKeyIndex; // eax
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v26; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v26 = 0LL;
  v25 = 0;
  LOBYTE(v29) = 0;
  PiDmGetCacheKeys(a1, &v26, &v25);
  v6 = v25;
  Pool2 = ExAllocatePool2(0x100uLL, 24 * v25 + 112, 0x5A706E50u);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v10 = (WCHAR **)(Pool2 + 16);
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_DWORD *)(Pool2 + 28) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)(Pool2 + 16));
  if ( PWSTR < 0 )
    goto LABEL_39;
  v12 = *v10;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v11, v12, 0);
    if ( PWSTR >= 0 )
    {
      v13 = *v10;
      PWSTR = 0;
      String = 0LL;
      v14 = v13 + 4;
      if ( !v14 )
        goto LABEL_18;
      v15 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      goto LABEL_16;
    }
LABEL_39:
    PiDmObjectRelease((unsigned int *)v8);
    return (unsigned int)PWSTR;
  }
  PWSTR = PnpValidateObjectName(v11, (__int64)v12, a1);
  if ( PWSTR < 0 )
    goto LABEL_39;
  v14 = *v10;
  PWSTR = 0;
  String = 0LL;
  if ( !v14 )
    goto LABEL_18;
  v17 = v14;
  v16 = 0x7FFFLL;
  do
  {
    if ( !*v17 )
      break;
    ++v17;
    --v16;
  }
  while ( v16 );
LABEL_16:
  PWSTR = v16 == 0 ? 0xC000000D : 0;
  if ( v16 )
  {
    String.Buffer = v14;
    String.Length = 2 * (0x7FFF - v16);
    String.MaximumLength = String.Length + 2;
  }
LABEL_18:
  if ( PWSTR < 0 )
    goto LABEL_39;
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)(v8 + 24));
  if ( a1 == 1 )
  {
    v18 = (_QWORD *)(v8 + 88);
    goto LABEL_27;
  }
  if ( a1 != 2 && a1 != 4 )
  {
    if ( a1 == 5 )
    {
      *(_QWORD *)(v8 + 48) = v8 + 40;
      *(_QWORD *)(v8 + 40) = v8 + 40;
      v18 = (_QWORD *)(v8 + 64);
      goto LABEL_27;
    }
    if ( a1 != 6 )
      goto LABEL_28;
  }
  v18 = (_QWORD *)(v8 + 40);
LABEL_27:
  *v18 = v18;
  v18[1] = v18;
LABEL_28:
  if ( (_DWORD)v6 )
  {
    v19 = (_DWORD *)(v8 + 112);
    v20 = v6;
    do
    {
      *v19 = 1;
      v19 += 6;
      --v20;
    }
    while ( v20 );
  }
  v21 = v26;
  v22 = (__int64 *)&off_140001B08;
  do
  {
    if ( a1 == *((_DWORD *)v22 - 2) )
    {
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v6, *v22);
      if ( CachedKeyIndex >= (unsigned int)v6 )
      {
        PWSTR = -1073741595;
        goto LABEL_39;
      }
      PWSTR = PiDmCacheDataEncode(
                17,
                &v29,
                1u,
                (int)v21[3 * CachedKeyIndex + 1],
                HIDWORD(v21[3 * CachedKeyIndex + 1]),
                v8 + 112 + 24LL * CachedKeyIndex);
      if ( PWSTR < 0 )
        goto LABEL_39;
    }
    ++v3;
    v22 += 7;
  }
  while ( v3 < 3 );
  if ( PWSTR < 0 )
    goto LABEL_39;
  *a3 = v8;
  return (unsigned int)PWSTR;
}
