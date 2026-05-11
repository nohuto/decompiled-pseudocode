/*
 * XREFs of PropertyInitializeGeqLevelCache @ 0x1400330C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyInitializeGeqLevelCache(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  __int64 Pool2; // rax
  unsigned int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // rdx
  int v14; // r15d
  __int64 i; // r8
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0;
  v6 = -1073741670;
  Pool2 = ExAllocatePool2(256LL, 152LL, 1096972357LL);
  v8 = (unsigned int *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 32;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           152LL,
           Pool2,
           *(_DWORD *)(a3 + 8),
           129,
           &v17);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(a3 + 16) = v8[1];
      v9 = *v8;
      *(_DWORD *)(a3 + 12) = v9;
      if ( *v8 )
      {
        v10 = ExAllocatePool2(256LL, 20 * v9, 1096972357LL);
        v11 = (_DWORD *)v10;
        if ( v10 )
        {
          v12 = 0;
          for ( *(_QWORD *)(a3 + 32) = v10;
                v12 < *(_DWORD *)(a3 + 12);
                *(_DWORD *)(v10 + 20 * v13) = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * v13) )
          {
            v13 = v12++;
          }
          v14 = 130;
          while ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, _DWORD, int, int *))(a2 + 136))(
                   a1,
                   a2,
                   152LL,
                   v8,
                   *(_DWORD *)(a3 + 8),
                   v14,
                   &v17);
            if ( v6 >= 0 )
            {
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 12); i = (unsigned int)(i + 1) )
              {
                switch ( v14 )
                {
                  case 130:
                    v11[5 * i + 3] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                  case 131:
                    v11[5 * i + 4] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                  case 132:
                    v11[5 * i + 1] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                }
              }
            }
            if ( (unsigned int)++v14 > 0x84 )
            {
              if ( v6 >= 0 )
              {
                *(_DWORD *)(a2 + 96) |= 1 << *(_DWORD *)(a3 + 4);
                v6 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v11, ExFreePool);
                goto LABEL_24;
              }
              break;
            }
          }
          ExFreePool(v11);
        }
        else
        {
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741438;
      }
    }
LABEL_24:
    ExFreePool(v8);
  }
  return (unsigned int)v6;
}
