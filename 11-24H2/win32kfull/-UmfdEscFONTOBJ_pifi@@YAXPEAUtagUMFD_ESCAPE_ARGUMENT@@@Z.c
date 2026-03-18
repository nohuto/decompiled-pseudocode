/*
 * XREFs of ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140330634
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     FONTOBJ_pifi @ 0x1400DB680 (FONTOBJ_pifi.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140160078 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

void __fastcall UmfdEscFONTOBJ_pifi(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2)
{
  struct UmfdTls *v3; // rax
  __int64 v4; // rbx
  FONTOBJ *v5; // rcx
  IFIMETRICS *v6; // rax

  v3 = UmfdTls::EnsureTls((__int64)a1, a2);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = (FONTOBJ *)*((_QWORD *)v3 + 5);
    if ( v5 )
    {
      v6 = FONTOBJ_pifi(v5);
      if ( v6 )
        v4 = *(_QWORD *)&v6[-1].panose.bMidline;
    }
  }
  *((_QWORD *)a1 + 1) = v4;
}
