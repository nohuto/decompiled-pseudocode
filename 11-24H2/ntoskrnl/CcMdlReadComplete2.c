/*
 * XREFs of CcMdlReadComplete2 @ 0x140A32058
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x140488AE0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x140A31FF0 (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
