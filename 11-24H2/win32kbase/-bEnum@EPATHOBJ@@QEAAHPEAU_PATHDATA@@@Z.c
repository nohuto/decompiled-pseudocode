/*
 * XREFs of ?bEnum@EPATHOBJ@@QEAAHPEAU_PATHDATA@@@Z @ 0x1400EE580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bEnum(EPATHOBJ *this, struct _PATHDATA *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r8d
  __int64 v5; // r9
  int v6; // ecx
  __int64 *i; // rax
  _DWORD *j; // rcx
  int v10; // edx

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 80);
  if ( !v5 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( !v5 )
    {
      *(_QWORD *)&a2->flags = 0LL;
      a2->pptfx = 0LL;
      return v3;
    }
    *(_QWORD *)(v2 + 80) = v5;
  }
  a2->count = *(_DWORD *)(v5 + 20);
  a2->flags = *(_DWORD *)(v5 + 16);
  a2->pptfx = (POINTFIX *)(v5 + 24);
  *(_QWORD *)(v2 + 80) = *(_QWORD *)v5;
  v6 = *(_DWORD *)this;
  if ( (v6 & 0xC) == 4 )
  {
    *(_DWORD *)this = v6 & 0xFFFFFFFB;
    for ( i = *(__int64 **)(v2 + 32); i; i = (__int64 *)*i )
    {
      v10 = *((_DWORD *)i + 5);
      for ( j = i + 3; v10; --v10 )
      {
        *j *= 16;
        j[1] *= 16;
        j += 2;
      }
    }
  }
  LOBYTE(v3) = *(_QWORD *)(v2 + 80) != 0LL;
  return v3;
}
