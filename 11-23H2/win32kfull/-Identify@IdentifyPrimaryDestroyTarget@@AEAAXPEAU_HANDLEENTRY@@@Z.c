/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0040A50
 * Callers:
 *     DestroySMWP @ 0x1C0040930 (DestroySMWP.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0040A18 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  PERESOURCE *v4; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v4 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
    if ( ExIsResourceAcquiredExclusiveLite(*v4) == 1 )
    {
      *(_BYTE *)this = gphePrimaryDestroyTarget == 0LL;
      if ( gphePrimaryDestroyTarget )
      {
        if ( a2 != gphePrimaryDestroyTarget )
          ++gcSecondaryDestroyTargets;
      }
      else
      {
        gphePrimaryDestroyTarget = a2;
      }
    }
  }
}
