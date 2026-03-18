/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1400B653C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1400B6048 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1400B612C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1400B6354 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1)
{
  int v2; // edx
  unsigned int v3; // r9d
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax

  v2 = *((_DWORD *)a1 + 2) & 3;
  *((_BYTE *)a1 + 20) = 1;
  *((_BYTE *)a1 + 21) = v2 == 3;
  if ( v2 != 3 )
    *(_DWORD *)a1 = 0;
  v3 = *((_DWORD *)a1 + 3);
  v4 = (v3 + *((_DWORD *)a1 + 4) - 1) / *((_DWORD *)a1 + 4);
  if ( v4 >= 0xFF )
  {
    LODWORD(v4) = 255;
    *((_DWORD *)a1 + 4) = v3 / 0xFF;
  }
  v5 = ((unsigned int)(v4 + 7) >> 3) + 176;
  *((_DWORD *)a1 + 6) = v5;
  if ( v5 < 0xB8 )
    *((_DWORD *)a1 + 6) = 184;
}
