/*
 * XREFs of ndisVerifySynchronousOidAfterCompletion @ 0x1400C7CBC
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003554 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisVerifySynchronousOidAfterCompletion(ULONG_PTR BugCheckParameter3, int a2, ULONG_PTR a3)
{
  int v3; // r9d
  int v4; // r9d
  __int64 result; // rax
  bool v6; // cc

  v3 = *(_DWORD *)(BugCheckParameter3 + 4);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 11 )
        goto LABEL_10;
      if ( *(_DWORD *)(BugCheckParameter3 + 60) > *(_DWORD *)(BugCheckParameter3 + 52) )
        goto LABEL_12;
      result = *(unsigned int *)(BugCheckParameter3 + 48);
      v6 = *(_DWORD *)(BugCheckParameter3 + 64) <= (unsigned int)result;
    }
    else
    {
      result = *(unsigned int *)(BugCheckParameter3 + 48);
      v6 = *(_DWORD *)(BugCheckParameter3 + 52) <= (unsigned int)result;
    }
    if ( !v6 )
      goto LABEL_12;
  }
  else
  {
    result = *(unsigned int *)(BugCheckParameter3 + 48);
    if ( *(_DWORD *)(BugCheckParameter3 + 52) > (unsigned int)result )
      goto LABEL_12;
  }
LABEL_10:
  if ( a2 == 259 || *(_QWORD *)(BugCheckParameter3 + 72) )
LABEL_12:
    ndisBugCheckEx(0x26uLL, a3, BugCheckParameter3, a2);
  return result;
}
