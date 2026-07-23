/*
 * XREFs of RtlReserveChunkLZNT1 @ 0x140787E80
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlDescribeChunkLZNT1 @ 0x140787DA0 (RtlDescribeChunkLZNT1.c)
 */

__int64 __fastcall RtlReserveChunkLZNT1(__int16 **a1, unsigned __int64 a2, __int16 **a3, unsigned int a4)
{
  __int16 *v4; // r14
  __int64 v7; // rsi
  int v9; // eax
  __int16 *v10; // rbx
  unsigned int v11; // r9d
  int v12; // edx
  __int16 *v13; // rcx
  unsigned int v14; // edx
  __int16 *v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v17[0] = 0LL;
  v18 = 0;
  v7 = a4;
  v16 = v4;
  v9 = RtlDescribeChunkLZNT1(&v16, a2, (__int64)v17, &v18);
  v10 = v4;
  while ( 1 )
  {
    v11 = v9;
    if ( v9 < 0 )
      break;
    if ( v10 == v4 )
      v10 = v16;
    v9 = RtlDescribeChunkLZNT1(&v16, a2, (__int64)v17, &v18);
  }
  if ( v9 == -2147483622 )
  {
    v12 = (_DWORD)v16 - (_DWORD)v10;
    *a3 = v4;
    v13 = *a1;
    v14 = v12 + 2;
    v11 = -1073741789;
    if ( (unsigned __int64)*a1 <= a2 - v7 )
    {
      if ( (_DWORD)v7 == 4096 )
      {
        LODWORD(v7) = 4098;
        if ( (unsigned __int64)v13 + v14 + 4098 <= a2 )
        {
          memmove(v13 + 2049, v10, v14);
          **a1 = 0x3FFF;
          ++*a3;
LABEL_16:
          v11 = 0;
        }
      }
      else if ( (_DWORD)v7 )
      {
        if ( (unsigned __int64)v13 + v7 + v14 <= a2 )
        {
          memmove((char *)v13 + v7, v10, v14);
          goto LABEL_16;
        }
      }
      else
      {
        LODWORD(v7) = 6;
        if ( (unsigned __int64)v13 + v14 + 6 <= a2 )
        {
          memmove(v13 + 3, v10, v14);
          **a1 = -20477;
          (*a1)[1] = 2;
          (*a1)[2] = 4092;
          goto LABEL_16;
        }
      }
      *a1 = (__int16 *)((char *)*a1 + (unsigned int)v7);
    }
  }
  return v11;
}
