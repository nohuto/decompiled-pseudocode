/*
 * XREFs of ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140140E40
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x14015CCE0 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Ndis::Initmode::CheckAllDriversRunning(Ndis::Initmode *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r11
  unsigned __int64 i; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // r8

  v2 = *((unsigned int *)this + 1259);
  v3 = 0LL;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= v2 )
LABEL_14:
      __fastfail(5u);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 630) + 8 * i) + 80LL);
    if ( (*(_DWORD *)(v5 + 40) & 0x10) == 0 && !*(_QWORD *)(v5 + 56) )
      return 0;
  }
  v6 = *((unsigned int *)this + 1255);
  while ( v3 != v6 )
  {
    if ( v3 >= v6 )
      goto LABEL_14;
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 628) + 8 * v3) + 80LL);
    if ( (*(_DWORD *)(v7 + 32) & 1) != 0 && !*(_QWORD *)(v7 + 40) )
      return 0;
    ++v3;
  }
  return 1;
}
