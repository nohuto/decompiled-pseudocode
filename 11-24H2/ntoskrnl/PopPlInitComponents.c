/*
 * XREFs of PopPlInitComponents @ 0x140764C30
 * Callers:
 *     PopPlInitDevice @ 0x140764D64 (PopPlInitDevice.c)
 * Callees:
 *     PopPlInitComponent @ 0x140764B70 (PopPlInitComponent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitComponents(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  _QWORD *Pool2; // rsi
  unsigned __int64 v8; // rdi
  __int128 *v11; // r15
  int inited; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 i; // rbp
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0LL;
  Pool2 = 0LL;
  v8 = 0LL;
  v11 = a2;
  if ( a3 )
  {
    if ( (unsigned __int64)a2 + 24 * a3 <= a5 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 8 * a3, 0x6C506F50u);
      if ( Pool2 )
      {
        inited = 0;
        v14 = 0LL;
        if ( a3 )
        {
          while ( 1 )
          {
            inited = PopPlInitComponent(a1, v11, a4, a5, &v17);
            if ( inited < 0 )
              break;
            ++v14;
            Pool2[v8] = v17;
            v11 = (__int128 *)((char *)v11 + 24);
            ++v8;
            if ( v14 >= a3 )
              goto LABEL_14;
          }
          for ( i = 0LL; i < v8; ++i )
            ExFreePoolWithTag((PVOID)Pool2[i], 0x6C506F50u);
          ExFreePoolWithTag(Pool2, 0x6C506F50u);
          Pool2 = 0LL;
          v8 = 0LL;
        }
      }
      else
      {
        inited = -1073741670;
      }
    }
    else
    {
      inited = -1073741306;
    }
  }
  else
  {
    inited = 0;
  }
LABEL_14:
  *a7 = Pool2;
  *a6 = v8;
  return (unsigned int)inited;
}
