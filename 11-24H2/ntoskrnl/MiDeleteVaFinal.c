/*
 * XREFs of MiDeleteVaFinal @ 0x140266630
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 */

void __fastcall MiDeleteVaFinal(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v5 = 0LL;
  v2 = *(_QWORD **)(v1 + 8);
  v3 = v2[6];
  if ( v3 < 0 )
  {
    v2[1] = MiFreeLargePages(
              *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 174LL)),
              v3,
              (unsigned int)&v5,
              (int)v2 + 16,
              0);
    v2[6] = v5;
  }
  v4 = v2[5];
  if ( v4 )
  {
    if ( *(_QWORD *)(v1 + 96) )
      MiFreePhysicalPageChain(*(_QWORD *)(v4 + 32), v1 + 96);
  }
}
