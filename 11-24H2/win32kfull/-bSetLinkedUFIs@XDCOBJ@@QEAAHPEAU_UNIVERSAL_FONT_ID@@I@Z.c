/*
 * XREFs of ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1401E4DD4
 * Callers:
 *     NtGdiSetLinkedUFIs @ 0x1401E4C60 (NtGdiSetLinkedUFIs.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  void *v7; // rcx

  v3 = a3;
  *(_DWORD *)(*(_QWORD *)this + 308LL) = a3 == 0;
  v6 = *(_QWORD *)this;
  v7 = *(void **)(*(_QWORD *)this + 296LL);
  if ( v7 )
  {
    if ( a3 <= *(_DWORD *)(v6 + 304) )
      goto LABEL_3;
    if ( v7 != (void *)(v6 + 264) )
    {
      Win32FreePool(v7);
      *(_QWORD *)(*(_QWORD *)this + 296LL) = 0LL;
    }
  }
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)(*(_QWORD *)this + 296LL) = *(_QWORD *)this + 264LL;
    goto LABEL_3;
  }
  *(_QWORD *)(*(_QWORD *)this + 296LL) = PALLOCMEM(8 * (int)v3, 1684300103LL);
  if ( *(_QWORD *)(*(_QWORD *)this + 296LL) )
  {
LABEL_3:
    memmove(*(void **)(*(_QWORD *)this + 296LL), a2, 8 * v3);
    *(_DWORD *)(*(_QWORD *)this + 304LL) = v3;
    return 1LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 304LL) = 0;
  return 0LL;
}
