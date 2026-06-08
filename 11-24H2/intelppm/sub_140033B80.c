/*
 * XREFs of sub_140033B80 @ 0x140033B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140009BAC @ 0x140009BAC (sub_140009BAC.c)
 *     sub_140034FD0 @ 0x140034FD0 (sub_140034FD0.c)
 */

__int64 __fastcall sub_140033B80(__int64 a1, unsigned int **a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int *Pool2; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  unsigned int i; // r8d
  __int64 v15; // rax
  const char *v16; // rax
  int v17; // r8d

  if ( *(_WORD *)(a1 + 2) < 4u || a3 < 8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = 0;
    *a2 = 0LL;
    v6 = 0;
    v7 = *(unsigned __int16 *)(a1 + 2);
    if ( (unsigned __int16)v7 >= 4u )
    {
      v8 = a1 + 4;
      v9 = a1 + 4 + v7;
      while ( v8 < v9 )
      {
        v10 = *(unsigned __int16 *)(v8 + 2);
        if ( (unsigned __int16)v10 < 4u )
          v10 = 4LL;
        v8 += v10 + 4;
        ++v6;
      }
    }
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, (int)(4 * v6) + 4LL, 1919119952LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v6;
      v13 = a1 + 4;
      for ( i = 0; ; ++i )
      {
        if ( i >= v6 )
        {
          *a2 = v12;
          return v5;
        }
        if ( *(_WORD *)v13 )
          break;
        v12[i + 1] = *(_DWORD *)(v13 + 4);
        v15 = *(unsigned __int16 *)(v13 + 2);
        if ( (unsigned __int16)v15 < 4u )
          v15 = 4LL;
        v13 += v15 + 4;
      }
      v5 = -1072431096;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v16 = (const char *)sub_140034FD0();
        sub_140009BAC((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x53u, (__int64)&unk_140012FE8, v16, v17);
      }
      ExFreePoolWithTag(v12, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
