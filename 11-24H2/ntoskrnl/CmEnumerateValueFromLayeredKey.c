/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1408E3094
 * Callers:
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryInitialize @ 0x14048D244 (CmpValueEnumStackEntryInitialize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpQueryKeyValueData @ 0x14087A180 (CmpQueryKeyValueData.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpValueEnumStackAdvance @ 0x1408E2E18 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14090804C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackCleanup @ 0x140908A14 (CmpValueEnumStackCleanup.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        size_t a4,
        unsigned int a5,
        __int64 a6)
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
  ULONG_PTR v25; // rdx
  __int64 CellFlat; // rax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  ULONG_PTR v30; // rcx
  __int64 CellPaged; // rax
  __int64 v32; // r14
  int KeyValueData; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int i; // edi
  bool v38; // cc
  __int64 v39; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h] BYREF
  int v42[4]; // [rsp+58h] [rbp-91h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-81h]
  __int64 v44; // [rsp+78h] [rbp-71h]
  size_t Size; // [rsp+80h] [rbp-69h]
  int v46; // [rsp+90h] [rbp-59h] BYREF
  _BYTE v47[2]; // [rsp+94h] [rbp-55h] BYREF
  __int16 v48; // [rsp+96h] [rbp-53h]
  char v49; // [rsp+A0h] [rbp-49h] BYREF

  v44 = a6;
  v7 = a2;
  Size = a4;
  v41 = 0LL;
  *(_OWORD *)v42 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  HIWORD(v42[0]) = -1;
  *(_OWORD *)Privileges = 0LL;
  v9 = 0;
  memset_0(v47, 0, 0x54uLL);
  v46 = -1;
  v10 = &v49;
  do
  {
    CmpValueEnumStackEntryInitialize(v10);
    v10 = (char *)(v11 + 32);
  }
  while ( v12 != v13 );
  HvpGetCellContextInitialize(&v41);
  v14 = 0LL;
  v15 = 0LL;
  HvpGetCellContextInitialize(&v39);
  HvpGetCellContextInitialize(&v40);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v42, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(v42);
    v9 = 1;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_28;
    }
    v17 = HIWORD(v42[0]);
    v18 = 0;
    if ( SHIWORD(v42[0]) <= 0 )
      goto LABEL_13;
    v19 = &v42[2 * SHIWORD(v42[0]) + 2];
    v20 = (char *)Privileges[1] - (char *)&v42[2];
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
      started = CmpValueEnumStackStartFromKcbStack(&v46, v42, a1, v20);
      if ( started < 0 )
        goto LABEL_28;
      started = CmpValueEnumStackAdvance((__int64)&v46);
      if ( started < 0 )
        goto LABEL_28;
      for ( i = 0; i < (unsigned int)v7; ++i )
      {
        started = CmpValueEnumStackAdvance((__int64)&v46);
        if ( started < 0 )
          goto LABEL_28;
      }
      v28 = v46;
      v38 = v48 < 2;
      _mm_lfence();
      if ( v38 )
        v22 = *(_QWORD *)&v42[2 * v48 + 2];
      else
        v22 = *((_QWORD *)Privileges[1] + v48 - 2);
    }
    else
    {
LABEL_13:
      v14 = *(_QWORD *)&v42[2];
      v22 = *(_QWORD *)&v42[2];
      KeyNodeForKcb = CmpGetKeyNodeForKcb(*(__int64 *)&v42[2], (unsigned int *)&v39, 0);
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
      v25 = *(unsigned int *)(KeyNodeForKcb + 40);
      if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v24, v25, &v40);
      else
        CellFlat = HvpGetCellPaged(v24, v25, &v40);
      v27 = *(_QWORD *)(v14 + 32);
      v28 = *(_DWORD *)(CellFlat + 4 * v7);
      if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v27, (__int64)&v40);
      else
        HvpReleaseCellPaged(v27, (unsigned int *)&v40);
      v29 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v29, (__int64)&v39);
      else
        HvpReleaseCellPaged(v29, (unsigned int *)&v39);
    }
    v30 = *(_QWORD *)(v22 + 32);
    if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v30, v28, &v41);
    else
      CellPaged = HvpGetCellPaged(v30, v28, &v41);
    v32 = CellPaged;
    KeyValueData = CmpQueryKeyValueData(v22, v28, CellPaged, a3, (_DWORD *)Size, a5, (unsigned int *)v44);
    started = 0;
    v15 = 0LL;
    if ( KeyValueData < 0 )
      started = KeyValueData;
    if ( v32 )
    {
      v34 = *(_QWORD *)(v22 + 32);
      if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v34, (__int64)&v41);
      else
        HvpReleaseCellPaged(v34, (unsigned int *)&v41);
    }
  }
LABEL_28:
  CmpValueEnumStackCleanup(&v46);
  if ( v15 )
  {
    v35 = *(_QWORD *)(v14 + 32);
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v35, (__int64)&v39);
    else
      HvpReleaseCellPaged(v35, (unsigned int *)&v39);
  }
  if ( v9 )
    CmpUnlockKcbStack((__int64)v42);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
