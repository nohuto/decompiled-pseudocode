/*
 * XREFs of ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1401EE8A4
 * Callers:
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x14033DE0C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::FreeHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v4; // rdi
  _DWORD **v5; // rbx
  _DWORD *i; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  if ( (*((_BYTE *)this + 408) & 1) != 0 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 32);
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v5 = (_DWORD **)((char *)this + 104);
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
    DXGFASTMUTEX::Release(v4);
  }
  else
  {
    *((_DWORD *)this + 24) = 0;
  }
}
