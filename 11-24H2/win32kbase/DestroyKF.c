/*
 * XREFs of DestroyKF @ 0x140064130
 * Callers:
 *     DestroyKL @ 0x14006379C (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1401B5E80 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140107CDC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     RemoveKeyboardLayoutFile @ 0x140155C6C (RemoveKeyboardLayoutFile.c)
 */

void __fastcall DestroyKF(void *a1)
{
  struct _HANDLEENTRY *v2; // rax
  __int64 v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v2 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v4, v2);
  if ( (unsigned int)HMMarkObjectDestroy((struct _HEAD *)a1) )
  {
    RemoveKeyboardLayoutFile(a1);
    GreDeleteFastMutex(*((char **)a1 + 3));
    HMFreeObject((unsigned int *)a1);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v4);
  }
  else if ( v4 )
  {
    *(_QWORD *)(W32GetUserSessionState(v3) + 19824) = 0LL;
  }
}
