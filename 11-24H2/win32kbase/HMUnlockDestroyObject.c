/*
 * XREFs of HMUnlockDestroyObject @ 0x1401475B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 */

int *__fastcall HMUnlockDestroyObject(int *a1)
{
  int *v1; // rbx

  v1 = a1;
  if ( a1[2] == 1 )
  {
    HMMarkObjectDestroyWorker((struct _HEAD *)a1);
    return HMUnlockObject(v1);
  }
  return v1;
}
