/*
 * XREFs of ?_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14019CF88
 * Callers:
 *     ClearPwndDceLists @ 0x14019CEF8 (ClearPwndDceLists.c)
 * Callees:
 *     ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x140285894 (-ClearDce@@YAXPEAUtagDCE@@@Z.c)
 */

void __fastcall _ClearPwndDceList(struct _LIST_ENTRY *a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct tagDCE *v7; // rcx

  Flink = a1->Flink;
  if ( Flink != a1 )
  {
    do
    {
      v5 = Flink->Flink;
      if ( Flink->Flink != Flink )
      {
        if ( v5->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
          __fastfail(3u);
        Blink->Flink = v5;
        v5->Blink = Blink;
        Flink->Blink = Flink;
        Flink->Flink = Flink;
      }
      v7 = (struct tagDCE *)((char *)Flink - a2);
      if ( (*((_DWORD *)v7 + 12) & 0x400800) == 0 )
        ClearDce(v7);
      Flink = v5;
    }
    while ( v5 != a1 );
  }
}
