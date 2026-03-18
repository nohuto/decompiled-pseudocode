/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x14013F014
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x14013EA30 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8

  v3 = 4LL * *((_QWORD *)this + 3);
  v4 = 8LL * *((_QWORD *)this + 2);
  v5 = -v3;
  v6 = v4;
  if ( v3 > 0 )
    v5 = v3;
  v7 = v4 - v3;
  if ( v7 >= 0 )
    v8 = v7;
  else
    v8 = v3 - v6;
  if ( v5 <= v8 )
  {
    if ( v7 >= 0 )
      v9 = v7;
    else
      v9 = v3 - v6;
  }
  else
  {
    v9 = -v3;
    if ( v3 > 0 )
      v9 = v3;
  }
  *a2 = v9;
}
