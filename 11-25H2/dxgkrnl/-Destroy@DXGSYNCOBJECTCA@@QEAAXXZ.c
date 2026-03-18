/*
 * XREFs of ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x14033E314
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x14033DFDC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140058F54 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x14033E138 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTCA::Destroy(DXGSYNCOBJECTCA *this)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD *v5; // rcx
  DXGADAPTERSYNCOBJECTCA *v6; // rsi

  v2 = (_QWORD **)((char *)this + 424);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v6 = (DXGADAPTERSYNCOBJECTCA *)(v3 - 14);
    v5[1] = v2;
    DXGADAPTERSYNCOBJECT::Stop((DXGADAPTERSYNCOBJECT *)(v3 - 14));
    if ( v6 )
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v6);
  }
  v4 = (void *)*((_QWORD *)this + 55);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v4, 0);
    *((_QWORD *)this + 55) = 0LL;
  }
}
