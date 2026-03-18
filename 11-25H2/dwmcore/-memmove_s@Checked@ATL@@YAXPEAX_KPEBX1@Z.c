/*
 * XREFs of ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180219BBC
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x180219A94 (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 * Callees:
 *     memmove_s @ 0x180219C00 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1802BE32C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::Checked::memmove_s(ATL::Checked *this, rsize_t a2, const void *a3, rsize_t a4)
{
  errno_t v4; // eax

  v4 = memmove_s(this, a2, a3, a4);
  if ( v4 && v4 != 80 )
  {
    if ( v4 != 12 )
    {
      if ( v4 != 22 && v4 != 34 )
        ATL::AtlThrowImpl(-2147467259);
      ATL::AtlThrowImpl(-2147024809);
    }
    ATL::AtlThrowImpl(-2147024882);
  }
}
