/*
 * XREFs of HMCleanupGrantedHandle @ 0x14014A694
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 * Callees:
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x14019E7A8 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

struct _tagJOBSGLOBALS *__fastcall HMCleanupGrantedHandle(__int64 a1)
{
  struct _tagJOBSGLOBALS *result; // rax
  __int64 *i; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  _QWORD *v6; // rcx

  result = W32GetUserJobsGlobals();
  for ( i = *(__int64 **)result; i; i = (__int64 *)*i )
  {
    v4 = 0LL;
    v5 = *((_DWORD *)i + 14);
    while ( (unsigned int)v4 < v5 )
    {
      v6 = (_QWORD *)(i[8] + 8 * v4);
      if ( *v6 == a1 )
      {
        result = (struct _tagJOBSGLOBALS *)memmove(v6, v6 + 1, 8LL * (v5 - (unsigned int)v4 - 1));
        --*((_DWORD *)i + 14);
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return result;
}
