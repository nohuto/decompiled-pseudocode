/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001D050
 * Callers:
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180049540 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180021136 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

void __fastcall ATL::Checked::memcpy_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  int v4; // ebx
  int *v8; // rax

  v4 = 0;
  if ( a4 )
  {
    if ( !this )
      goto LABEL_3;
    if ( a3 && a2 >= a4 )
    {
      memcpy_0(this, a3, (size_t)a4);
      goto LABEL_12;
    }
    memset_0(this, 0, (size_t)a2);
    if ( a3 )
    {
      if ( a2 >= a4 )
      {
        v4 = 22;
        goto LABEL_12;
      }
      v8 = (int *)_o__errno(this, a2, a3);
      v4 = 34;
    }
    else
    {
LABEL_3:
      v8 = (int *)_o__errno(this, a2, a3);
      v4 = 22;
    }
    *v8 = v4;
    invalid_parameter_noinfo();
  }
LABEL_12:
  ATL::AtlCrtErrorCheck(v4);
}
