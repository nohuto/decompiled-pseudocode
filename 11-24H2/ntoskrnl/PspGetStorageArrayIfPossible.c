/*
 * XREFs of PspGetStorageArrayIfPossible @ 0x1404150B0
 * Callers:
 *     PspStorageRemoveObject @ 0x14077C498 (PspStorageRemoveObject.c)
 *     PspGetStorageArray @ 0x1409DC168 (PspGetStorageArray.c)
 *     PspStorageGetObject @ 0x1409E74EC (PspStorageGetObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetStorageArrayIfPossible(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rax

  if ( a2 >= 0x20 )
  {
    v5 = a2 - 32;
    if ( v5 >= 0x100 )
    {
      return 3221225485LL;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 512);
      if ( v6 )
      {
        *a4 = v6;
        result = 0LL;
        *a3 = v5;
      }
      else
      {
        return 3221226021LL;
      }
    }
  }
  else
  {
    *a3 = a2;
    result = 0LL;
    *a4 = a1;
  }
  return result;
}
