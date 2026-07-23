/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1408497E8
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     ExpDuplicateSingleHandle @ 0x140891D94 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140894C20 (ObpReferenceProcessObjectByHandle.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
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
