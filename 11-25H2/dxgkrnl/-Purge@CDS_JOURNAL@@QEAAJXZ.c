/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x140188744
 * Callers:
 *     ??1CCD_BTL@@MEAA@XZ @ 0x140261FA8 (--1CCD_BTL@@MEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140374400 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
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
