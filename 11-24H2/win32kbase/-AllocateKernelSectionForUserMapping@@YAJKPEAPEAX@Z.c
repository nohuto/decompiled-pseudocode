/*
 * XREFs of ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x140173FD0
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x140115410 (--0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z.c)
 */

__int64 __fastcall AllocateKernelSectionForUserMapping(unsigned int a1, void **a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  void *v6; // [rsp+50h] [rbp+18h] BYREF
  union _LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v7.QuadPart = a1 + 16LL;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v6, 0LL, &v7, 1u, 0LL);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    *a2 = v5;
  }
  else
  {
    v2 = -1073741801;
  }
  Gre::SectionObj::~SectionObj(&v6);
  return v2;
}
