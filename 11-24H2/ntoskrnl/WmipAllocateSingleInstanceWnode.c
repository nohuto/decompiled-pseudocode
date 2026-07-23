/*
 * XREFs of WmipAllocateSingleInstanceWnode @ 0x140A81428
 * Callers:
 *     IoWMISetSingleInstance @ 0x1407A3C00 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1407A3D30 (IoWMISetSingleItem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipAllocateSingleInstanceWnode(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 *a7)
{
  unsigned int v8; // edi
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // ebx
  __int64 Pool2; // rcx

  v8 = -1073741670;
  if ( a1 + 1 >= a1 )
  {
    v9 = (a1 + 1) & 0xFFFFFFFE;
    v10 = *a2 + 2;
    v11 = v9;
    if ( v10 <= ~v9 )
    {
      v12 = v10 + v9;
      if ( v12 + 7 >= v12 )
      {
        v13 = (v12 + 7) & 0xFFFFFFF8;
        v14 = v13;
        if ( a3 <= ~v13 )
        {
          v15 = a3 + v13;
          Pool2 = ExAllocatePool2(0x40uLL, v15, 0x70696D57u);
          if ( Pool2 )
          {
            v8 = 0;
            *a4 = v11;
            *a5 = v14;
            *a6 = v15;
            *a7 = Pool2;
          }
        }
      }
    }
  }
  return v8;
}
