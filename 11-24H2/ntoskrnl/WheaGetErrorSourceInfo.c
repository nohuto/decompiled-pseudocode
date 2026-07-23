/*
 * XREFs of WheaGetErrorSourceInfo @ 0x1407C7890
 * Callers:
 *     PopReadWheaBootErrorCount @ 0x140C2FECC (PopReadWheaBootErrorCount.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaGetErrorSourceInfo(int a1, unsigned int *a2, __int64 *a3, ULONG a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 Pool2; // r10
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int i; // r8d
  __int64 v17; // rcx
  __int64 result; // rax

  v4 = qword_140EEEF20;
  v5 = 0;
  *a2 = 0;
  Pool2 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( dword_140EEEF14 && (__int64 *)v4 != &qword_140EEEF20 )
  {
    do
    {
      if ( v10 >= dword_140EEEF14 )
        break;
      ++v10;
      v13 = *(_DWORD *)(v4 + 40);
      v14 = v11 + 1;
      v4 = *(_QWORD *)v4;
      if ( v13 != a1 )
        v14 = v11;
      v11 = v14;
    }
    while ( (__int64 *)v4 != &qword_140EEEF20 );
    if ( v11 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 8 * v11, a4);
      if ( Pool2 )
      {
        v15 = qword_140EEEF20;
        for ( i = 0; (__int64 *)v15 != &qword_140EEEF20 && i < dword_140EEEF14 && v5 < v11; ++i )
        {
          if ( *(_DWORD *)(v15 + 40) == a1 )
          {
            v17 = v5++;
            *(_DWORD *)(Pool2 + 8 * v17 + 4) = *(_DWORD *)(v15 + 124);
            *(_DWORD *)(Pool2 + 8 * v17) = *(_DWORD *)(v15 + 24);
          }
          v15 = *(_QWORD *)v15;
        }
      }
      else
      {
        v12 = -1073741801;
      }
    }
  }
  result = v12;
  *a2 = v11;
  *a3 = Pool2;
  return result;
}
