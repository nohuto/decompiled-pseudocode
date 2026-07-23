/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x140925E40
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x140821B90 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140822838 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140823538 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x140823D40 (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetObjectList @ 0x140925254 (DrvDbGetObjectList.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14092603C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409261E4 (DrvDbOpenDriverInfFileRegKey.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, const wchar_t *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
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
  int v17; // r8d
  int v18; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    goto LABEL_14;
  _mm_lfence();
  v5 = a5;
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
    goto LABEL_15;
  }
  if ( a4 == 3 || a4 == 4 )
    goto LABEL_36;
  if ( a4 != 5 && a4 != 6 && a4 != 8 )
  {
    if ( a4 != 9 )
    {
      LOBYTE(v7) = 1;
      goto LABEL_15;
    }
    goto LABEL_36;
  }
LABEL_37:
  v7 >>= 31;
LABEL_15:
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
    ObjectList = DrvDbOpenDriverInfFileRegKey(
                   v6,
                   (_DWORD)a2,
                   *(_DWORD *)a5,
                   *((unsigned __int8 *)a5 + 4),
                   a5[1],
                   (__int64)(a5 + 2));
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      ObjectList = DrvDbDeleteObjectRegKey(v6, 3u, (__int64)a2, 0);
      goto LABEL_11;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      ObjectList = DrvDbGetObjectList(
                     (__int64 *)v6,
                     3u,
                     *a5,
                     a5[1],
                     (_WORD *)a5[2],
                     *((_DWORD *)a5 + 6),
                     (unsigned int *)a5[4],
                     0);
      goto LABEL_11;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      ObjectList = DrvDbGetDriverInfFileMappedPropertyKeys(
                     v6,
                     (int)a2,
                     *a5,
                     a5[3],
                     *((_DWORD *)a5 + 8),
                     (unsigned int *)a5[5]);
      goto LABEL_11;
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      ObjectList = DrvDbGetDriverInfFileMappedProperty(v6, a2, *a5, a5[2], a5[3], a5[4], *((_DWORD *)a5 + 10), a5[6]);
LABEL_11:
      LODWORD(a1) = ObjectList;
      return (unsigned int)a1;
    }
    if ( v14 == 1 )
    {
      ObjectList = DrvDbSetDriverInfFileMappedProperty(
                     v6,
                     (int)a2,
                     *a5,
                     a5[2],
                     *((_DWORD *)a5 + 6),
                     a5[4],
                     *((_DWORD *)a5 + 10));
      goto LABEL_11;
    }
LABEL_14:
    LODWORD(a1) = -1073741811;
    return (unsigned int)a1;
  }
  v17 = *(_DWORD *)a5;
  v18 = 0;
  LODWORD(a1) = DrvDbOpenDriverInfFileRegKey(v6, (_DWORD)a2, v17, 1, (__int64)(a5 + 1), (__int64)&v18);
  if ( (int)a1 >= 0 )
    *((_BYTE *)v5 + 16) = v18 == 1;
  return (unsigned int)a1;
}
