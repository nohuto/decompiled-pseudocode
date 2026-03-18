/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x180276560
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1802766E0 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 118LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                42LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                185LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                133LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                193LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                162LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                88LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                66LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 64LL))(
                *((_QWORD *)this + 32),
                169LL) )
    {
      return 9;
    }
  }
  return v2;
}
