/*
 * XREFs of ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D8B68
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     UMPDThreadCleanup @ 0x1400D8A90 (UMPDThreadCleanup.c)
 *     NtGdiSetPUMPDOBJ @ 0x140262E70 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     EngDeletePath @ 0x1400DA170 (EngDeletePath.c)
 *     DereferenceW32ProcessEx @ 0x140106804 (DereferenceW32ProcessEx.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x14020090C (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

void __fastcall UMPDOBJ::Dereference(UMPDOBJ *this)
{
  PATHOBJ *v2; // rcx
  void *v3; // rdx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  char v10; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v11; // [rsp+40h] [rbp+8h] BYREF

  v10 = 17;
  if ( HmgRemoveObject(*(_QWORD *)this, 0LL, 1LL, 1LL, v10, 0LL) )
  {
    v2 = (PATHOBJ *)*((_QWORD *)this + 32);
    if ( v2 )
      EngDeletePath(v2);
    if ( *((_BYTE *)this + 456) )
    {
      v11 = 0LL;
      v3 = (void *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v3);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 80), &v11, 0LL);
      }
      v4 = (void *)*((_QWORD *)this + 12);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v4);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 96), &v11, 0LL);
      }
      v5 = (void *)*((_QWORD *)this + 14);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v5);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 112), &v11, 0LL);
      }
    }
    v6 = (void *)*((_QWORD *)this + 51);
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)this + 51) = 0LL;
    }
    v7 = *((_QWORD *)this + 46);
    if ( v7 )
    {
      MmUnmapViewOfSection(**((_QWORD **)this + 49), v7);
      DereferenceW32ProcessEx(*((_QWORD *)this + 49), 1LL);
    }
    v8 = (void *)*((_QWORD *)this + 52);
    if ( v8 )
      Win32FreePool(v8);
    v9 = (void *)*((_QWORD *)this + 4);
    if ( v9 )
      Win32FreePool(v9);
    Win32FreePool(this);
  }
  else
  {
    DEC_SHARE_REF_CNT(this);
  }
}
