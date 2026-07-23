/*
 * XREFs of DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140822838
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140925E40 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14082210C (DrvDbGetCompositeMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x140822D0C (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409261E4 (DrvDbOpenDriverInfFileRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedPropertyKeys(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v8; // rsi
  int v9; // r13d
  unsigned int v10; // edi
  int v11; // ecx
  int CompositeMappedPropertyKeys; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  HANDLE Handle[2]; // [rsp+40h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  *a6 = 0;
  v8 = a4;
  v9 = a1;
  v10 = a5;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (__int64)off_140E0A550, 1u, a4, a5, a6);
  if ( CompositeMappedPropertyKeys < 0 )
    return (unsigned int)CompositeMappedPropertyKeys;
  v15 = *a6;
  if ( (_DWORD)v15 )
  {
    if ( v14 )
    {
      v11 = 5 * v15;
      v8 = v14 + 20 * v15;
    }
    if ( (unsigned int)v15 <= a5 )
      v10 = a5 - v15;
    else
      v10 = 0;
  }
  if ( a3 )
    goto LABEL_11;
  CompositeMappedPropertyKeys = DrvDbOpenDriverInfFileRegKey(v9, a2, v13, 0, (__int64)Handle, 0LL);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    LODWORD(a3) = Handle[0];
LABEL_11:
    CompositeMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                    v11,
                                    a3,
                                    (unsigned int)&off_1400021A0,
                                    4,
                                    v8,
                                    v10,
                                    (__int64)a6);
    if ( CompositeMappedPropertyKeys >= 0 && a5 < *a6 )
      CompositeMappedPropertyKeys = -1073741789;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)CompositeMappedPropertyKeys;
}
