/*
 * XREFs of ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x14032CBE4
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

void __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(__int64 a1)
{
  char *v2; // rcx
  unsigned int i; // ebx
  char *v4; // rbx

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    v4 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  }
}
