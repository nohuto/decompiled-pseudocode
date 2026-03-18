/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14084D528
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ExCreateHandleEx @ 0x14084CE30 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ExpDuplicateSingleHandle @ 0x14093D6A4 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1409405E0 (ObpReferenceProcessObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 *     ExDestroyHandle @ 0x14098A050 (ExDestroyHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx

  v2 = (unsigned __int8)((unsigned int)a2 >> 2);
  v3 = a2 & 0xFFFFFFFFFFFFFC00uLL;
  if ( (a2 & 0xFFFFFFFFFFFFFC00uLL) < *a1
    && ((v4 = *((_QWORD *)a1 + 1), (v4 & 3) == 0)
      ? (v6 = (_QWORD *)(v4 + 4 * v3))
      : ((v4 & 3) != 1
       ? (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * (v3 >> 19) - 2) + 8 * ((v3 >> 10) & 0x1FF)))
       : (v5 = *(_QWORD *)(v4 + 8 * (v3 >> 10) - 1)),
         v6 = (_QWORD *)(v5 + 4 * (v3 & 0x3FF))),
        v6 && *v6) )
  {
    return *v6 + 8 * v2;
  }
  else
  {
    return 0LL;
  }
}
