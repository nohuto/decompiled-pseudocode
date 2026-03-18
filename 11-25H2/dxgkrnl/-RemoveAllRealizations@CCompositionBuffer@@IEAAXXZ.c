/*
 * XREFs of ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x140010224
 * Callers:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1400101E8 (--1CCompositionBuffer@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::RemoveAllRealizations(CCompositionBuffer *this)
{
  char *v2; // rbx
  char **v3; // rax
  char **v4; // rcx

  if ( *((_DWORD *)this + 72) )
  {
    v2 = (char *)this + 272;
    while ( 1 )
    {
      v3 = (char **)*((_QWORD *)v2 + 1);
      if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
        __fastfail(3u);
      *((_QWORD *)v2 + 1) = v4;
      *v4 = v2;
      if ( v3 == (char **)v2 )
        break;
      if ( v3 != (char **)8 )
        (*(void (__fastcall **)(char **, __int64))*(v3 - 1))(v3 - 1, 1LL);
    }
    *((_DWORD *)this + 72) = 0;
  }
}
