/*
 * XREFs of ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x140076510
 * Callers:
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5448 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(struct _NDIS_IF_BLOCK *a1)
{
  PVOID *v2; // rbx
  struct _NDIS_IF_BLOCK **v3; // rcx
  struct _NDIS_IF_BLOCK *v4; // rax
  struct _NDIS_IF_BLOCK *v5; // rdx
  struct _NDIS_IF_BLOCK ***v6; // rax

  KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
  v2 = (PVOID *)P;
  if ( P != &P )
  {
    do
    {
      v3 = (struct _NDIS_IF_BLOCK **)v2;
      v2 = (PVOID *)*v2;
      v4 = v3[3];
      if ( v4 == a1 || v3[4] == a1 )
      {
        --v4->LowerLayerIfCount;
        --v3[4]->HigherLayerIfCount;
        v5 = *v3;
        if ( *(struct _NDIS_IF_BLOCK ***)&(*v3)->ifDescr.Length != v3
          || (v6 = (struct _NDIS_IF_BLOCK ***)v3[1], *v6 != v3) )
        {
          __fastfail(3u);
        }
        *v6 = (struct _NDIS_IF_BLOCK **)v5;
        *(_QWORD *)&v5->ifDescr.Length = v6;
        ExFreePoolWithTag(v3, 0);
      }
    }
    while ( v2 != &P );
  }
  *(_QWORD *)&a1->LowerLayerIfCount = 0LL;
  KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
}
