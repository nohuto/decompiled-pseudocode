/*
 * XREFs of ??1DCMODOBJ@@QEAA@XZ @ 0x14021694C
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x14003871C (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCMODOBJ::~DCMODOBJ(DCMODOBJ *this)
{
  if ( *(_QWORD *)this )
    *(_QWORD *)(**(_QWORD **)this + 112LL) = *((_QWORD *)this + 1);
}
