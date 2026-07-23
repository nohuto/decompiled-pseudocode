/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x14046E920
 * Callers:
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  int v10; // r8d
  unsigned __int64 v11; // rbx
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  __int128 v15; // [rsp+0h] [rbp-18h]

  v4 = a3;
  v5 = *a2;
  v7 = v5 >> 20;
  do
  {
    v8 = v4 + (unsigned __int16)(v5 >> 1);
    v9 = v4 + (v5 >> 1);
    v15 = *(_OWORD *)a2;
    if ( v8 > 0xFFFF )
      v9 = -1;
    v10 = v8 - 0xFFFF;
    if ( v8 <= 0xFFFF )
      v10 = 0;
    v11 = *a2 & 0xFFFFFFFFFFFE0001uLL | (2LL * v9);
    v12 = *(_OWORD *)a2;
    v13 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v15 + 1), v11, (signed __int64 *)&v12);
    *(_OWORD *)a2 = v12;
    if ( v13 )
    {
      LODWORD(v4) = v10;
      return (unsigned int)v4;
    }
    v5 = *a2;
  }
  while ( *a2 >> 20 == v7 && (v5 & 1) != 0 );
  a2[1] = *((_QWORD *)&v15 + 1);
  *a2 = v11;
  return (unsigned int)v4;
}
