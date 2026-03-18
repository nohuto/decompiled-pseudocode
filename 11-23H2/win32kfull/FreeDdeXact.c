/*
 * XREFs of FreeDdeXact @ 0x1C01FA700
 * Callers:
 *     FindQMsg @ 0x1C012B670 (FindQMsg.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F92C4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FA884 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0040A18 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01F936C (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02D2218 (GreDeleteServerMetaFile.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeDdeXact(void **a1)
{
  struct _HANDLEENTRY *result; // rax
  _QWORD *v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v4, a1);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = a1[7];
    if ( v3 )
    {
      if ( (v3[2] & 0x24) != 0 )
        GreDeleteServerMetaFile(v3[6]);
      if ( ((_DWORD)a1[8] & 0x2000) != 0 )
      {
        RemovePublicObject(*((unsigned __int16 *)a1[7] + 37), *((void **)a1[7] + 6));
        *((_DWORD *)a1 + 16) &= ~0x2000u;
      }
      Win32FreePool(a1[7]);
    }
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  if ( v4 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
