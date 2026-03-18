/*
 * XREFs of DrvPixelSpaceToUniformSpacePoint @ 0x14000B800
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14000B848 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvPixelSpaceToUniformSpacePoint(int *a1, int *a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState();
  return TransformPointWithUniformSpaceMapping(
           *(struct _MDEV **)(*(_QWORD *)(UserSessionState + 57008) + 16LL),
           a1,
           a2,
           0);
}
