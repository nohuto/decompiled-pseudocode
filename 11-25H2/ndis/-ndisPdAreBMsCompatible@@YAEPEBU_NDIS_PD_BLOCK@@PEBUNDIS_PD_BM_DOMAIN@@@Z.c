/*
 * XREFs of ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x140148D30
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1401485A0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisPdAreBMsCompatible(
        const struct _NDIS_PD_BLOCK *a1,
        __int64 (__fastcall **a2)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))
{
  char v2; // al
  char v3; // r8
  __int64 (__fastcall *v4)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **); // rax

  v2 = *((_BYTE *)a1 + 13);
  v3 = 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return 0;
    v4 = *(__int64 (__fastcall **)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))(*(_QWORD *)(*(_QWORD *)a1 + 3760LL) + 1136LL);
  }
  else
  {
    v4 = NdisPDBMCreateDomain;
  }
  if ( a2[7] != v4 )
    return 0;
  return v3;
}
