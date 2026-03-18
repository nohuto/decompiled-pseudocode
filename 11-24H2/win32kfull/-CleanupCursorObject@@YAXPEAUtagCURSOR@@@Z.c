/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002CA40
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     GreOnCURSINFODestroy @ 0x14002CB50 (GreOnCURSINFODestroy.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x14002CD60 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(void **a1)
{
  HSURF v2; // rcx
  HSURF v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(a1[8]);
    *((_DWORD *)a1 + 14) = 0;
    a1[8] = 0LL;
  }
  if ( *((_WORD *)a1 + 36) )
  {
    UserDeleteAtom();
    *((_WORD *)a1 + 36) = 0;
  }
  if ( ((_DWORD)a1[10] & 8) != 0 )
  {
    DestroyAniIcon((struct tagACON *)a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v2 = (HSURF)a1[11];
    if ( v2 )
    {
      GreDereferenceObject(v2);
      GreDecQuotaCount(a1[3]);
      a1[11] = 0LL;
    }
    v3 = (HSURF)a1[12];
    if ( v3 )
    {
      GreDereferenceObject(v3);
      GreDecQuotaCount(a1[3]);
      a1[12] = 0LL;
    }
    v4 = a1[16];
    if ( v4 )
    {
      GreDeleteObject(v4);
      GreDecQuotaCount(a1[3]);
      a1[16] = 0LL;
    }
    v5 = a1[13];
    if ( v5 )
    {
      GreDeleteObject(v5);
      a1[13] = 0LL;
    }
  }
}
