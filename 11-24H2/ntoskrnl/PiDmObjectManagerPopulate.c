/*
 * XREFs of PiDmObjectManagerPopulate @ 0x140724CC8
 * Callers:
 *     PiDmInit @ 0x140C2620C (PiDmInit.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     _PnpGetObjectList @ 0x1408BB7D0 (_PnpGetObjectList.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectCreate @ 0x140ABF218 (PiDmObjectCreate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmObjectManagerPopulate(__int64 a1)
{
  void *Pool2; // rdi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int ObjectList; // eax
  int v7; // ebx
  _WORD *i; // rsi
  __int64 v9; // rax
  PVOID *v10; // rax
  PVOID *v11; // rdi
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *Buffer; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0x40000;
  Pool2 = 0LL;
  Buffer = 0LL;
  do
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x5A706E50u);
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 2LL * v13, 0x5A706E50u);
    if ( !Pool2 )
    {
      v7 = -1073741670;
LABEL_21:
      while ( 1 )
      {
        v10 = (PVOID *)RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), 1u);
        v11 = v10;
        if ( !v10 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), v10);
        PiDmObjectRelease(*v11);
      }
      return (unsigned int)v7;
    }
    ObjectList = PnpGetObjectList(v3, *(_DWORD *)(a1 + 208), v4, v5, (__int64)Pool2, v13, (__int64)&v13, 0x10000);
  }
  while ( ObjectList == -1073741789 );
  v7 = ObjectList;
  if ( ObjectList >= 0 && v13 )
  {
    for ( i = Pool2; *i; i += v9 + 1 )
    {
      v7 = PiDmObjectCreate(*(unsigned int *)(a1 + 208), i, &Buffer);
      if ( v7 < 0 )
        break;
      Buffer[8] |= 1u;
      Buffer[3] = 1;
      if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer, 8u, 0LL) )
      {
        PiDmObjectRelease(Buffer);
        v7 = -1073741670;
        break;
      }
      v9 = -1LL;
      do
        ++v9;
      while ( i[v9] );
    }
  }
  ExFreePoolWithTag(Pool2, 0x5A706E50u);
  if ( v7 < 0 )
    goto LABEL_21;
  return (unsigned int)v7;
}
