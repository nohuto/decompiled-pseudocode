/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1401FEE3C
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D8B1C (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void **this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-10h]

  v2 = *((_QWORD *)*this + 5);
  if ( v2 )
  {
    v6[0] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[2] = v2;
    v6[1] = 0LL;
    v7 = 3;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v6);
  }
  v3 = (void *)*((_QWORD *)*this + 2);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)*this + 1);
  if ( v4 )
    ZwClose(v4);
  v5 = *(void **)*this;
  if ( v5 )
    ObfDereferenceObject(v5);
  Win32FreePool(*this);
}
