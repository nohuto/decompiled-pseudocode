/*
 * XREFs of ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B5E44
 * Callers:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 * Callees:
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14014C2E0 (-HMDoubleFree@@YAXPEAX@Z.c)
 */

void __fastcall CheckForDoubleFree(struct _HANDLEENTRY *a1, struct _HEAD *a2)
{
  if ( !*((_BYTE *)a1 + 24) || *((_WORD *)a1 + 13) != (HIWORD(*(_DWORD *)a2) & 0x7FFF) )
    HMDoubleFree((ULONG_PTR)a2);
}
