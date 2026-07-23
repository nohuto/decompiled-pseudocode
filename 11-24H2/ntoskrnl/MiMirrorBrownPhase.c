/*
 * XREFs of MiMirrorBrownPhase @ 0x140B6E4AC
 * Callers:
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     PsQuitNextPartition @ 0x1405E3F34 (PsQuitNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406799E0 (MiEmptyAllWorkingSets.c)
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiMirrorBrownPhase(__int64 a1)
{
  int v1; // eax
  int v3; // r12d
  ULONG **i; // rcx
  ULONG **NextPartition; // rax
  ULONG **v6; // rdi
  ULONG *v7; // r15
  int v8; // r14d
  _BYTE *v9; // rbp
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // eax
  int v13; // esi
  unsigned __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0x800) == 0 && (v1 & 0xC0) == 0 )
  {
    v15 = 0LL;
    v3 = (v1 & 0xA) == 0;
    for ( i = 0LL; ; i = v6 )
    {
      NextPartition = (ULONG **)PsGetNextPartition(i);
      v6 = NextPartition;
      if ( !NextPartition )
        break;
      v7 = *NextPartition;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v7 == &MiSystemPartition )
      {
        v8 = 0;
        v9 = (_BYTE *)(a1 + 20);
        while ( 1 )
        {
          MiActOnMirrorBitmap((unsigned __int64 *)xmmword_140E301D0, 2);
          if ( v8 == v3 && !*v9 )
          {
            *v9 = 1;
            _InterlockedIncrement(&dword_140E37458);
            v9 = (_BYTE *)(a1 + 20);
          }
          v11 = *(_DWORD *)(a1 + 8);
          if ( (v11 & 0x400) != 0 || (v11 & 4) != 0 )
          {
            v12 = *(_DWORD *)(a1 + 12);
          }
          else
          {
            if ( (v11 & 0x10) == 0 )
              MiEmptyAllWorkingSets((__int64)v7);
            v12 = 0;
          }
          MiWalkPagesOnLists(a1, (__int64)v7, *(_DWORD *)(a1 + 16), v10, v12);
          v13 = MiMirrorPerformBrownWrites(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), &v15);
          if ( v13 < 0 )
          {
            PsQuitNextPartition(v6);
            return (unsigned int)v13;
          }
          if ( *v9 || v15 < 0x400 )
            break;
          ++v8;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
          continue;
        PsQuitNextPartition(v6);
        return 0LL;
      }
    }
  }
  return 0LL;
}
