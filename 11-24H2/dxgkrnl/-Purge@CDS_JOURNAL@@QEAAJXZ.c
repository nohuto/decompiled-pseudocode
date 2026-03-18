/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x14018AA54
 * Callers:
 *     ??1CCD_BTL@@MEAA@XZ @ 0x140268EA8 (--1CCD_BTL@@MEAA@XZ.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14031B5E4 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Purge(CDS_JOURNAL *this)
{
  char *v1; // rbx
  char **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  while ( 1 )
  {
    v2 = (char **)*((_QWORD *)v1 + 1);
    if ( *v2 != v1 || (v3 = (char **)v2[1], *v3 != (char *)v2) )
      __fastfail(3u);
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
  return 0LL;
}
