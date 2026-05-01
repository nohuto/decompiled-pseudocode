/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0_____lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x1805B7148
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x1805B71B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0_____lambda_b97f6338922ac33e763b003ae07478e0___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  *a1 = off_1807EAB98;
  return a1;
}
