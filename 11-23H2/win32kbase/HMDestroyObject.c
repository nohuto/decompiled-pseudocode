/*
 * XREFs of HMDestroyObject @ 0x1C0064C30
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C012C730 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01342F0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C014F020 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0064C78 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0064D08 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 */

__int64 __fastcall HMDestroyObject(void *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v7, a1);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1) )
  {
    HMFreeObject(v3, v2, v4, v5);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
