/*
 * XREFs of HMDestroyObject @ 0x140063280
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAU_HEAD@@@Z @ 0x1400638C0 (-HMNullFnDestroy@@YAXPEAU_HEAD@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B0EB0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1401BE600 (DestroyBaseWindow.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140107CDC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

__int64 __fastcall HMDestroyObject(struct _HEAD *a1)
{
  struct _HANDLEENTRY *v2; // rax
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v2 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v5, v2);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1) )
  {
    HMFreeObject(a1);
    if ( v5 )
      *(_QWORD *)(W32GetUserSessionState(v3) + 19824) = 0LL;
    return 1LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v5);
    return 0LL;
  }
}
