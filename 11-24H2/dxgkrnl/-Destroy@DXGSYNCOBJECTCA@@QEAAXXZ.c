/*
 * XREFs of ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1402FAB74
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1402FA90C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140058A14 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1402FAA68 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTCA::Destroy(DXGSYNCOBJECTCA *this, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rcx
  _QWORD *v7; // rcx
  DXGADAPTERSYNCOBJECTCA *v8; // rsi

  v4 = (_QWORD **)((char *)this + 424);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v8 = (DXGADAPTERSYNCOBJECTCA *)(v5 - 14);
    v7[1] = v4;
    DXGADAPTERSYNCOBJECT::Stop((DXGADAPTERSYNCOBJECT *)(v5 - 14), a2, a3);
    if ( v8 )
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v8);
  }
  v6 = (void *)*((_QWORD *)this + 55);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 55) = 0LL;
  }
}
