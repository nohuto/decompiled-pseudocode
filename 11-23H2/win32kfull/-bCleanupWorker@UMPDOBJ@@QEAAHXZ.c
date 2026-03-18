/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0298F2C
 * Callers:
 *     UMPDOBJ_bCleanupWrap @ 0x1C015A260 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02C6828 (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     DereferenceW32Process @ 0x1C0070A00 (DereferenceW32Process.c)
 *     EngDeletePath @ 0x1C0159F50 (EngDeletePath.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029944C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0299914 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  PATHOBJ *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  char v10; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v11; // [rsp+40h] [rbp+8h] BYREF

  v10 = 17;
  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, v10, 0LL);
  if ( result )
  {
    v3 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_DWORD *)this + 110) )
    {
      v11 = 0LL;
      v4 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v4);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 64), &v11, 0);
      }
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v5);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 80), &v11, 0);
      }
      v6 = (void *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 96), &v11, 0);
      }
    }
    v7 = (void *)*((_QWORD *)this + 49);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)this + 49) = 0LL;
    }
    v8 = *((_QWORD *)this + 44);
    if ( v8 )
    {
      MmUnmapViewOfSection(**((_QWORD **)this + 47), v8);
      DereferenceW32Process(*((_QWORD *)this + 47));
    }
    v9 = (void *)*((_QWORD *)this + 50);
    if ( v9 )
      Win32FreePool(v9);
    return 1LL;
  }
  return result;
}
