/*
 * XREFs of ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x140075B3C
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140215C3C (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

void *__fastcall operator new(size_t a1, __int64 a2, __int64 a3, const void *a4)
{
  size_t v4; // rbx
  void *Pool2; // rax
  void *v8; // rdi

  v4 = a1;
  if ( !a1 )
    v4 = 1LL;
  if ( v4 > 0x7FFFFFFF )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(258LL, v4, 1265072196LL, a4);
  v8 = Pool2;
  if ( Pool2 )
    memmove(Pool2, a4, v4);
  return v8;
}
