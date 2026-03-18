/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x14083F9D0
 * Callers:
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140494A44 (CmpValueEnumStackEntryInitialize.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpValueEnumStackAdvance @ 0x14083F754 (CmpValueEnumStackAdvance.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     CmpQueryKeyValueData @ 0x140879AE0 (CmpQueryKeyValueData.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpValueEnumStackCleanup @ 0x140973C88 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14097648C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(__int64 a1, unsigned int a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v7; // r14
  char v9; // r12
  char *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rsi
  int started; // ebx
  __int16 v17; // cx
  char v18; // dl
  int *v19; // r8
  signed __int64 v20; // r9
  int *v21; // rax
  __int64 v22; // rdi
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v24; // rcx
  __int64 CellFlat; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  ULONG_PTR v29; // rcx
  __int64 CellPaged; // rax
  __int64 v31; // r14
  int KeyValueData; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int i; // edi
  bool v37; // cc
  __int64 v38; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v39; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v40; // [rsp+50h] [rbp-99h] BYREF
  int v41[4]; // [rsp+58h] [rbp-91h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-81h]
  __int64 v43; // [rsp+78h] [rbp-71h]
  size_t Size; // [rsp+80h] [rbp-69h]
  int v45; // [rsp+90h] [rbp-59h] BYREF
  _BYTE v46[2]; // [rsp+94h] [rbp-55h] BYREF
  __int16 v47; // [rsp+96h] [rbp-53h]
  char v48; // [rsp+A0h] [rbp-49h] BYREF

  v43 = a6;
  v7 = a2;
  Size = a4;
  v40 = 0LL;
  *(_OWORD *)v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  HIWORD(v41[0]) = -1;
  *(_OWORD *)Privileges = 0LL;
  v9 = 0;
  memset_0(v46, 0, 0x54uLL);
  v45 = -1;
  v10 = &v48;
  do
  {
    CmpValueEnumStackEntryInitialize(v10);
    v10 = (char *)(v11 + 32);
  }
  while ( v12 != v13 );
  HvpGetCellContextInitialize(&v40);
  v14 = 0LL;
  v15 = 0LL;
  HvpGetCellContextInitialize(&v38);
  HvpGetCellContextInitialize(&v39);
  started = CmpStartKcbStackForTopLayerKcb(v41, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(v41);
    v9 = 1;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_28;
    }
    v17 = HIWORD(v41[0]);
    v18 = 0;
    if ( SHIWORD(v41[0]) <= 0 )
      goto LABEL_13;
    v19 = &v41[2 * SHIWORD(v41[0]) + 2];
    v20 = (char *)Privileges[1] - (char *)&v41[2];
    do
    {
      if ( (unsigned __int16)v17 >= 2u )
        v21 = (int *)((char *)v19 + v20 - 16);
      else
        v21 = v19;
      v14 = *(_QWORD *)v21;
      if ( *(_DWORD *)(*(_QWORD *)v21 + 40LL) != -1 )
        v18 = 1;
      --v17;
      v19 -= 2;
    }
    while ( v17 > 0 );
    if ( v18 )
    {
      started = CmpValueEnumStackStartFromKcbStack(&v45, v41, a1, v20);
      if ( started < 0 )
        goto LABEL_28;
      started = CmpValueEnumStackAdvance((__int64)&v45);
      if ( started < 0 )
        goto LABEL_28;
      for ( i = 0; i < (unsigned int)v7; ++i )
      {
        started = CmpValueEnumStackAdvance((__int64)&v45);
        if ( started < 0 )
          goto LABEL_28;
      }
      v27 = v45;
      v37 = v47 < 2;
      _mm_lfence();
      if ( v37 )
        v22 = *(_QWORD *)&v41[2 * v47 + 2];
      else
        v22 = *((_QWORD *)Privileges[1] + v47 - 2);
    }
    else
    {
LABEL_13:
      v14 = *(_QWORD *)&v41[2];
      v22 = *(_QWORD *)&v41[2];
      KeyNodeForKcb = CmpGetKeyNodeForKcb(*(_QWORD *)&v41[2], &v38, 0LL);
      v15 = KeyNodeForKcb;
      if ( (*(_BYTE *)(KeyNodeForKcb + 2) & 0x40) != 0 )
      {
        started = -1073741816;
        goto LABEL_28;
      }
      if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
      {
        started = -2147483622;
        goto LABEL_28;
      }
      v24 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v24, *(unsigned int *)(KeyNodeForKcb + 40));
      else
        CellFlat = HvpGetCellPaged(v24);
      v26 = *(_QWORD *)(v14 + 32);
      v27 = *(_DWORD *)(CellFlat + 4 * v7);
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v26, &v39);
      else
        HvpReleaseCellPaged(v26, &v39);
      v28 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v28, &v38);
      else
        HvpReleaseCellPaged(v28, &v38);
    }
    v29 = *(_QWORD *)(v22 + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v29, v27);
    else
      CellPaged = HvpGetCellPaged(v29);
    v31 = CellPaged;
    KeyValueData = CmpQueryKeyValueData(v22, v27, CellPaged, a3, Size, a5, v43);
    started = 0;
    v15 = 0LL;
    if ( KeyValueData < 0 )
      started = KeyValueData;
    if ( v31 )
    {
      v33 = *(_QWORD *)(v22 + 32);
      if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v33, &v40);
      else
        HvpReleaseCellPaged(v33, &v40);
    }
  }
LABEL_28:
  CmpValueEnumStackCleanup(&v45);
  if ( v15 )
  {
    v34 = *(_QWORD *)(v14 + 32);
    if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v34, &v38);
    else
      HvpReleaseCellPaged(v34, &v38);
  }
  if ( v9 )
    CmpUnlockKcbStack(v41);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
