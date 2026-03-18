/*
 * XREFs of ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1401F4434
 * Callers:
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::FreeHostHandle(DXGKEYEDMUTEX *this, int a2)
{
  struct _KTHREAD **v2; // rdi
  _DWORD **v5; // rbx
  _DWORD *i; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = (struct _KTHREAD **)((char *)this + 112);
  DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
  v5 = (_DWORD **)((char *)this + 40);
  for ( i = *v5; i != (_DWORD *)v5; i = *(_DWORD **)i )
  {
    v7 = *(_QWORD *)i;
    if ( i[4] == a2 )
    {
      if ( *(_DWORD **)(v7 + 8) != i || (v8 = (_QWORD *)*((_QWORD *)i + 1), (_DWORD *)*v8 != i) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(i);
      break;
    }
  }
  DXGFASTMUTEX::Release(v2);
}
