/*
 * XREFs of MiNodeFromFaultPacket @ 0x1403EC3F0
 * Callers:
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFromFaultPacket(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // rcx
  char v4; // dl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (char *)(v1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v1 & 1) != 0 && (*v2 == 2 || (v4 = *v2, *v2 == 7) || v4 == 8 || v4 == 4) )
    return *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
  else
    return 0LL;
}
