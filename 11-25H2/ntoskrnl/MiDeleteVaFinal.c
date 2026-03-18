/*
 * XREFs of MiDeleteVaFinal @ 0x140384040
 * Callers:
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
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
              *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 174LL)),
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
