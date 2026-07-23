/*
 * XREFs of DrvDbDispatchDriverFile @ 0x140AABA10
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x140821B90 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140822598 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14082271C (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbOpenDriverFileRegKey @ 0x140822DEC (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140823408 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x140823D40 (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetObjectList @ 0x140925254 (DrvDbGetObjectList.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, const wchar_t *a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int ObjectList; // eax
  int v16; // r8d
  int v18; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    goto LABEL_35;
  _mm_lfence();
  v5 = a5;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 392);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 0x10000000) != 0 )
    goto LABEL_17;
  if ( !v7 )
  {
    LODWORD(a1) = -1073740697;
    return (unsigned int)a1;
  }
  if ( a4 == 2 )
  {
    if ( !*(_BYTE *)(a5 + 4) )
      goto LABEL_15;
LABEL_14:
    LOBYTE(v7) = (v7 & 0x40000000) != 0;
    goto LABEL_16;
  }
  if ( a4 == 3 || a4 == 4 )
    goto LABEL_14;
  if ( a4 != 5 && a4 != 6 && a4 != 8 )
  {
    if ( a4 != 9 )
    {
      LOBYTE(v7) = 1;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
LABEL_15:
  v7 >>= 31;
LABEL_16:
  a1 = (_BYTE)v7 == 0 ? 0xC0000022 : 0;
  if ( !(_BYTE)v7 )
    return (unsigned int)a1;
LABEL_17:
  v8 = a4 - 1;
  if ( !v8 )
  {
    ObjectList = DrvDbValidateDriverInfFileName(a1, a2);
    goto LABEL_33;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    ObjectList = DrvDbOpenDriverFileRegKey(v6, (int)a2, *(_DWORD *)a5, *(_BYTE *)(a5 + 4), *(_QWORD *)(a5 + 8), a5 + 16);
    goto LABEL_33;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      ObjectList = DrvDbDeleteObjectRegKey(v6, 4u, (__int64)a2, 0);
      goto LABEL_33;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      ObjectList = DrvDbGetObjectList(
                     (__int64 *)v6,
                     4u,
                     *(_QWORD *)a5,
                     *(_QWORD *)(a5 + 8),
                     *(_WORD **)(a5 + 16),
                     *(_DWORD *)(a5 + 24),
                     *(unsigned int **)(a5 + 32),
                     0);
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      ObjectList = DrvDbGetDriverFileMappedPropertyKeys(
                     v6,
                     (int)a2,
                     *(_QWORD *)a5,
                     *(_QWORD *)(a5 + 24),
                     *(_DWORD *)(a5 + 32),
                     *(unsigned int **)(a5 + 40));
      goto LABEL_33;
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      ObjectList = DrvDbGetDriverFileMappedProperty(
                     v6,
                     (__int64)a2,
                     *(_QWORD *)a5,
                     *(_QWORD *)(a5 + 16),
                     *(_DWORD **)(a5 + 24),
                     *(void **)(a5 + 32),
                     *(_DWORD *)(a5 + 40),
                     *(_QWORD *)(a5 + 48));
      goto LABEL_33;
    }
    if ( v14 == 1 )
    {
      ObjectList = DrvDbSetDriverFileMappedProperty(
                     v6,
                     (int)a2,
                     *(_QWORD *)a5,
                     *(_QWORD *)(a5 + 16),
                     *(_DWORD *)(a5 + 24),
                     *(_QWORD *)(a5 + 32),
                     *(_DWORD *)(a5 + 40));
LABEL_33:
      LODWORD(a1) = ObjectList;
      return (unsigned int)a1;
    }
LABEL_35:
    LODWORD(a1) = -1073741811;
    return (unsigned int)a1;
  }
  v16 = *(_DWORD *)a5;
  v18 = 0;
  LODWORD(a1) = DrvDbOpenDriverFileRegKey(v6, (int)a2, v16, 1, a5 + 8, (__int64)&v18);
  if ( (int)a1 >= 0 )
    *(_BYTE *)(v5 + 16) = v18 == 1;
  return (unsigned int)a1;
}
