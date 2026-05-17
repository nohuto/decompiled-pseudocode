/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18013E0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlBootStatusItemInfo @ 0x18013E0B4 (RtlBootStatusItemInfo.c)
 *     NtReadFile @ 0x180161D50 (NtReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, bool *a2)
{
  char v4; // r14
  int v5; // ebx
  unsigned __int64 Heap; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  v13 = 0;
  v11 = 0LL;
  v4 = 0;
  v12 = 0LL;
  v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v12, &v13, 4, &v11, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(15, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( v13 < v14 + v10 || v13 > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        if ( Heap )
        {
          v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v12, Heap, v13, &v11, 0LL);
          if ( v5 >= 0 )
          {
            v7 = v13;
            if ( *((_QWORD *)&v12 + 1) == v13 )
            {
              if ( v13 )
              {
                v8 = (_BYTE *)Heap;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *a2 = v4 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
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
