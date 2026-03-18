/*
 * XREFs of ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802D40E0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802CE194 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802D4100 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802D42F8 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _SLIST_ENTRY *__fastcall CHolographicInteropTaskQueue::ReverseList(
        CHolographicInteropTaskQueue *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *result; // rax
  struct _SLIST_ENTRY *Next; // rcx

  result = 0LL;
  if ( a2 )
  {
    do
    {
      Next = a2->Next;
      a2->Next = result;
      result = a2;
      a2 = Next;
    }
    while ( Next );
  }
  return result;
}
