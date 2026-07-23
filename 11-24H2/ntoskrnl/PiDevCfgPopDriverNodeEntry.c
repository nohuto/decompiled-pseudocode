/*
 * XREFs of PiDevCfgPopDriverNodeEntry @ 0x1404C3B40
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall PiDevCfgPopDriverNodeEntry(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  v2 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    v2 = (_QWORD *)a1[1];
    if ( (_QWORD *)*v2 != a1 || (v3 = (_QWORD *)v2[1], (_QWORD *)*v3 != v2) )
      __fastfail(3u);
    a1[1] = v3;
    *v3 = a1;
    if ( a2 )
      *a2 = v2[2];
    ExFreePoolWithTag(v2, 0);
  }
  return v2 != 0LL;
}
