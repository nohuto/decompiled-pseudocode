/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x140926230
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x140821B90 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822954 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x140823D40 (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetObjectList @ 0x140925254 (DrvDbGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1409275E4 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, const wchar_t *a2, int a3, int a4, int *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r11
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int ObjectList; // eax
  int v17; // r8d
  int v18; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    goto LABEL_15;
  _mm_lfence();
  v5 = (__int64)a5;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 392);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 0x10000000) != 0 )
    goto LABEL_3;
  if ( !v7 )
  {
    LODWORD(a1) = -1073740697;
    return (unsigned int)a1;
  }
  if ( a4 == 2 )
  {
    if ( !*((_BYTE *)a5 + 4) )
      goto LABEL_37;
LABEL_36:
    LOBYTE(v7) = (v7 & 0x40000000) != 0;
    goto LABEL_16;
  }
  if ( a4 == 3 || a4 == 4 )
    goto LABEL_36;
  if ( a4 != 5 && a4 != 6 && a4 != 8 )
  {
    if ( a4 != 9 )
    {
      LOBYTE(v7) = 1;
      goto LABEL_16;
    }
    goto LABEL_36;
  }
LABEL_37:
  v7 >>= 31;
LABEL_16:
  a1 = (_BYTE)v7 == 0 ? 0xC0000022 : 0;
  if ( !(_BYTE)v7 )
    return (unsigned int)a1;
LABEL_3:
  v8 = a4 - 1;
  if ( !v8 )
  {
    ObjectList = DrvDbValidateDriverInfFileName(a1, a2);
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    ObjectList = DrvDbOpenObjectRegKey(
                   v6,
                   0,
                   2,
                   (_DWORD)a2,
                   *a5,
                   *((_BYTE *)a5 + 4),
                   *((_QWORD *)a5 + 1),
                   (__int64)(a5 + 4),
                   0LL);
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      ObjectList = DrvDbDeleteObjectRegKey(v6, 2u, (__int64)a2, 0);
      goto LABEL_11;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      ObjectList = DrvDbGetObjectList(
                     (__int64 *)v6,
                     2u,
                     *(_QWORD *)a5,
                     *((_QWORD *)a5 + 1),
                     *((_WORD **)a5 + 2),
                     a5[6],
                     *((unsigned int **)a5 + 4),
                     0);
      goto LABEL_11;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      ObjectList = DrvDbGetDriverPackageMappedPropertyKeys(
                     v6,
                     (__int64)a2,
                     *(void **)a5,
                     *((_QWORD *)a5 + 3),
                     a5[8],
                     *((unsigned int **)a5 + 5));
      goto LABEL_11;
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      ObjectList = DrvDbGetDriverPackageMappedProperty(
                     v6,
                     (int)a2,
                     *(_QWORD *)a5,
                     *((_QWORD *)a5 + 2),
                     *((_QWORD *)a5 + 3),
                     *((NTSTRSAFE_PWSTR *)a5 + 4),
                     a5[10],
                     *((_QWORD *)a5 + 6));
LABEL_11:
      LODWORD(a1) = ObjectList;
      return (unsigned int)a1;
    }
    if ( v14 == 1 )
    {
      ObjectList = DrvDbSetDriverPackageMappedProperty(
                     v6,
                     (__int64)a2,
                     *(void **)a5,
                     *((_QWORD *)a5 + 2),
                     a5[6],
                     *((const wchar_t **)a5 + 4),
                     a5[10]);
      goto LABEL_11;
    }
LABEL_15:
    LODWORD(a1) = -1073741811;
    return (unsigned int)a1;
  }
  v17 = *a5;
  v18 = 0;
  LODWORD(a1) = DrvDbOpenDriverPackageRegKey(v6, (_DWORD)a2, v17, 1, (__int64)(a5 + 2), (__int64)&v18);
  if ( (int)a1 >= 0 )
    *(_BYTE *)(v5 + 16) = v18 == 1;
  return (unsigned int)a1;
}
