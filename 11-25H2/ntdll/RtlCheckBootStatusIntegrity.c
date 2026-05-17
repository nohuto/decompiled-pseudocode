/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18013F820
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlBootStatusItemInfo @ 0x18013F7E4 (RtlBootStatusItemInfo.c)
 *     NtReadFile @ 0x1801632E0 (NtReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, bool *a2)
{
  char v4; // r14
  int v5; // ebx
  __int64 Heap; // rsi
  __int64 v7; // r9
  __int64 v8; // rcx
  _BYTE *v9; // rax
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h] BYREF
  __int128 v13; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+B0h] [rbp+40h] BYREF
  int v15; // [rsp+B8h] [rbp+48h] BYREF

  v15 = 0;
  v11 = 0;
  v14 = 0;
  v12 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v13, &v14, 4, &v12, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(15, &v15, &v11);
    if ( v5 >= 0 )
    {
      if ( v14 < v15 + v11 || v14 > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v14);
        if ( Heap )
        {
          v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v13, Heap, v14, &v12, 0LL);
          if ( v5 >= 0 )
          {
            v8 = v14;
            if ( *((_QWORD *)&v13 + 1) == v14 )
            {
              if ( v14 )
              {
                v9 = (_BYTE *)Heap;
                do
                {
                  v4 += *v9++;
                  --v8;
                }
                while ( v8 );
              }
              *a2 = v4 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v7);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v5;
}
