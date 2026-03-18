/*
 * XREFs of ?MulSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z @ 0x1401CEE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulSetPalette(
        struct DHPDEV__ *a1,
        struct _PALOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  unsigned int v9; // edi
  __int64 v10; // rax

  v5 = *(_QWORD **)a1;
  v9 = 1;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v10 = v5[6];
      if ( (*(_DWORD *)(v10 + 2156) & 0x100) != 0 && *(_QWORD *)(v10 + 2856) )
        v9 &= (*(__int64 (__fastcall **)(_QWORD, struct _PALOBJ *, _QWORD, _QWORD, unsigned int))(v10 + 2856))(
                *(_QWORD *)(v10 + 1784),
                a2,
                a3,
                a4,
                a5);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return v9;
}
