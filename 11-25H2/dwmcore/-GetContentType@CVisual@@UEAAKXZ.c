/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x180281140
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1802812C0 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 117LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                41LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                183LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                132LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                191LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                161LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                87LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                65LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                167LL) )
    {
      return 9;
    }
  }
  return v2;
}
