/*
 * XREFs of ?NdisPDBMDeleteDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@@Z @ 0x14013E800
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x1401396A8 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 */

void __fastcall NdisPDBMDeleteDomain(struct NDIS_PD_BM_DOMAIN_HANDLE__ *a1)
{
  if ( a1 )
    KALLOCATOR<1832993870,1>::operator delete(a1);
}
