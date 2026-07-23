/*
 * XREFs of CcGetPrivateVolumeCacheMapFromFileObject @ 0x14045DA00
 * Callers:
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CcGetPrivateVolumeCacheMapFromFileObject(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *i; // rax
  __int64 *v9; // rdx
  __int64 *j; // rax

  if ( CcEnablePerVolumeLazyWriter )
  {
    v3 = a1[5];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        return *(__int64 **)(v4 + 600);
    }
    v6 = a1[2];
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = a1[1];
    for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
    {
      if ( *(i - 1) == v7 )
      {
        v9 = i + 24;
        for ( j = (__int64 *)i[24]; j != v9; j = (__int64 *)*j )
        {
          if ( *(j - 70) == a2 )
            return j - 74;
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
