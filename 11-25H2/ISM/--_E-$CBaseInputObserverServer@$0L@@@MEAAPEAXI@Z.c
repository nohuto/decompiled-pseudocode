/*
 * XREFs of ??_E?$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z @ 0x180137270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CBaseInputObserverServer@$0L@@@MEAA@XZ @ 0x180137170 (--1-$CBaseInputObserverServer@$0L@@@MEAA@XZ.c)
 */

void *__fastcall CBaseInputObserverServer<11>::`vector deleting destructor'(void *a1, char a2)
{
  CBaseInputObserverServer<11>::~CBaseInputObserverServer<11>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xE8);
  return a1;
}
